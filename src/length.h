#ifndef REFACTOR_LENGTH_C_LENGTH_H
#define REFACTOR_LENGTH_C_LENGTH_H

static const char *FOOT = "foot";
static char *const INCH = "inch";
static char *const YARD = "yard";

typedef struct {
    double value;
    const char *unit;
} Length;

typedef Length *LengthPtr;

LengthPtr newLength(double val, const char *unit);
LengthPtr as(LengthPtr obj, const char *unit);

#endif //REFACTOR_LENGTH_C_LENGTH_H

