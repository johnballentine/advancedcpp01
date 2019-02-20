#include "main.h"

string petname = "sparky";
pet mypet(petname,5);

int main() {

    cout << "Name is: " << mypet.getName() << ", Age is: " << mypet.getAge();

    return 0;
}
