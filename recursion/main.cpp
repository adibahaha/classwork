//
//  main.cpp
//  recursion
//
//  Created by Adiba Haque on 3/21/22.
//

#include <iostream>

void fun(int n)
{
    if(n>0)
    {
        printf("%d",n);
        fun(n-1);
    }
}
void fun2(int n)
{
    if(n>0)
    {
        fun2(n-1);
        printf("%d",n);
        
    }
}



int main(int argc, const char * argv[]) {
    
    fun(3);//3,2,1 because print is done on calltime
    std::cout<<std::endl;
    fun2(3);//1,2,3 because print is done on returntime
    return 0;
}
//if the recursve function call is at the last line of a function its called a tail recursion
//if the first statement is therecursive call, its called a head recursion
//if the recursive call is made more than once it is called tree reucursion
//if two functions make recursive calls into themselves, its called indirect recursion
