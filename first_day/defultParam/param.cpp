//
// Created by Lc on 2018/8/15.
//

#include <iostream>

int add(int a, int b = 5);

int main()
{
    printf("%d\n", add(1));
    return 0;
}

int add(int a, int b)
{
    return a + b;
}