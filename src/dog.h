#ifndef PETS_DOG_H
#define PETS_DOG_H

#include "dog.h"

class pet : public dog {
public:
    box();
    box(int, int, int);
    ~box();

    /*
     * Getters
     */
    int getDepth();
    int getVolume();
    int getArea();

    /*
     * Setters
     */
    void setDepth(int);

private:
    //private variables that define a box (from a rectangle)
    int depth;


};


#endif //PETS_DOG_H
