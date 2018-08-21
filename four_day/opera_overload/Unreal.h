//
// Created by Lc on 2018/8/21.
//

#ifndef CPP_STUDY_UNREAL_H
#define CPP_STUDY_UNREAL_H


class Unreal {
private:
    int shibu;
    int xubu;

public:
    explicit Unreal(int shibu = 0, int xubu = 0);
    void show();
    Unreal operator + (Unreal &u1);
};


#endif //CPP_STUDY_UNREAL_H
