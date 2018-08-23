//
// Created by Lc on 2018/8/23.
//

#include <iostream>
using namespace std;

class Wolf {
public:
    Wolf() = default;

    void kill(){
        cout << "kill" <<endl;
    }
};

class Man {
public:
    Man() = default;

    void shou(){
        cout << "show" << endl;
    }
};

class WolfMan : public Wolf, public Man{
public:
    WolfMan() = default;
};