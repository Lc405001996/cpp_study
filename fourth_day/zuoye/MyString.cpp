//
// Created by Lc on 2018/8/21.
//

#include <iostream>
#include <cstring>
#include "MyString.h"

MyString::MyString(char *data) {
    if (data == nullptr)
    {
        this->size = 0;
        this->data = nullptr;
    } else
    {
        this->size = static_cast<int>(strlen(data));
        this->data = new char[this->size + 1];
        strcpy(this->data, data);
    }
}

MyString operator+(const MyString &st1, const MyString &st2) {
    MyString st;
    st.size = st1.size + st2.size;
    st.data = new char[st.size + 1];
    memset(st.data, 0, static_cast<size_t>(st.size));
    strcat(st.data, st1.data);
    strcat(st.data, st2.data);
    return st;
}

char *MyString::getData() const {
    return data;
}

int MyString::getSize() const {
    return size;
}

std::ostream & operator << (std::ostream &os, const MyString &str) {
    os << str.data;
    return os;
}

MyString::MyString(const MyString &str) {
    if (str.size == 0)
    {
        this->size = 0;
        this->data = nullptr;
    } else
    {
        this->size = str.size;
        this->data = new char[this->size + 1];
        strcpy(this->data, str.data);
    }
}

MyString &MyString::operator=(char *str) {
    if (str == nullptr)
    {
        this->size = 0;
        delete []this->data;
        this->data = nullptr;
    } else
    {
        delete []this->data;
        this->size = static_cast<int>(strlen(str));
        this->data = new char (this->size);
        strcpy(this->data, str);
    }
    return (*this);
}

MyString &MyString::operator=(const MyString &str) {
    if (str.size == 0)
    {
        this->size = 0;
        delete []this->data;
        this->data = nullptr;
    } else
    {
        delete []this->data;
        this->size = str.size;
        this->data = new char[this->size + 1];
        strcpy(this->data, str.data);
    }
    return (*this);
}

MyString operator+(const MyString &st1, const char *st2) {
    MyString st;
    st.size = static_cast<int>(st1.size + strlen(st2));
    st.data = new char[st.size + 1];
    memset(st.data, 0, static_cast<size_t>(st.size));
    strcat(st.data, st1.data);
    strcat(st.data, st2);
    return st;
}

MyString operator+(const char *st1, const MyString &st2) {
    MyString st;
    st.size = static_cast<int>(strlen(st1) + st2.size);
    st.data = new char[st.size + 1];
    memset(st.data, 0, static_cast<size_t>(st.size));
    strcat(st.data, st1);
    strcat(st.data, st2.data);
    return st;
}

bool operator==(const MyString &st1, const MyString &st2) {
    if (st1.size == st2.size)
    {
        if (0 == strcmp(st1.data, st2.data))
        {
            return true;
        }
    }
    return false;
}

bool operator==(const MyString &st1, const char *st2) {
    if (st1.size == strlen(st2))
    {
        if (0 == strcmp(st1.data, st2))
        {
            return true;
        }
    }
    return false;
}

bool operator==(const char *st1, const MyString &st2) {
    if (strlen(st1) == st2.size)
    {
        if (0 == strcmp(st1, st2.data))
        {
            return true;
        }
    }
    return false;
}

bool operator!=(const MyString &st1, const MyString &st2) {
    if (st1.size != st2.size)
    {
        if (0 != strcmp(st1.data, st2.data))
        {
            return true;
        }
    }
    return false;
}

bool operator!=(const MyString &st1, const char *st2) {
    if (st1.size != strlen(st2))
    {
        if (0 != strcmp(st1.data, st2))
        {
            return true;
        }
    }
    return false;
}

bool operator!=(const char *st1, const MyString &st2) {
    if (strlen(st1) != st2.size)
    {
        if (0 != strcmp(st1, st2.data))
        {
            return true;
        }
    }
    return false;
}

/**
 *      const_reference
 *      operator[] (size_type __pos) const _GLIBCXX_NOEXCEPT
 *      {
 *     _GLIBCXX_DEBUG_ASSERT(__pos <= size());
 *     return _M_data()[__pos];
 *      }
 *
 * @param num
 * @return
 */
char &MyString::operator[](int num) const {
//    if (num < this->size)
    return this->data[num];
}

MyString &operator>>(std::istream &is, MyString &str) {
    char tmp[1024] = {0};
    is >> tmp;
    delete []str.data;
    str.size = static_cast<int>(strlen(tmp));
    str.data = new char [str.size + 1];
    strcpy(str.data, tmp);
    return str;
}
