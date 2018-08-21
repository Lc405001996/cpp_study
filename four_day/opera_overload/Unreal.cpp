//
// Created by Lc on 2018/8/21.
//

#include <iostream>
#include "Unreal.h"

Unreal::Unreal(int shibu, int xubu) : shibu(shibu), xubu(xubu) {
}

Unreal Unreal::operator+(Unreal &u1) {
    return Unreal(this->shibu + u1.shibu, this->xubu + u1.xubu);
}

void Unreal::show() {
    std::cout << this->shibu << "+" << this->xubu << "i" << std::endl;
}

