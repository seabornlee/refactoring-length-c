#include "length.h"
#include <string.h>

Length *newLength(double value, const char *unit) {
    LengthPtr length = (LengthPtr) malloc(sizeof(Length));

    length->value = value;
    length->unit = unit;
    return length;
}

LengthPtr as(LengthPtr obj, const char *unit) {
    LengthPtr length = obj;
    if (strcmp(obj->unit, FOOT) == 0 && strcmp(unit, INCH) == 0) {
        length = newLength(obj->value * 12, unit);
    }

    if (strcmp(obj->unit, INCH) == 0 && strcmp(unit, FOOT) == 0) {
        length = newLength(obj->value / 12, unit);
    }

    if (strcmp(obj->unit, YARD) == 0) {
        if (strcmp(unit, INCH) == 0) {
            length = newLength(obj->value * 36, unit);
        } else if (strcmp(unit, FOOT) == 0) {
            length = newLength(obj->value * 3, unit);
        }
    } else if (strcmp(unit, YARD) == 0) {
        if (strcmp(obj->unit, FOOT) == 0) {
            length = newLength(obj->value / 3, unit);
        } else if (strcmp(obj->unit, INCH) == 0) {
            length = newLength(obj->value / 36, unit);
        }
    }
    return length;
}

