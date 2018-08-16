//
// Created by Lc on 2018/8/16.
//

#include <iostream>
#include "Demo.h"

using namespace std;

void Demo::setValue(int value) {
    this->value = value;
}

int Demo::getValue() {
    return this->value;
}

Demo::Demo(int value) {
    this->value = value;
    cout << "Demo" << endl;
}

Demo::~Demo() {
    cout << "~Demo" << endl;
}
