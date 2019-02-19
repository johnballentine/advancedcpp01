
#include "rectangle.h"

rectangle::rectangle() {
    //use your own setters!
    setWidth(0);
    setHeight(0);
}

rectangle::rectangle(int w, int h) {
    //use your own setters!
    setWidth(w);
    setHeight(h);
}

rectangle::~rectangle() {
}

int rectangle::getWidth() {
    return width;
}

int rectangle::getHeight() {
    return height;
}

int rectangle::getArea() {
    return width * height;
}

void rectangle::setHeight(int h) {
    if (h > 0) {
        height = h;
    } else {
        height = 0;
    }
}

void rectangle::setWidth(int w) {
    if (w > 0) {
        width = w;
    } else {
        width = 0;
    }
}
