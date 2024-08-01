#include <iostream>
using namespace  std;
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
/*
* 1. Given a linked list and a key ‘X‘ in, the task is to check if X is present in the linked list
or not.
Examples:
Input: 14->21->11->30->10, X = 14
Output: Yes
Explanation: 14 is present in the linked list.
Input: 6->21->17->30->10->8, X = 13
Output: No
 */
int main()
{

    Node *head=new Node(14  );
    head->next=new Node(21);
    head->next->next=new Node(11);
    head->next->next->next= new Node(30);
    head->next->next->next->next= new Node(10);
    int x=13;
    Node *t = head;
    while(t!=NULL)
    {
        if(t->data==x)
        {
            cout<<"Yes"<<endl;
            break;
        }

        t=t->next;
    }
    if(t==NULL)
    cout<<"NO"<<endl;

    return 0;
}
