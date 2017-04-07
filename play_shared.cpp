//
// Created by dell on 4/7/2017.
//

#include <iostream>
#include <memory>
using namespace std;


int main ()  {
    auto s = make_shared<int>(1);
    cout << *s << endl;
    int* p = s.get();
    *p = 42;
    cout << *s << endl;
    s = make_shared<int>(5); // this should invalid p, but did not
    cout << *s << endl;
    cout << *p << endl;
    *p = 4;
    cout << *p << endl;
    return 0;
}
