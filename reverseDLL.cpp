//
// Created by susheel on 8/1/24.
//

#include<bits/stdc++.h>
using namespace  std;

int main()
{
    vector<int> arr{1,2,3,4,5,6};
    Node *head=createDll(arr);
    cout<<endl<<"List before : "<<endl;
    printList(head);
    cout<<endl<<"After Reversing List"<<endl;
    reverseDll(head);
    printList(head);

    return 0;
}