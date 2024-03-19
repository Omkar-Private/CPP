
#include <iostream>
#include <cstring>
#include<list>
using namespace std;

class Address
{
private:
    char building[30],street[30],city[20];
    int pin;
public:
    Address(){}
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
    char* getStreet(){
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
    void printlist(list<Address> li)
    {
        list<Address>::iterator it;
        for(it=li.begin();it!=li.end();it++)
        {
          cout<<"building : "<<it->getBuilding()<<"\n Street : "<<it->getStreet()<<"\nCity : "<<it->getCity()<<"\nPin : "<<it->getPin()<<endl;
        }
        cout<<endl;
}

   
};

int main(){
    Address addr;
    int choice;
    list<Address> AddrList; 

do{
cout<<"0.Exit\n1. accept\n2. display in forword\n3.desplay in reverse"<<endl;

cin>>choice;
switch(choice){
    case 1:

        addr.accept();
        AddrList.push_back(addr);
    break;
    case 2:
        addr.printlist(AddrList);
    break;
      case 3:
        AddrList.reverse();
        addr.printlist(AddrList);

    break;
   
    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
return 0;
}

