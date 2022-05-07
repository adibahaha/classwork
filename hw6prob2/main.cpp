#include <ctime>
#include <iostream>
#include <random>
#include <string>
#include "unorderedLinkedList.h"

using namespace std;

default_random_engine e(unsigned(time(nullptr)));
uniform_int_distribution<int> u(10, 20);

bool fillList(unorderedLinkedList<int>& ul, int list_length);

int main()
{
    unorderedLinkedList<int> ul, ull, ulr;
    fillList(ul, 24);
    fillList(ull, 13);
    //fillList(ulr, 11);
    ul.print(); cout << endl;
    ull.print(); cout << endl;
    //ulr.print(); cout << endl<<endl;

    ul.divideAt(ull, 15);
    ul.print();
    cout<<endl;
    ull.print();
    cout<<endl<<endl;
    
    ul.destroy();
    ull.destroy();
    fillList(ul, 24);
    fillList(ull, 13);
    //fillList(ulr, 11);
    ul.print(); cout << endl;
    ull.print(); cout << endl<<endl;
    ul.mergeLists(ul, ull);
    ul.print();cout << endl;
    ull.print();cout << endl;cout << endl;

    return 0;
}
bool fillList(unorderedLinkedList<int>& ul, int list_length)
{
    if (list_length < 1)
        return false;

    for (int count = 1; count <= list_length; ++count)
        ul.insertFirst(u(e));
    return true;
}
