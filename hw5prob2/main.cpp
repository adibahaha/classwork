#include<iostream>
#include"orderedLinkedList.h"

using namespace std;


int main(){
    
    orderedLinkedList<int> list1, list2;        //Line 6
    int num;                                    //Line 7

    cout << "Line 8: Enter numbers ending "
         << "with -999." << endl;               //Line 8
    cin >> num;                                 //Line 9

    while (num != -999)                         //Line 10
    {                                           //Line 11
        list1.insert(num);                      //Line 12
        cin >> num;                             //Line 13
    }                                           //Line 14

    cout << endl;                               //Line 15

    cout << "Line 16: list1: ";                 //Line 16
    list1.print();                              //Line 17
    cout << endl;
    
    cout << " Enter numbers ending "
         << "with -999." << endl;               //Line 8
    cin >> num;                                 //Line 9

    while (num != -999)                         //Line 10
    {                                           //Line 11
        list2.insert(num);                      //Line 12
        cin >> num;                             //Line 13
    }                                           //Line 14

    cout << endl;                               //Line 15

    cout << "Line 16: list1: ";                 //Line 16
    list2.print();                              //Line 17
    cout << endl;                               //Line 18
//Line 18
   
    list1.divideMid(list2);
    list1.print();
    cout<<endl;
    list2.print();
    //alist2.print();
    return 0;                                   //Line 30
}                                               //Line 31



