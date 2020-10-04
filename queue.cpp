#include<bits/stdc++.h>
using namespace std;

/*
    Stack -> 1) Push, 2) Pop, 3) Top, 4) isFull, 5)isEmpty
    Queue -> 1) Enqueue, 2) Dequeue, 3) Front, 4) isFull, 5) isEmpty
*/
int Queue[6], queue_size = 6, Front = -1, Rear = -1;

int isFull(){
    if(Rear==queue_size-1){
        return 1;
    }else{
        return 0;
    }
//    return (Rear==queue_size-1)?1 :0;
}
int isEmpty(){
    if(Front==-1 || Front>Rear){
        return 1;
    }else{
        return 0;
    }
}

void Enqueue(int value){
    if(isFull()){
        printf("Queue Overflow !! \n");
    }else{
        Rear++;
        Queue[Rear]=value;
        printf("Enqueued Value is %d\n",Queue[Rear]);
        if(Front==-1){
            Front = 0;
        }
    }
}
void Dequeue(){
    if(isEmpty()){
        printf("Queue Underflow !!\n");
    }else{
        printf("Dequeued Value is %d\n",Queue[Front]);
        Front++;
    }
}

void FrontValue(){
    if(isEmpty()){
        printf("No Value in Queue\n");
    }else{
        printf("Front Value is %d\n",Queue[Front]);
    }
}



int main(){
    Enqueue(20);
    getchar();
    Enqueue(30);
    getchar();
    Enqueue(45);
    getchar();
    Dequeue();
    getchar();
    FrontValue();
    getchar();
    Dequeue();
    getchar();
    FrontValue();
    getchar();
    Dequeue();
    getchar();
    FrontValue();
    getchar();
    Dequeue();
}


