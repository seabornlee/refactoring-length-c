#include "length.h"
#include <string.h>


LengthPtr newLength(double val, enum Unit unit) {
    LengthPtr length = (LengthPtr) malloc(sizeof(Length));

    length->value = val;
    length->temp_unit = unit;
    return length;
}

LengthPtr as(LengthPtr obj, enum Unit targetUnit) {
    LengthPtr length = obj;
    if (obj->temp_unit == Foot && targetUnit == Inch) {
        length = newLength(obj->value * 12, targetUnit);
    }

    if (obj->temp_unit == Inch && targetUnit == Foot) {
        length = newLength(obj->value / 12, targetUnit);
    }

    if (obj->temp_unit == Yard) {
        if (targetUnit == Inch) {
            length = newLength(obj->value * 36, targetUnit);
        } else if (targetUnit == Foot) {
            length = newLength(obj->value * 3, targetUnit);
        }
    } else if (targetUnit == Yard) {
        if (obj->temp_unit == Foot) {
            length = newLength(obj->value / 3, targetUnit);
        } else if (obj->temp_unit == Inch) {
            length = newLength(obj->value / 36, targetUnit);
        }
    }
    return length;
}

