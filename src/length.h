#ifndef REFACTOR_LENGTH_C_LENGTH_H
#define REFACTOR_LENGTH_C_LENGTH_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    double val;
    const char *uinnt;
} Length;

typedef Length *LengthPtr;

LengthPtr newLength(double val, const char *uinnt);

LengthPtr as(LengthPtr obj, const char *u);

#ifdef __cplusplus
}
#endif
#endif //REFACTOR_LENGTH_C_LENGTH_H

