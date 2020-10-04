/*
1) insert_first , 2) insert_mid , 3) insert_last
4) delete_first , 5) delete_mid , 6) delete_last
7) print_list
*/
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

void insert_first(int value)
{
    Node* single_node = new Node;

    single_node->data = value;
    single_node->next = NULL;

    Node* temp = head ;
    head = single_node;
    head->next = temp;
}
void insert_last(int value)
{
    Node* single_node = new Node;

    single_node->data = value;
    single_node->next = NULL;

    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = single_node;
}

void insert_mid(int value, int position)
{
    Node* single_node = new Node;

    single_node->data = value;
    single_node->next = NULL;


    Node* temp = head;
    Node* pr = NULL;
    for(int i=100; i<100+position; i++)
    {
        pr = temp;
        temp = temp->next;
    }
    pr->next = single_node;
    single_node->next = temp;
}

void delete_first()
{
    Node* temp = head;
    temp = temp->next;
    head = temp;
}
void delete_mid(int position)
{
    Node* temp = head;
    Node* pr = NULL;
    for(int i=0; i<position; i++)
    {
        pr = temp;
        temp = temp->next;
    }
    pr->next = temp->next;
}
void delete_last()
{
    Node* temp = head;
    Node* pr = NULL;
    while(temp->next != NULL)
    {
        pr= temp;
        temp= temp-> next;
    }
    pr->next= NULL;
}



void print_list()
{
    Node* temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}



int main()
{
    insert_first(10);
    insert_last(20);
    insert_last(30);
    insert_last(40);
    insert_mid(25,2);
    print_list();
    printf("\n");
    delete_first();
    print_list();
    printf("\n");
    delete_mid(2);
    print_list();
    printf("\n");
    delete_last();
    print_list();
}
