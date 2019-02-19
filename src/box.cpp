#include "box.h"

box::box() {
    //use your own setters!
    setWidth(0);
    setHeight(0);
    setDepth(0);
}

box::box(int w, int h, int d) {
    //use your own setters!
    setWidth(w);
    setHeight(h);
    setDepth(d);
}

box::~box() {
}

int box::getDepth(){
    return depth;
}

int box::getVolume() {
    return width * height * depth;
}

int box::getArea() {
    //note: I decided to return volume for no real reason, other than to show you can override this method
    return this->getVolume();
}

void box::setDepth(int d) {
    if (d > 0) {
        depth = d;
    } else {
        depth = 0;
    }
}
