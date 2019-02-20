
#ifndef PETS_PET_H
#define PETS_PET_H

#include <string>
using std::string; // Use std::string to avoid namespace pollution.

class pet {

    public:
    pet(string,int);
    ~pet(); // Not used

    string getName();
    int getAge();

    void setName(string);
    void setAge(int);

protected:

    string name;
    int age;

};

#endif //PETS_PET_H
