//
// Created by Lc on 2018/8/21.
//

#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString st(const_cast<char *>("hello"));
    cout << st<< "  st " << st.getSize() << endl;
    char a[] = "asd";
    MyString st1(a);
    cout << st1<< "  st1 " << st1.getSize()<< endl;

    MyString st2 = st + st1;
    cout << st2<< endl;
    cout << st2.getSize() << endl;

    MyString st3;
    st3 = const_cast<char *>("123");
    cout << st3 << endl;
    st3 = a;
    cout << st3 << endl;
    st3 = st2;
    cout << st3 << " ++ " << st2 << endl;
    st3 = a;
    cout << st3 << " ++ " << st2 << endl;

    cout << "adfadf" + st3  + "1234" << endl;

    if (st3 == "asd")
    {
        cout << "== ok ----------------" << endl;
    }
    if ("asd" != st3)
    {
        cout << "==================ok\n";
    }


    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=\n";
    string abc = "213";
    string qwe = "asd";
    if (abc > "adf")
    {
        cout << "fadf \n" ;
    } else
    {
        cout << "adfsadf\n";
    }
}