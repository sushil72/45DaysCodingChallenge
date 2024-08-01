//
// Created by susheel on 7/28/24.
//
/*Write a function that takes a list sorted in non-decreasing order and deletes any
duplicate nodes from the list. The list should only be traversed once.
For example if the linked list is 11->11->11->21->43->43->60 then
removeDuplicates() should convert the list to 11->21->43->60.*/
#include<iostream>
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
using namespace  std;

void removeDuplicates(Node *head)
{

}
int main()
{
    Node *head=new Node(11 );
    head->next=new Node(11);
    head->next->next=new Node(11);
    head->next->next->next= new Node(21);
    head->next->next->next->next= new Node(43);
    head->next->next->next->next->next= new Node(43);
    head->next->next->next->next->next->next= new Node(60);
    removeDuplicates(head);
    Node *t=head;
    while (t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    return 0;
}