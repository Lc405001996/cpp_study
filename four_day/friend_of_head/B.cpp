//
// Created by Lc on 2018/8/21.
//
#include "B.h"

int B::getval(A &obj) {
    return obj.val;
}

void B::setval(A &obj, int value) {
    obj.val = value;
}
