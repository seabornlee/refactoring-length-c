#ifndef REFACTOR_LENGTH_C_LENGTH_H
#define REFACTOR_LENGTH_C_LENGTH_H

enum Unit {
    Foot, Inch, Yard
};

typedef struct {
    double value;
    enum Unit temp_unit;
} Length;

typedef Length *LengthPtr;

LengthPtr newLength(double value, enum Unit unit);
LengthPtr as(LengthPtr obj, enum Unit targetUnit);

#endif //REFACTOR_LENGTH_C_LENGTH_H

