#include<iostream>
using namespace std;

class tollBooth
{
private:
    double amount;
    unsigned int carCount;
public:
    tollBooth(int carCount,double amount){
        this->carCount=carCount;
        this->amount=amount;
    }
    tollBooth(){
        this->carCount=0;
        this->amount=0;
    }
    
    void payingCar(){
        this->carCount++;
        amount+=0.50;
    }
    void nopayCar(){
            this->carCount++;
    }
    void printOnConsole(){
        double calc=(this->carCount*0.50)-amount;
        cout<<"total non pay car count = "<<calc/0.50<<endl;
        cout<<"total amount of non paying cars  = "<<calc<<endl;
        cout<<"total  paying cars  count= "<<amount/0.50<<endl;

    }   
};





int main(){
    struct tollBooth* toll;
       toll=new tollBooth();
    int choice;
do{
cout<<"0.Exit\n1. payingCar\n2. nopayCar \n3.printOnConsole"<<endl;

cin>>choice;
switch(choice){
    case 1:
       toll->payingCar();
    break;
    case 2:
        toll->nopayCar();
     break;
    case 3: 
        toll->printOnConsole();
    break;
    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
return 0;
}