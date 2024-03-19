
#include <iostream>
#include <cstring>
using namespace std;

class Address
{
private:
    char building[30],street[30],city[20];
    int pin;
public:
    Address();
    Address(char* build,char* street,char* city,int pin){
        strcpy(this->building,build);
        strcpy(this->street,street);
        strcpy(this->city,city);
        this->pin=pin;
    }

    void setBuilding(char* build){
        strcpy(this->building,build);    
    }
    char* getBuilding(){
        return this->building;
    }
     void setStreet(char* street){
        strcpy(this->street,street);
    }
    char* getStreetuilding(){
        return this->street;
    }
     void setCity(char* city){
        strcpy(this->city,city);
    }
    char* getCity(){
        return this->city;
    }
     void setPin(int pin){
         this->pin=pin;
    }
    int getPin(){
        return pin;
    }
    void accept(){
        cout<<"Enter building name"<<endl;
        cin>>building;
        cout<<"Enter Street"<<endl;
        cin>>street;
        cout<<"Enter city"<<endl;
        cin>>city;
        cout<<"Enter pin"<<endl;
        cin>>pin;
    }
    void display(){
        cout<<"building : "<<building<<"\n Street : "<<street<<"\nCity : "<<city<<"\nPin : "<<pin<<endl;
    }
};

int main(){
    Address addr;
    int choice;
do{
cout<<"0.Exit\n1. accept\n2. display"<<endl;

cin>>choice;
switch(choice){
    case 1:
        addr.accept();
    break;
    case 2:
        addr.display();
    break;
   
    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
return 0;
}

