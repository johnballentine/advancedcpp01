#include "main.h"

void displayRectangle(rectangle *myRectangle){

    cout << myRectangle->getWidth() << endl;
    cout << myRectangle->getHeight() << endl;
    cout << myRectangle->getArea() << endl;
    cout << endl;

}

void displayBox(box *myBox){

    cout << myBox->getWidth() << endl;
    cout << myBox->getHeight() << endl;
    cout << myBox->getDepth() << endl;
    cout << myBox->getVolume() << endl;
    cout << myBox->getArea() << endl;
    cout << endl;

}
