# include<iostream>
using namespace std;

class Stack
{
private:
    int size=5,top=-1,rear=-1;
int *arr ;
public:
    Stack(){
        this->size=5;
    }
    Stack(int size){
        this->size=size;
        arr=new int(size);
    }
    bool isEmpty(){
        return this->top==this->rear;
    }
    bool isFull(){
        return this->top==size-1;
    }

    void push(int num){
            this->top++;
        arr[this->top]=num;
    }
    int pop(){
        
         this->top=this->top-1;
         return  arr[top+1];
    }
    int peek(){
        return arr[top];
    }
   
    void print(){
            cout<<"Stack elements";
        for(int i=0;i<=top;i++){
             cout<<arr[i];

        }
    }
};

int main(){
    int size,index=0,num;
    cout<<"enter size"<<endl;
    cin>>size;
    Stack st(size);
    int choice;
do{
cout<<"0.Exit\n1. push\n2. pop \n3.peek\n4.print"<<endl;

cin>>choice;
switch(choice){
    case 1:
    if(!st.isFull()){
        cout<<"enter element value"<<endl;
        cin>>num;
        st.push(num);
       // index++;
    }
    else if(st.isFull()){
        cout<<"Stack is  full !!!!"<<endl;
    }
    break;
    case 2:
    if(!st.isEmpty()){
        cout<<"poped element"<<st.pop()<<endl;
    }else{
        cout<<"Stack is  Empty !!!!"<<endl;
    }
     break;
    case 3:
        cout<<"peeked element"<<st.peek()<<endl;
    break;
     case 4:
        st.print();
    break;
    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
return 0;
}