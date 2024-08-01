#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;

    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }

};

class Solution {
public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
        int i=0;
        Node *t=head;
        if(x==0)
        {
            head=t->next;
            t->next->prev=nullptr;
            delete(t);
        }
        while(i<x-1 && t!=nullptr)
        {
            t=t->next;
            i++;
        }
        if(t->next==nullptr)
        {
            t->prev->next=nullptr;
            t->prev=nullptr;
            delete(t);
        }
        else{
            t->prev->next=t->next;
            t->next->prev=t->prev;
            delete(t);
        }

    }
};

int main()
{
    Node *head
    while()
    return 0;
}