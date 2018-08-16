//
// Created by Lc on 2018/8/16.
//

#ifndef CPP_STUDY_DEMO_H
#define CPP_STUDY_DEMO_H


class Demo {
private:
    int value;

public:
    explicit Demo(int value);
    ~Demo();
    void setValue(int value);
    int getValue();
};


#endif //CPP_STUDY_DEMO_H
