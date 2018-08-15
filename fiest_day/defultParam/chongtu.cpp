//
// Created by Lc on 2018/8/15.
//

#include <iostream>

int add(int a, int b= 0, int c = 2, int d = 3);
int add(int a, int b);

int main()
{
    printf("%d\n", add(1));
//    printf("%d\n", add(1,1)); //这种是错误的，add is ambiguous,暧昧的
    printf("%d\n", add(1, 2, 3));
    printf("%d\n", add(1, 2, 3, 4));

}

int add(int a, int b, int c, int d)
{
    return a + b + c + d;
}
int add(int a, int b)
{
    return a + b;
}