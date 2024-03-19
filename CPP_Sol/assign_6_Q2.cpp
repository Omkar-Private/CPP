# include<iostream>
using namespace std;
#include <cstring>

class date
{
private:
   int day;
    int month;
    int year;
public:
    date(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;

    }
    date(){
        day=0;month=0;year=0;
    }
    int getDay(){
        return this->day;
    }
    void setDay(int day){
        this->day=day;
    }
    int getMonth(){
        return this->month;
    }
    void setMonth(int month){
         this->month=month;
       
    }
      int getYear(){
        return this->year;
    }
    void setYear(int year){
         this->year=year;
    }
    void acceptDateFromConsole()
{
    cout<<"enter day"<<endl;
    cin>>this->day;
    cout<<"enter month"<<endl;
    cin>>this->month;
    cout<<"enter year"<<endl;
    cin>>this->year;

}
void printDateOnConsole(){
    cout<<"Date :"<<getDay()<<"/"<<getMonth()<<"/"<<getYear()<<endl;
}
   bool isLeapYear(){
         if(getYear()%4==0){
             cout<<getYear()<<"is a leap year"<<endl;
         }
         else{
             cout<<getYear()<<"is not a leap year"<<endl;
         }
     }
};
class employee
{
private:
    int id; float sal;char dept[20]; date joinDate;
public:
    employee( int id, float sal,char* dept, date joinDate)
    {
        this->id=id;
        this->sal=sal;
        strcpy(this->dept,dept);
        this->joinDate=joinDate;
    }
    employee(){
        id=0;sal=3000;
    }
    int getId(){
        return this->id;
    }
    void setId(int id){
        this->id=id;
    }
    float getSal(){
        return this->sal;
    }
    void setMonth(int sal){
         this->sal=sal;      
    }
    char* getDept(){
        return this->dept;
    }
    void setDept(char* dept){
        strcpy(this->dept,dept);
    }

    date getJoin(){
       return joinDate;
    }
    void setJoin(int d,int m, int y){
    joinDate.setDay(d);
    joinDate.setMonth(m);
    joinDate.setYear(y);
    }
    void acceptEmployeeFromConsole()
    {
    cout<<"enter id"<<endl;
    cin>>this->id;
    cout<<"enter salary"<<endl;
    cin>>this->sal;
    cout<<"enter dept"<<endl;
    cin>>this->dept;
    cout<<"enter join date"<<endl;
    int d,m,y;
    cin>>d;
    cin>>m;
    cin>>y;
    setJoin(d,m,y);
    
}
void printEmployeeOnConsole(){
    cout<<"id :"<<getId()<<"\nsalary : "<<getSal()<<"\ndepartment : "<<getDept()<<"\njoinDate : "<<getJoin().getDay()<<"/"<<getJoin().getMonth()<<"/"<<getJoin().getYear()<<endl;
}


};

 class person
 {
 private:
char name[50],addr[100];date birth_date;
 public:
     person(char* name,char* addr, date dob){
        strcpy(this->name,name);
        strcpy(this->addr,addr);
        this->birth_date=dob;

     }
     person(){

     }
      char* getName(){
        return this->name;
    }
    void setName(char* name){
        strcpy(this->name,name);
    }

    char* getAddr(){
        return this->addr;
    }
    void setAddr(char* addr){
        strcpy(this->addr,addr);
    }

    date getDob(){
       return birth_date;
    }
    void setDob(int d,int m, int y){
    birth_date.setDay(d);
    birth_date.setMonth(m);
    birth_date.setYear(y);
    }
     void acceptPersonFromConsole()
    {
    cout<<"enter name"<<endl;
    cin>>this->name;
    cout<<"enter address"<<endl;
    cin>>this->addr;
    cout<<"enter date of birth"<<endl;
    int d,m,y;
    cin>>d;
    cin>>m;
    cin>>y;
    setDob(d,m,y);
    
}
void printPersonOnConsole(){
    cout<<"Name : "<<getName()<<"\nAddress : "<<getAddr()<<"\nBirthDate : "<<getDob().getDay()<<"/"<<getDob().getMonth()<<"/"<<getDob().getYear()<<endl;
}
 };

 
int main(){
   date dt;
   employee emp;
   person per;
    int choice;
do{
cout<<"0.Exit\n1.acceptDateFromConsole\n2.printDateOnConsole \n3.acceptEmployeeFromConsole"
"\n4.printEmployeeOnConsole\n5.acceptPersonFromConsole\n6.printPersonOnConsole\n7.isLeapYear"<<endl;

cin>>choice;
switch(choice){
    case 1:
        dt.acceptDateFromConsole();
    break;
    case 2:
      dt.printDateOnConsole();
     break;
    case 3: 
        emp.acceptEmployeeFromConsole();
    break;
      case 4: 
      emp.printEmployeeOnConsole();
    break;
      case 5: 
      per.acceptPersonFromConsole();
    break;
      case 6: 
      per.printPersonOnConsole();
    break;
  case 7: 
   dt.isLeapYear();
    break;
           

    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
return 0;
}
 