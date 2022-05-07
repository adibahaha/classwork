#pragma once  

#include "doublyLinkedList.cpp"
 
using namespace std; 

template <class Type> 
class unorderedLinkedList: public doublyLinkedList<Type>
{
    using doublyLinkedList<Type>::first;
    using doublyLinkedList<Type>::last;
    using doublyLinkedList<Type>::count;

public:
    bool mergeLists(unorderedLinkedList<Type>& lhl, unorderedLinkedList<Type>& rhl);

    bool search(const Type& searchItem) const;
      //Function to determine whether searchItem is in the list.
      //Postcondition: Returns true if searchItem is in the 
      //               list, otherwise the value false is 
      //               returned.

    void insertFirst(const Type& newItem);
      //Function to insert newItem at the beginning of the list.
      //Postcondition: first points to the new list, newItem is
      //               inserted at the beginning of the list,
      //               last points to the last node in the  
      //               list, and count is incremented by 1.

    void insertLast(const Type& newItem);
      //Function to insert newItem at the end of the list.
      //Postcondition: first points to the new list, newItem 
      //               is inserted at the end of the list,
      //               last points to the last node in the 
      //               list, and count is incremented by 1.

    void deleteNode(const Type& deleteItem);
      //Function to delete deleteItem from the list.
      //Postcondition: If found, the node containing 
      //               deleteItem is deleted from the list.
      //               first points to the first node, last
      //               points to the last node of the updated 
      //               list, and count is decremented by 1.

    void deleteSmallest();
        //function to delete first occurrence of smallest item in list
    void deleteAll(const Type& item);
};
