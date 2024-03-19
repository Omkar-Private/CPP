
#include <iostream>
#include <cstring>
#include <fstream>                        

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
    void printlist()
    {
      
          cout<<"building : "<<getBuilding()<<"\n Street : "<<getStreet()<<"\nCity : "<<getCity()<<"\nPin : "<<getPin()<<endl;
        
}

   
};

int main(){
    Address addr;
    int choice;
    fstream FileName;                   

do{
cout<<"0.Exit\n1. accept\n2. display"<<endl;

cin>>choice;
switch(choice){
    case 1:
     FileName.open("FileName.txt",ios::out | ios::app); 
    if (!FileName) {                        
        cout<<"File doesn’t exist.";          
    }
    else {
            addr.accept();       
            FileName<<addr.getBuilding()<<","<<addr.getStreet()<<","<<addr.getCity()<<","<<addr.getPin()<<endl;                              

    }
    FileName.close();                   
    break;
    case 2:
      FileName.open("FileName.txt", ios::in);         
    char x;                     
        while(!FileName.eof()) {         
            FileName>>x;                         
            cout<<x;                  
        }
    FileName.close();    
    break;
    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
return 0;
}

