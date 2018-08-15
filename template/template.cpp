//
// Created by Lc on 2018/8/15.
//

#include <cstdio>

template <typename T>

T add(T a, T b)
{
    return a + b;
}

int main()
{
    printf("%d\n", add(1, 2));
    printf("%f\n", add(1.0, 2.0));
}