#include <__stddef_null.h>

#include "library/basics.h"
#include "library/pointer.h"

using namespace std;

int main() {

    // basics();

    // pointer stuff
    int number = 5;
    int* nullPtr = nullptr;
    changeInt(number);
    changeIntPointer(nullPtr);
    changeIntPointer(&number);
    changeIntReference(number);
    return 0;
}