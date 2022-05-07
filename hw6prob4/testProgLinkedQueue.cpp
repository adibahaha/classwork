//Test Program linked queue
   
#include <iostream>
#include "linkedQueue.h"

using namespace std;

void moventhelement(linkedQueueType<int> &queue1)
{
    linkedQueueType<int> queue2,queue3;
    if(!queue1.isEmptyQueue())
        return;
    cout<<"enter the position of the element you want to move to the first position"<<endl;
    int n;
    cin>>n;
    if(n==1)
        cout<<"no changes to queue"<<endl;
    for(int i = 1; i<=n&&!queue1.isEmptyQueue(); ++i)
    {
            queue2.addQueue(queue1.front());
            queue1.deleteQueue();
    }
    for(int j = 1; j<n; ++j)
    {
        queue3.addQueue(queue2.front());
        queue2.deleteQueue();
    }
   
    while(!queue3.isEmptyQueue())
    {
        queue2.addQueue(queue3.front());
        queue3.deleteQueue();
    }
    while(!queue1.isEmptyQueue())
    {
        queue2.addQueue(queue1.front());
        queue1.deleteQueue();
    }
   
    cout << "Queue Elements: ";

    while (!queue2.isEmptyQueue())
    {
        cout << queue2.front() << " ";
        queue2.deleteQueue();
    }
    
}

int main()
{
    linkedQueueType<int> queue1, queue2,queue3;
    int x, y;
     
    queue1.initializeQueue();
    queue2.initializeQueue();
    queue3.initializeQueue();
    x = 20;
    y = 35;
    queue1.addQueue(x);
    queue1.addQueue(y);
    x = queue1.front();
    queue1.deleteQueue();
    queue1.addQueue(x + 7);
    queue1.addQueue(78);
    queue1.addQueue(x);
    queue1.addQueue(y - 6);

    moventhelement(queue1);
    

    cout << endl;
     
    return 0;
}
