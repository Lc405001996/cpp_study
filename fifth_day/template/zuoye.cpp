//
// Created by Lc on 2018/8/22.
//

#include <iostream>
using namespace std;

template <typename T>
class List{
private:
    int size{};
    T *data;

public:
    explicit List(int size):size(size){
        this->data = new T[size]
    }
};

int main()
{

}