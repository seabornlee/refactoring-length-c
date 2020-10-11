#include <cstring>
#include "Length.h"

Length::Length(double val, const char* uinnt) {
    this->val = val;
    this->uinnt = uinnt;
}

double Length::getVal() {
    return this->val;
}

const char *Length::getUinnt() {
    return this->uinnt;
}

Length Length::as(const char *u) {
    Length len =  *this;
    if (strcmp(this->uinnt, "f") == 0) {
        if (strcmp(u, "yard") == 0) {
            len = Length(this->val / 3, u);
        } else if (strcmp(u, "inch") == 0) {
            len = Length(this->val * 12, u);
        }
    }

    if (strcmp(this->uinnt, "yard") == 0) {
        if (strcmp(u, "inch") == 0) {
            len = Length(this->val * 36, u);
        } else if (strcmp(u, "f") == 0) {
            len = Length(this->val * 3, u);
        }
    }

    if (strcmp(this->uinnt, "inch") == 0) {
        if (strcmp(u, "f") == 0) {
            len = Length(this->val / 12, u);
        } else if (strcmp(u, "yard") == 0) {
            len = Length(this->val / 36, u);
        }
    }
    return len;
}


