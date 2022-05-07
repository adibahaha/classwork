
#include <iostream>
#include <ctime>
#include <random>

using namespace std;

default_random_engine e(unsigned(time(nullptr)));
uniform_int_distribution<int> u(0, 1);
void initialize_array(int array[], int size)
{
    if(size==0)
        return;
    for(int i = 0; i<size; ++i)
    {
        array[i]=0;// all array elemnts are at 0;
    }
}
void choosetile(int array[], int size)
{
    initialize_array(array, size);
    int walker=0, totaltraversing = 1;
    array[walker]=1;
    while(1)
    {
        int count = 0;
        int choice = u(e);
        totaltraversing++;
        //considering tile starts from 1 to size.
        if(choice==0&&walker!=0)//chooses left and isnt at the first block
        {
            cout<<"moving left from tile "<<walker+1<<endl;
            walker = walker-1;
            array[walker]+=1; //the element 1 means walker is in that tile and 0 means he has not been there
            
        }
        else if(choice==1&&walker!=size-1)//chooses right and isnt at the last block
        {
            cout<<"moving right from tile "<<walker+1<<endl;
            walker = walker+1;
            array[walker]+=1;
            
        }
        else if(choice==0&&walker==0)
        {
            cout<<"moving left from tile "<<walker+1<<endl;
            walker = size-1;
            array[walker]+=1;
        }
        else if(choice==1&&walker==size-1)
        {
            cout<<"moving right from tile "<<walker+1<<endl;
            walker = 0;
            array[walker]+=1;
        }
        for(int i = 0; i<size; ++i)
        {
            if(array[i]>0)
                count+=1;
        }
        if(count == size)
        {
            cout<<"all tiles have been traversed"<<endl<<"The number of times each tiles have been traversed are: "<<endl;
            for(int j = 0; j<size; ++j)
            {
                cout<<"Tile "<<j+1<<": "<<array[j]<<" time(s)"<<endl;
            }
            cout<<endl;
            break;
        }
    }
    cout<<"The walker's total moves: "<<totaltraversing<<endl;
    
}

int main()
{
    int array[5] = {4,5,6,3,2};
    int size = 5;
    choosetile(array, size);
    return 0;
}
