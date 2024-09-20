// we use libraries to use features in c++ to add them use include
#include <iostream>

using namespace std;

int main() {
    // to see the features we have we use std::
    // cout is short for character out
    // unlike java or C# we have to initialize a value it does not automatically initializes to 0
    int fileSize = 100;
    double sales = 9.99;
    int a = 1;
    int b = 2;

    int temp = 0;
    temp = b;
    b = a;
    a = temp;

    /*
    // we can do it like this , we can also use "using namespace std;" and just say cout...

    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << "------" << std::endl;

    std::cout << fileSize + sales << std::endl;
    */

    cout << a << std::endl;

    cout << b << std::endl;

    cout << "------" << std::endl;

    cout << fileSize + sales << std::endl;

    return 0;
}

void function1() {
    std::cout << "Hello World 2";
}