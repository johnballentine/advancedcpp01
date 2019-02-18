#include "stringer.h"

using namespace stringer;

string::string()
{
    m_string.empty();
}

string::string(std::string str)
{
    m_string = str;
}

string::string(char c[])
{
    m_string.assign(c);
}

std::string string::getString()
{
    return m_string;
}
string::~string()
{

}
