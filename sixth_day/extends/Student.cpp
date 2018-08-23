//
// Created by Lc on 2018/8/23.
//

#include <iostream>

using namespace std;

class Human {
private:
    string name;
    int age{};

protected:
    int sex = 3;
    int high = 165;

public:
    Human(string name, int age) : name(std::move(name)), age(age) {}

    Human() = default;

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Human::name = name;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Human::age = age;
    }

    void eat() {
        cout << "eating \n";
    }

    void sleep() {
        cout << "sleeping \n";
    }

};


class Student1 : public Human {
private:
    string school;

public:
    Student1(const string &name, int age, string school) : Human(name, age), school(std::move(school)) {}

    explicit Student1(string school) : school(std::move(school)) {}

    void goSchool() {
        cout << "go school\n";
    }

    void getSex() {
        cout << this->sex << endl;
    }
};

class Student11 : public Student1 {
public:
    Student11(const string &name, int age, const string &school) : Student1(name, age, school) {}

    explicit Student11(const string &school) : Student1(school) {}

    void getHigh() {
        cout << this->high << endl;
    }
};

class Student2 : private Human {
private:
    string school;

public:
    void goSchool() {
        cout << "go school\n";
    }

    Student2(const string &name, int age, string school) : Human(name, age), school(std::move(school)) {}

    void getSex() {
        cout << this->sex << endl;
    }
};

class Student22 : public Student2 {
public:
    void getHigh() {
        // 没有Human的任何东西
    }

    Student22(const string &name, int age, const string &school) : Student2(name, age, school) {}
};

class Student3 : protected Human {
private:
    string school;

public:
    Student3(const string &name, int age, string school) : Human(name, age), school(std::move(school)) {}

    void goSchool() {
        cout << "go school\n";
    }

    void getSex() {
        cout << this->sex << endl;
    }
};

class Student33 : public Student3 {
public:
    Student33(const string &name, int age, const string &school) : Student3(name, age, school) {}

    void getHigh() {
        cout << this->high << endl;
    }
};

int main() {

    Human human;
    human.sleep();
    human.eat();

//    Student1 student1("1", 12, "sicau");
    Student1 student1("sicau");
    student1.eat();
    student1.sleep();
    student1.goSchool();
    student1.getSex();

    Student11 student11("11", 12, "sicau");
//    Student11 student11("sicau");
    student11.getHigh();

    Student2 student2("2", 12, "sicau");
    student2.goSchool();
    student2.getSex();

    Student22 student22("22", 12, "sicau");
    student22.goSchool();

    Student3 student3("3", 12, "sicau");
    student3.goSchool();
    student3.getSex();

    Student33 student33("33", 12, "sicau");
    student33.getHigh();
}