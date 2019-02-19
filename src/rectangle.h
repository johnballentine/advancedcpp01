
#ifndef BOXES_RECTANGLE_H
#define BOXES_RECTANGLE_H


class rectangle {

    public:
    /*
     * constructors
     * one with no params, one with params (overloading)
     */
    rectangle();
    rectangle(int, int);

    //destructor (not used in this example)
    ~rectangle();

    /*
     * Getters
     */
    int getWidth();
    int getHeight();
    int getArea();

    /*
     * Setters
     */
    void setWidth(int);
    void setHeight(int);

protected:
    //private variables that define a square
    int width, height;

};

#endif //BOXES_RECTANGLE_H
