#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
     struct Node* next;                 // input value = 3.. 1 2 3
    //output: 30 1 2 3
};
struct Node* head;

void insert(int data,int n)
{
    Node* temp1 = new Node() ;
    temp1 -> data = data;
    temp1 -> next  = NULL;
    if(n==1)
    {
        temp1 -> next  = head;
        head = temp1;
        return;
    }
    Node* temp2 = head ;
    for(int i=0;i<n-2;i++){
        temp2 = temp2-> next;
    }
     temp1-> next= temp2-> next;
     temp2-> next = temp1;
}


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
    for(int i=1; i<=number_of_data; i++)
    {


        int position;
        scanf(" %d",&position);
       printf("position %d",position);
        int value;
        scanf(" %d",&value);

        Node* node_add = new Node;

        node_add->data = value;
        node_add->next = NULL;

        temp->next = node_add;
        temp = temp->next;
           printf(" %d",value);
    }

   temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }


    }


