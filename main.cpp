#include "library/basics.h"
#include "library/pointer.h"
#include "library/idiot.h"

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

    // class idiot stuff
    idiot idiot1 = idiot(1, 1, 1);
    idiot1.setIntelligence(2);

    return 0;
}