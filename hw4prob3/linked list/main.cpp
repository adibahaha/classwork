
#include <iostream>
struct Node
{
    int data;
    Node *next;
}*first=NULL; //for implementing a linked list we need a pointer (first). this ptr is a global ptr.
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first=new  Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    for(i = 1; i<n; i++)
    {
        t=new  Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last = t;
    }
}

/*void Display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d",p->data);
        std::cout<<std::endl;
        p=p->next;
    }
}*/
void DisplayRecursive(struct Node*p)
{
    if(p!=NULL)
    {
        printf("%d",p->data);
        DisplayRecursive(p->next);
    }
}
int main(int argc, const char * argv[]) {
   
    int A[]={3,5,7,10,15};
     
    create(A, 5);
    //Display(first);
    DisplayRecursive(first);
    
    return 0;
}
