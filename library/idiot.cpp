#include "idiot.h"

// klassen sind ja so idiotensicher
class idiot {
    int id = 0;
    int intelligence = 0;
    int age = 0;

public:
    // standard constructor
    idiot(const int id, const int intelligence, const int age) {
        this->id = id;
        this->intelligence = intelligence;
        this->age = age;
    }
    // copy constructor with references
    idiot(const int& id, const int& intelligence, const int& age) {
        this->id = id;
        this->intelligence = intelligence;
        this->age = age;
    }
    // copy constructor with pointers
    idiot(const int* id, const int* intelligence, const int* age) {
        this->id = *id;
        this->intelligence = *intelligence;
        this->age = *age;
    }
    // destructor
    ~idiot() = default;

private:
    void setIntelligence(int intelligence) {
        this->intelligence = intelligence;
    }

    void setAge(int age) {
        this->age = age;
    }
}