//This program tests various operations of a linked stack
 /*The Programming Example, Converting a Number from Binary to Decimal, in Chapter 15, uses recursion to convert a binary number into an equivalent decimal number. Write a program that uses a stack to convert a binary number into an equivalent decimal number.*/

#include <iostream>
#include <math.h>
#include <string>
#include "linkedStack.h"
  
using namespace std;
bool fillstack(linkedStackType<int> &stack)
{
    if(!stack.isEmptyStack())
        return false;
    string binary;
    cout<<"enter a binary number: "<<endl;
    cin>>binary;
    int length = binary.length();
    for(int i = 0; i<length; ++i)
    {
        stack.push((int)binary[i]-48);
    }
    return true;
}
int main() 
{
    int add = 0;
    int count = 0;
    linkedStackType<int> stack;
    fillstack(stack);
    int current;
    while (!stack.isEmptyStack())
    {
        current = stack.top();
        add+=(current)*(pow(2,count));
        count++;
        stack.pop();
    }
    cout<<add;
    return 0;
} 
