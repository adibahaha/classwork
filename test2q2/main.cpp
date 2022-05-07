/*Write a recursive function that uses subtraction to do integer division. The function has two parameters – the dividend and the divisor. You may assume that both numbers are positive integers. The function returns the quotient and remainder as reference parameters.
 
 e.g.

 23
 ÷
  7 = quotient 3 remainder 2

 1 23  - 7 = 16

 2 16 - 7  =  9

 3  9 - 7  =  2

*/
#include <iostream>

using namespace std;

int a = 23, b = 7, q=0, r=0;

void division(int divisor, int divident, int &quotient, int &remainder)
{
    if(divisor>divident)
    {
        quotient = 0;
        remainder = divident;
        return;
    }
    remainder = divident-divisor;
    divident = divident-divisor;
    quotient++;
    if(remainder<divisor)
        return;
    division(divisor, divident, quotient, remainder);
    
}

int main()
{
    division(b, a, q, r);
    cout<<"Quotient: "<<q<<endl;
    cout<<"Remainder: "<<r<<endl;
    return 0;
}
