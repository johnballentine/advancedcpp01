#ifndef BOXES_BOX_H
#define BOXES_BOX_H

#include "rectangle.h"

class box : public rectangle {
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


#endif //BOXES_BOX_H
