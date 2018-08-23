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
    void setShibu(int shibu);
    void setXubu(int xubu);
    explicit Unreal(int shibu = 0, int xubu = 0);
    void show();
    int getShibu() const;
    int getXubu() const;
    virtual ~Unreal();

#if 0
    Unreal operator + (const Unreal &u1);
#else
    friend Unreal operator + (const Unreal &u1, const Unreal &u2);
#endif
    friend Unreal &operator ++(Unreal &u);
    friend const Unreal operator ++(Unreal &u, int);
};


#endif //CPP_STUDY_UNREAL_H
