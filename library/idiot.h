#ifndef IDIOT_H
#define IDIOT_H

class idiot {
public:
    // standard constructor
    idiot(int id, int intelligence, int age);
    // copy constructor with references
    idiot(const int& id, const int& intelligence, const int& age);
    // copy constructor with pointers
    idiot(const int* id, const int* intelligence, const int* age);
    // destructor
    ~idiot();
    // getter
    int getId() const;
    int getIntelligence() const;
    int getAge() const;

private:
    int id = 0;
    int intelligence = 0;
    int age = 0;

    // setter
    void setIntelligence(int intelligence);

    void setAge(int age);
};

#endif //IDIOT_H
