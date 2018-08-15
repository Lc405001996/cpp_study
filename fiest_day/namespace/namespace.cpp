//
// Created by Lc on 2018/8/15.
//

#include <iostream>
using namespace std;

namespace my{
    int a = 34;
    void show()
    {
        cout << a << endl;
    }
}

using namespace my;

int a = 10;

int main()
{
    int a;
    //使用::来确定哪个名称空间的数据，不写默认是全局变量
    cin >> ::a >> my::a >> a;
    cout << "::a=" << ::a << endl \
            << "my::a=" << my::a << endl \
                << "a=" << a << endl;
    my::show();
}