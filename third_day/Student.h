//
// Created by Lc on 2018/8/20.
//

#ifndef CPP_STUDY_STUDENT_H
#define CPP_STUDY_STUDENT_H

#include <iostream>

using namespace std;

class student {
private:
    string name;
    int age;
    string school;
    int score[];
public:
    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    const string &getSchool() const;

    void setSchool(const string &school);

    const int *getScore() const;
};


#endif //CPP_STUDY_STUDENT_H
