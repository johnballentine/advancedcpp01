#include "./main.h"

int main() {

    //creates a rectangle object with no parameters
    rectangle myRectangle1;
    //creates a rectangle object with height and width 5x4
    rectangle myRectangle2(5, 4);

    //creates a box object with no parameters
    box myBox1;
    //creates a rectangle object with height and width 5x4
    box myBox2(5, 4, 6);

    displayRectangle(&myRectangle1);
    displayRectangle(&myRectangle2);

    displayBox(&myBox1);
    displayBox(&myBox2);


    return 0;
}
