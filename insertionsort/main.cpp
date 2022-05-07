

#include <iostream>
using namespace std;
void insertionsort(int array[], int size)
{
    int i, j, x;
    for(i=1; i<size; ++i)
    {
        j = i-1;
        x=array[i];
        while(j>-1&&array[j]>x)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=x;
    }
}
int main(int argc, const char * argv[]) {
    int array[7] = {1,10,12,13,5,4,9};
    int size = 7;
    insertionsort(array, size);
    for(int i =0; i<7;++i)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
