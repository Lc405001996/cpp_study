//
// Created by Lc on 2018/8/22.
//

#include <iostream>
using namespace std;

template <class T>
class Demo {
private:
    T val;

public:
    explicit Demo(T val) : val(val) {}
    Demo() = default;

    T getVal() const;
    void setVal(T val);
};

template <class T>
T Demo<T>::getVal() const {
    return val;
}

template  <class T>
void Demo<T>::setVal(T val) {
    Demo::val = val;
}

int main()
{
    Demo <int>obj(12);
    Demo <char>obj1{};

    obj1.setVal('1');

    cout << obj1.getVal() << endl;

    obj.setVal(3.5);
    cout << obj.getVal() << endl;
}