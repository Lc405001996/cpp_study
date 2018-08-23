//
// Created by Lc on 2018/8/22.
//
#include <iostream>
using namespace std;

template <typename T, typename T1>
T add(T o1, T1 o2)
{
    return o1 + o2;
}

int main()
{
    cout << add(3.4, 5) << endl;
}
