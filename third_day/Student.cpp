//
// Created by Lc on 2018/8/20.
//

#include "Student.h"

const string &Student::getName() const {
    return name;
}

void Student::setName(const string &name) {
    Student::name = name;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int age) {
    Student::age = age;
}

const string &Student::getSchool() const {
    return school;
}

void Student::setSchool(const string &school) {
    Student::school = school;
}

const int *Student::getScore() const {
    return score;
}
