
#include<iostream>

using namespace std;

void pattern(int n)
{
    
    if(n<=0)
    {
        return;
    }
    
    for(int i = 0; i<n; ++i)
    {
        cout<<'*';
    }
    cout<<endl<<endl;

    pattern(n-1);
    
    for(int i = 0; i<n; ++i)
    {
        if (n == 1) continue;
        cout<<'*';
    }
    if(n==1){}
    else
        cout<<endl<<endl;
    
}

#include <iostream>
int a;

int main(int argc, const char * argv[]) {
    cout<<"enter a number greater than 0: ";
    cin>>a;
    cout<<endl;
    pattern(a);
    return 0;
}
