#include "twostrings.h"
 
void TwoStrings::setString1(string string1)
{
    m_string1 = string1;
}
void TwoStrings::setString2(string string2)
{
    m_string2 = string2;
}
string TwoStrings::getString1()
{
    return m_string1;
}
string TwoStrings::getString2()
{
    return m_string2;
}
string TwoStrings::getConnectedString()
{
    return m_string1 + m_string2;
}
int TwoStrings::getConnectedLength()
{
    string connectedString = m_string1 + m_string2;
    return connectedString.length();
}

