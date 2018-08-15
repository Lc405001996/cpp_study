//
// Created by Lc on 2018/8/15.
//

#include <cstdio>

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    printf("%d \n", add(1, 2));
    printf("%f \n", add(1.0, 2.0));
}