//
// Created by Lc on 2018/8/21.
//

#include <iostream>

using namespace std;

class C;

class D {
public:
    void setval(C &obj, int value);

    int getval(C &obj);
};

class C {
private:
    int val;

    friend int D::getval(C &obj);

    friend void D::setval(C &obj, int value);
};

void D::setval(C &obj, int value)
{
    obj.val = value;
}

int D::getval(C &obj)
{
    return obj.val;
}

int main()
{
    C C;
    D D;

}