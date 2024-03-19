#include <iostream>
//#include <cstdlib>
using namespace std;
 
// Define the default capacity of a stack
#define SIZE 10
 
// A class to represent a stack
template <class X>
class stack
{
    X *arr;
    int top;
    int capacity;
 
public:
    stack(int size = SIZE);         // constructor
 
    void push(X);
    X pop();
    X peek();
 
    int size();
    bool isEmpty();
    bool isFull();
 
    // destructor
    ~stack() {
        delete[] arr;
    }
};
 
// Constructor to initialize the stack
template <class X>
stack<X>::stack(int size)
{
    arr = new X[size];
    capacity = size;
    top = -1;
}
 
// Function to add an element `x` to the stack
template <class X>
void stack<X>::push(X x)
{
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Inserting " << x << endl;
    arr[++top] = x;
}
 
// Function to pop the top element from the stack
template <class X>
X stack<X>::pop()
{
    // check for stack underflow
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Removing " << peek() << endl;
 
    // decrease stack size by 1 and (optionally) return the popped element
    return arr[top--];
}
 
// Function to return the top element of the stack
template <class X>
X stack<X>::peek()
{
    if (!isEmpty()) {
        return arr[top];
    }
    else {
        exit(EXIT_FAILURE);
    }
}
 
// Utility function to return the size of the stack
template <class X>
int stack<X>::size() {
    return top + 1;
}
 
// Utility function to check if the stack is empty or not
template <class X>
bool stack<X>::isEmpty() {
    return top == -1;               // or return size() == 0;
}
 
// Utility function to check if the stack is full or not
template <class X>
bool stack<X>::isFull() {
    return top == capacity - 1;     // or return size() == capacity;
}
 
int main()
{
    stack<string> st(2);
     
    int choice;
    char num[20];
do{
std::cout<<"0.Exit\n1. push\n2. pop \n3.peek"<<endl;

cin>>choice;
switch(choice){
    case 1:
    if(!st.isFull()){
        std::cout<<"enter element value"<<endl;
        cin>>num;
        st.push(num);
       // index++;
    }
    else if(st.isFull()){
        std::cout<<"Stack is  full !!!!"<<endl;
    }
    break;
    case 2:
    if(!st.isEmpty()){
        std::cout<<"poped element"<<st.pop()<<endl;
    }else{
        std::cout<<"Stack is  Empty !!!!"<<endl;
    }
     break;
    case 3:
        std::cout<<"peeked element"<<st.peek()<<endl;
    break;
    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
std::cout << "The stack size is " << st.size() << endl;
return 0;
}