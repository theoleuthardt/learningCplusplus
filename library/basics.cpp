#include <iostream>
#include <type_traits>
#include "functions.h"

using namespace std;

int basics() {
    // First Output
    /*
    const auto lang = "C++";
    cout << "Hello and welcome to " << lang << "!\n";
    */

    // Included function from library
    // printNumber(1);

    // Data types
    /*
    short a = 1;
    int b = 2;
    long c = 3;
    long long d = 4;
    float e = 5.0;
    double f = 6.0;
    long double g = 7.0;

    for (int j = 0; j < 7; j++) {
        switch (j) {
            case 0: cout << "Size of a: " << sizeof(a) << " byte"; break;
            case 1: cout << "Size of b: " << sizeof(b) << " byte"; break;
            case 2: cout << "Size of c: " << sizeof(c) << " byte"; break;
            case 3: cout << "Size of d: " << sizeof(d) << " byte"; break;
            case 4: cout << "Size of e: " << sizeof(e) << " byte"; break;
            case 5: cout << "Size of f: " << sizeof(f) << " byte"; break;
            case 6: cout << "Size of g: " << sizeof(g) << " byte"; break;
            default: ;
        }
        cout << endl;
    }
    */

    // Input
    /*
    int input;
    cout << "Enter a number: ";
    cin >> input;
    cout << "You entered: " << input << endl;
    */

    // Arrays
    int numbers[] = {1, 2, 3, 4, 5, 1000, 37894972, 8349, 134, 134, 3452, 234};

    // range based for loop
    cout << "Range based for loop:" << endl;
    for (const int number : numbers) {
        cout << number << endl;
    }

    // traditional for loop
    cout << "Traditional for loop:" << endl;
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}