// we use libraries to use features in c++ to add them use include
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    // to see the features we have we use std::
    // cout is short for character out
    // unlike java or C# we have to initialize a value it does not automatically initializes to 0
    // to have constant values we don't want to change we use "const"
    // << these are Stream Insertion Operator "operator for inserting something to output stream"
    // >> "extraction operator"
    const double pi = 3.14;
    int fileSize = 100;
    double sales = 9.99;
    int a = 1;
    int b = 2;

    int temp = 0;
    temp = b;
    b = a;
    a = temp;

    // there is a difference between postfix and prefix
    int x = 10;
    int y = x++; // y==10 x==11

    int z = 10;
    int w = ++z; // w==11 z==11

    cout << y << endl;
    cout << w << endl;

    /*
    // we can do it like this , we can also use "using namespace std;" and just say cout...

    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << "------" << std::endl;

    std::cout << fileSize + sales << std::endl;
    */

    cout << a << ::endl << b << std::endl;

    cout << "------" << std::endl;

    cout << fileSize + sales << std::endl;


    // get an input from console

    cout << "Please enter a value" << std::endl;
    int enteredValue = 0;
    cin >> enteredValue;

    cout << enteredValue << std::endl;

    cout << "please enter fahrenheit value";
    int fahrenheitValue = 0;
    cin >> fahrenheitValue;
    double temperatureValue = (fahrenheitValue - 32) / 1.8;
    cout << temperatureValue << std::endl;

    double result = floor(1.2);
    cout << result << std::endl;

    // calculate area of circle

    cout << "please enter a radius";
    double radius = 0;
    cin >> radius;
    double area = pow(radius,2) * pi;
    cout << area << std::endl;

    // when we declare a float or long we should specify the type by saying 3.45F or 9000L
    // because compiler will treat them as double or integer

    auto isValid = true;

    // it works and prints out 1
    int i = 1.2;
    cout << isValid << std::endl;

    // k will be initialized as zero
    int k {};

    int number = 0b11111; // to represents a number in binary we use "0b" and then our number
    int number1 = 0xFF; // to represents a number in hexadecimal we use "0x" and then our number

    // to get a random number we use rand() function from cstdlib library
    // but rand does not give truly random number it gives the same number everytime
    srand(5); // random number generator we can change that number
    // srand(time(0)) to get exactly random number everytime
    int number2 = rand();
    cout << number2 << std::endl;

    return 0;
}

void function1() {
    std::cout << "Hello World 2";
}