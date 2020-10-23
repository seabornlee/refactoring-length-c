#ifndef REFACTOR_LENGTH_C_LENGTH_H
#define REFACTOR_LENGTH_C_LENGTH_H

typedef struct {
    double val;
    const char *uinnt;
} Length;

typedef Length *LengthPtr;

LengthPtr newLength(double val, const char *uinnt);
LengthPtr as(LengthPtr obj, const char *u);

#endif //REFACTOR_LENGTH_C_LENGTH_H

