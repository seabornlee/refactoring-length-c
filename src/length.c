#include "length.h"
#include <string.h>


double newValueIn(const Length *obj, enum Unit *targetUnit);

LengthPtr newLength(double value, enum Unit unit) {
    LengthPtr length = (LengthPtr) malloc(sizeof(Length));

    length->value = value;
    length->temp_unit = unit;
    return length;
}

LengthPtr as(LengthPtr obj, enum Unit targetUnit) {
    return newLength(newValueIn(obj, &targetUnit), targetUnit);
}

double newValueIn(const Length *obj, enum Unit *targetUnit) {
    if (obj->temp_unit == Foot && (*targetUnit) == Inch) {
        return obj->value * 12;
    }

    if (obj->temp_unit == Inch && (*targetUnit) == Foot) {
        return obj->value / 12;
    }

    if (obj->temp_unit == Yard && (*targetUnit) == Inch) {
        return obj->value * 36;
    }

    if (obj->temp_unit == Yard && (*targetUnit) == Foot) {
        return obj->value * 3;
    }

    if (obj->temp_unit == Foot && (*targetUnit) == Yard) {
        return obj->value / 3;
    }

    if (obj->temp_unit == Inch && (*targetUnit) == Yard) {
        return obj->value / 36;
    }
    return obj->value;
}

