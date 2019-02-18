#ifndef STRINGER_H_INCLUDED
#define STRINGER_H_INCLUDED

#include <string>
#include <iostream>
//#include "headers.h"

namespace stringer{
    class string
    {
    public:
        string();
        ~string();
        string(std::string str);
        string(char c[]);
        std::string getString();
    private:
        std::string m_string;
    };

}


#endif // STRINGER_H_INCLUDED 
