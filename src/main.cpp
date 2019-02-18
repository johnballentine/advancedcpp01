#include "stringer.h"
#include "headers.h"


int main()
{
    string std_str;
    std_str.assign("String from standard string\n");
    stringer::string str("String from custom string\n"); // this properly calls my string class from stringer
    cout << str.getString() << endl;
    cout << std_str;
    return 0;
    // comment test
}
