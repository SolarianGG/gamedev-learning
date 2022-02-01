#include "lib_hello.hxx"
#include <iostream>

int print_hello()
{
    using namespace std;
    cout << "Hello, World!" << endl;
    return cout.good() ? 0 : 1;
}
