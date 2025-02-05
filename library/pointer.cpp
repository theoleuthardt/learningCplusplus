#include "pointer.h"
#include <iostream>
#include <memory>

using namespace std;

// double a number and print it
void changeInt(int n) {
    n *= 2;
    cout << "Number: " << n << endl;
}

// double a numbers pointer and print it and its address
void changeIntPointer(int* n) {
    if (n == nullptr) {
        cout << "Pointer Value: NULL" << endl;
        cout << "Pointer Address: " << &n << endl;
        return;
    }
    *n *= 2;
    cout << "Pointer Value: " << *n << endl;
    cout << "Pointer Address: " << &n << endl;
}

void changeIntReference(int& n) {
    // check if reference is null by null of iostream
    if (n == NULL) {
        cout << "Reference Value: NULL" << endl;
        return;
    }
    n *= 3;
    cout << "Reference Value: " << n << endl;
    // same address as the original variable
    cout << "Reference Address: " << &n << endl;
}

void pointerVersions() {
    // unique pointer
    unique_ptr<int> uniquePtr(new int(5));
    // shared pointer
    shared_ptr<int> sharedPtr(new int(5));
}