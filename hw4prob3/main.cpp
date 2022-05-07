#include <iostream>

using namespace std;
int add = 0;
void multiply(int a, int b)
{
  if(b>=1)
    {
      add+=a;
      multiply(a, b-1);
    }
  
  if(b<1)
    cout<<add<<endl;
}

int main() {
   
    int a,b;
    cout<<"Enter two numbers to multiply: ";
    cin>>a>>b;
    multiply(a, b);
    return 0;
}
