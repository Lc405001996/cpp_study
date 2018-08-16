//
// Created by Lc on 2018/8/16.
//

#include <iostream>
#include "Demo.h"

using namespace std;

int main()
{
    Demo demo(34);
    cout << demo.getValue() << endl;
    demo.setValue(12);
    demo.~Demo();
    cout << demo.getValue() << endl;
}