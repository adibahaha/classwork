//
//  main.cpp
//  bstnodecount
//
//  Created by Adiba Haque on 5/1/22.
//

#include <iostream>
#include "binarySearchTree.h"
int arr[7]={1,2,5,9,23,6,49};
bSearchTreeType<int> bst;
void createBST(int a[]);
int main(int argc, const char * argv[])
{
    createBST(arr);
    nodeType<int> *p = bst.root;
    cout<<"Number of nodes: "<<bst.nodeCount(p)<<endl;
    return 0;
}
void createBST(int a[])
{
    for(int i = 0; i<7; ++i)
    {
        bst.insert(a[i]);
    }
}
