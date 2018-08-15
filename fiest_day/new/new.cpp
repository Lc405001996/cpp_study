//
// Created by Lc on 2018/8/15.
//

#include <iostream>
using namespace std;

int main()
{
    auto *p = new int[10];

    for (int i  = 0; i < 10; i++)
    {
        *(p+i) = i;
        cout << p[i] << endl;
    }

    delete []p;
}