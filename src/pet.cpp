
#include "pet.h"

pet::pet(string name_input, int age_input) {
    setName(name_input);
    setAge(age_input);
}

pet::~pet() {
    // Destructor (not used)
}

// Getters

string pet::getName() {
    return name;
}

int pet::getAge() {
    return age;
}

// Setters

void pet::setName(string name_input) {
    name = name_input;
}

void pet::setAge(int age_input) {
    age = age_input;
}
