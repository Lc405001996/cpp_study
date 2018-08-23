//
// Created by Lc on 2018/8/22.
//

#include <iostream>
using namespace std;

template <typename T, int val>
int getMemory(T **p)
{
    *p = new T[val];
    if (*p == nullptr)
        return -1;
    else
        return 0;
}

int main()
{
    char *p = nullptr;
    getMemory<char, 10>(&p);
    cout << sizeof(p) << endl;
}