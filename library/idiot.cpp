#include "idiot.h"

// klassen sind ja so idiotensicher

idiot::idiot(int id, int intelligence, int age) {
    this->id = id;
    this->intelligence = intelligence;
    this->age = age;
}

idiot::idiot(const int& id, const int& intelligence, const int& age) {
    this->id = id;
    this->intelligence = intelligence;
    this->age = age;
}

idiot::idiot(const int* id, const int* intelligence, const int* age) {
    this->id = *id;
    this->intelligence = *intelligence;
    this->age = *age;
}

idiot::~idiot() {}

int idiot::getId() const {
    return this->id;
}

int idiot::getIntelligence() const {
    return this->intelligence;
}

int idiot::getAge() const {
    return this->age;
}

void idiot::setIntelligence(int intelligence) {
    this->intelligence = intelligence;
}

void idiot::setAge(int age) {
    this->age = age;
}
