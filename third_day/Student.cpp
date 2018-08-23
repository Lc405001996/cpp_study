//
// Created by Lc on 2018/8/20.
//

#include "student.h"

const string &student::getName() const {
    return name;
}

void student::setName(const string &name) {
    student::name = name;
}

int student::getAge() const {
    return age;
}

void student::setAge(int age) {
    student::age = age;
}

const string &student::getSchool() const {
    return school;
}

void student::setSchool(const string &school) {
    student::school = school;
}

const int *student::getScore() const {
    return score;
}
