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
