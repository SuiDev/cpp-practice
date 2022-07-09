
#ifndef _CALCULATION_H_
#define _CALCULATION_H_
 
#include <iostream>
#include <string>
 
using namespace std;
 
class Calculation{
private:
    int m_number1;
    int m_number2;
public:
    void setNumber1(int num);
    void setNumber2(int num);
    int getNumber1();
    int getNumber2();
    int add();
    int sub();
};
 
#endif