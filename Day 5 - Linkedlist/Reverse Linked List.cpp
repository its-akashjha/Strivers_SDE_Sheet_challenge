#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
        LinkedListNode<int>* newlist = NULL;
        while(head!=NULL){
            LinkedListNode<int>* nxt = head->next;
            head->next=newlist;
            newlist = head;
            head = nxt;
        }
        return newlist;
}