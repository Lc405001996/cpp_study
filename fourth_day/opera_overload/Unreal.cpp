//
// Created by Lc on 2018/8/21.
//

#include <iostream>
#include "Unreal.h"

Unreal::Unreal(int shibu, int xubu) : shibu(shibu), xubu(xubu) {}

void Unreal::show() {
    std::cout << this->shibu << "+" << this->xubu << "i" << std::endl;
}

#if 0
Unreal Unreal::operator+(const Unreal &u1) {
    return Unreal(this->shibu + u1.shibu, this->xubu + u1.xubu);
}
#else
Unreal operator+(const Unreal &u1, const Unreal &u2) {
    return Unreal(u1.shibu+u2.shibu, u1.xubu+u2.xubu);
}

// ++u
Unreal &operator++(Unreal &u) {
    u.setShibu(u.getShibu() + 1);
    u.setXubu(u.getXubu() + 1);
    return u;
}

//  u++
const Unreal operator++(Unreal &u, int) {
    Unreal u1(u);
    u.setShibu(u.getShibu() + 1);
    u.setXubu(u.getXubu() + 1);
    return u1;
}

void Unreal::setShibu(int shibu) {
    Unreal::shibu = shibu;
}

void Unreal::setXubu(int xubu) {
    Unreal::xubu = xubu;
}

int Unreal::getShibu() const {
    return shibu;
}

int Unreal::getXubu() const {
    return xubu;
}

Unreal::~Unreal() {
    std::cout << "~Unreal" << std::endl;
}

#endif

