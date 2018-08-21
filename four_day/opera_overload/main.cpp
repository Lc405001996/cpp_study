//
// Created by Lc on 2018/8/21.
//

#include "Unreal.h"
#include <iostream>


using namespace std;

int main()
{
    Unreal u1 = Unreal(1, 2);
    Unreal u2 = Unreal(3, 4);

    Unreal u = u1 + u2;
    u.show();
}