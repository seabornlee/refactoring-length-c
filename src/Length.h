#ifndef REFACTOR_LENGTH_CPP_LENGTH_H
#define REFACTOR_LENGTH_CPP_LENGTH_H


class Length {
public:
    Length(double val, const char *uinnt);

    Length as(const char *u);

    double getVal();

    const char * getUinnt();

private:
    double val;
    const char *uinnt;
};

#endif //REFACTOR_LENGTH_CPP_LENGTH_H

