#include<iostream>
#define MAX 5
using namespace std;
class Queue {
    private:
    int arr[MAX];
    int front;
    int rear;

    public:
    Queue() {
        front=-1;
        rear=-1;
    }
    bool isempty()
    {
        if(front==-1 && rear==-1) {
            cout<<"Queue is empty\n";
            return true;
        }
        else {
            cout<<"Queue not empty \n";
            return false;
        }
    }
    bool isfull() {
        if(rear == MAX-1) {
            cout<<"Queue is full";
            return true;
        }
        else
            return false;
    }
    void enqueue()
    {
        int m;
        if(isfull())
        {
            cout<<"Queue is overflow";
        }
        else
        {
            cout<<" Enter the value: ";
            cin>>m;
            if(isempty())
            {
            front++;
            rear++;
            arr[rear]=m;
            }
            else{
                rear++;
                arr[rear]=m;
            }
            cout<<m<<" is inserted in the queue.";
        }
    }

    void dequeue()
    {
        if(isempty())
        {
            cout<<"Queue is underflow\n";
        }
        else
        {
            if(front == rear)
            {
                front = -1;
                rear = -1;
            }
            else{
                front++;
            }
        }
};
    int main(){
    Queue s1;
    int operation;
    while(true){
        cout<<" enter a operation:\n 1. enqueue \n 2. dequeue \n 3.Exit";
        cin>>operation;
switch(operation){
    
    
    case 1:
    cout<<"enqueue an element";
    s1.enqueue();
    break;

    case 2:
    cout<<"dequeue an element";
    s1.dequeue();
    break;

    case 3:
    cout<<"exiting";
    break;

    default:
    cout<<"invalid choice";
    }
    }
    return 0;
    }
