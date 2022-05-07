//
//  main.cpp
//  bubblesort
//
//  Created by Adiba Haque on 4/18/22.
//

#include <iostream>
using namespace std;
void swap(int *m, int *n)
{
    int temp=*m;
    *m=*n;
    *n=temp;
}
void bubblesort(int array[], int size)
{
    for(int i = 0; i<size-1; i++)
    {
        for(int j = 0; j<size-1-i; ++j)
        {
            if(array[j]>array[j+1])
                swap(&array[j],&array[j+1]);
        }

    }
}

int main(int argc, const char * argv[]) {
    int array[7] = {1,10,12,13,5,4,9};
    int size = 7;
    bubblesort(array, size);
    for(int i =0; i<7;++i)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
