//
// Created by Lc on 2018/8/21.
//

#ifndef CPP_STUDY_MYSTRING_H
#define CPP_STUDY_MYSTRING_H

#include <iostream>

class MyString {
private:
    char *data;
    int size;

public:
    explicit MyString(char *data = nullptr);
    MyString(const MyString &str);

    char *getData() const;

    int getSize() const;


    MyString &operator= (const MyString &str);
    MyString &operator= (char *str);
    friend std::ostream &operator << (std::ostream &os, MyString str);
    friend MyString operator+ (const MyString &st1, const MyString &st2);
    friend MyString operator+ (const MyString &st1, const char *st2);
    friend MyString operator+ (const char *st1, const MyString &st2);
    friend bool operator==(const MyString &st1, const MyString &st2);
    friend bool operator==(const MyString &st1, const char *st2);
    friend bool operator==(const char *st1, const MyString &st2);
    friend bool operator!=(const MyString &st1, const MyString &st2);
    friend bool operator!=(const MyString &st1, const char *st2);
    friend bool operator!=(const char *st1, const MyString &st2);

    //TODO: < * 3, > * 3, >= *3, <= *3, swap
};


#endif //CPP_STUDY_MYSTRING_H
