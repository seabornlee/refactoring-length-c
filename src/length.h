#ifndef REFACTOR_LENGTH_C_LENGTH_H
#define REFACTOR_LENGTH_C_LENGTH_H

typedef struct {
    double value;
    const char *unit;
} Length;

typedef Length *LengthPtr;

LengthPtr newLength(double val, const char *unit);
LengthPtr as(LengthPtr obj, const char *unit);

#endif //REFACTOR_LENGTH_C_LENGTH_H

