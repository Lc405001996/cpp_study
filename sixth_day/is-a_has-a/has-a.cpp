//
// Created by Lc on 2018/8/23.
//

#include <iostream>

using namespace std;

class Fruit {
private:
    int a;
public:
    int getA() const {
        return a;
    }

    void setA(int a) {
        Fruit::a = a;
    }
};

class Mi {
private:
public:
    int getB() const {
        return b;
    }

    void setB(int b) {
        Mi::b = b;
    }

private:
    int b;
};

class Lunch {
public:
    Fruit fruit;
    Mi mi;
};

int main(){
    Lunch lunch{};
    lunch.mi.setB(12);
}