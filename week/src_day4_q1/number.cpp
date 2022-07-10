#include "number.h"
#include <iostream>

using namespace std;

Number::Number() : a(0),b(0)
{
    cout << "Numberオブジェクト生成" << endl;
}
Number::~Number()
{
    cout << "Numberオブジェクト破棄" << endl;
}
void Number::setNumbers(int n1, int n2)
{
    a = n1;
    b = n2;
}
int Number::getAdd()
{
    return a + b;
}