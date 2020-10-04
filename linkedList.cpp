#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;
};

int main()
{
    /// Creating First Node
    Node* Firstnode = new Node;

    Firstnode->data = 30;
    Firstnode->next = NULL;

    Node* head;
    head = Firstnode;

    Node* temp = head;

    int number_of_data;
    scanf("%d",&number_of_data);
    for(int i=1;i<=number_of_data;i++)
    {
        int value;
        scanf("%d",&value);

        Node* newNode = new Node;

        newNode->data = value;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }


}
