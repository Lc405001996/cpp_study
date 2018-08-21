//
// Created by Lc on 2018/8/21.
//

#ifndef CPP_STUDY_A_H
#define CPP_STUDY_A_H

#include "B.h"

class A {
private:
    int val;
public:
    explicit A(int val);
    friend int B::getval(A &obj);
    friend void B::setval(A &obj, int value);
};


#endif //CPP_STUDY_A_H
