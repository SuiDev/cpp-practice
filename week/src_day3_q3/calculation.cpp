#include "calculation.h"
 
void Calculation::setNumber1(int number1)
{
    m_number1 = number1;
}
void Calculation::setNumber2(int number2)
{
    m_number2 = number2;
}
int Calculation::getNumber1()
{
    return m_number1;
}
int Calculation::getNumber2()
{
    return m_number2;
}
int Calculation::add()
{
    return m_number1 + m_number2;
}
int Calculation::sub()
{
    return m_number1 - m_number2;
}