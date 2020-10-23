#include "length.h"
#include <string.h>

Length *newLength(double val, const char *uinnt) {
    LengthPtr length = (LengthPtr) malloc(sizeof(Length));

    length->val = val;
    length->uinnt = uinnt;
    return length;
}

LengthPtr as(LengthPtr obj, const char *u) {
    LengthPtr len = obj;
    if (strcmp(obj->uinnt, "f") == 0 && strcmp(u, "inch") == 0) {
        len = newLength(obj->val * 12, u);
    }

    if (strcmp(obj->uinnt, "inch") == 0 && strcmp(u, "f") == 0) {
        len = newLength(obj->val / 12, u);
    }

    if (strcmp(obj->uinnt, "yard") == 0) {
        if (strcmp(u, "inch") == 0) {
            len = newLength(obj->val * 36, u);
        } else if (strcmp(u, "f") == 0) {
            len = newLength(obj->val * 3, u);
        }
    } else if (strcmp(u, "yard") == 0) {
        if (strcmp(obj->uinnt, "f") == 0) {
            len = newLength(obj->val / 3, u);
        } else if (strcmp(obj->uinnt, "inch") == 0) {
            len = newLength(obj->val / 36, u);
        }
    }
    return len;
}

