#include  <iostream>
#define max 10
using namespace std;
class stack{
    private:
    int arr[max];
    int top;



    public:

    stack(){
        top=-1;

    }
    bool isempty()
    {
        if(top==-1)
        cout<<"stack empty ";

    }
    bool isfull()
    {
        if(top == max - 1)
        return true;
        else{
            cout<<"num to be push ";
            return false;

        } 
    }
    void push()
    {
        int a;
        if(isfull()){
    cout<<"cannot push an element"; 
        }
else
{
    top++;
    cout<<" enter the element to push:";
    cin>>a;
    arr[top]=a;
    cout<<a<<" is pushed into the stack ";

}
    }
    void pop(){
    {
        if(isempty()){
        cout<<"cannot pop element";
    }
    else{
    cout<<arr[top]<<"is pop into the stack";
    top--;
    }
    
}
}
void peek() {
    if (isempty()) {
        cout << "Cannot peek, stack is empty" << endl;
    } else {
        cout << arr[top] << " is at the top of the stack" << endl;
    }
} 

};
int main(){
    stack s1;
    int operation;
    cout<<"enter a operation:\n 1. Push \n 2. Peek \n 3. Pop \n";
    cin>>operation;
switch(operation){
    
    
    case 1:
    cout<<"push operation";
    s1.push();
    break;
    case 2:
    cout<<"peek operation";
    s1.peek();
    break;
    case 3:
    cout<<"pop operation";
    s1.pop();
break;
}
return 0;
}

//Steps

1.Start

2.Initialize a stack with:

  Array arr[MAX]

  top = -1

3.Display menu:

  1. Push

  2. Peek

  3. Pop

4.Input operation

@Case 1: Push Operation

5.If top == MAX - 1 (stack full)

  Print "Stack Overflow – cannot push"

6.Else

  Input element x

  Increment top

  arr[top] ← x

  Print "x pushed into stack"

@Case 2: Peek Operation

7.If top == -1 (stack empty)

  Print "Stack Empty – cannot peek"

8.Else

  Print "arr[top] is at the top of the stack"

@Case 3: Pop Operation

9.If top == -1 (stack empty)

  Print "Stack Underflow – cannot pop"

10.Else

  Print "arr[top] popped"

  Decrement top

11.Stop
