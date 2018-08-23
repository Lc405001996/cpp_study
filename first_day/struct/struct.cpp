//
// Created by Lc on 2018/8/15.
//

/*
 *  为了了解类的概念
 */

#include <iostream>

struct Str {
    //属性
private:
    char data;
    int len;

    //方法
public:
    void set(char x, int y)
    {
        data = x;
        len = y;
    }
    int size(struct Str str)
    {
        return str.len;
    }
    char c_str(struct Str str)
    {
        return str.data;
    }
};


int main()
{
#if 0
    auto *str = (struct Str*)malloc(sizeof(struct Str));
    str->set('a', 1);

    printf("%d\n", str->size(*str));
    printf("%c\n", str->c_str(*str));
#elif 1
    struct Str str{};
    str.set('a', 1);

    printf("%d\n", str.size(str));
    printf("%c\n", str.c_str(str));
#endif
}