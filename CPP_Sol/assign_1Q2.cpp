# include<iostream>

using namespace std;

 struct Date {
    int day;
    int month;
    int year;
}Dt;
  class date{
      struct Date* ptrDate;
       public : date (){
     }
     public : date (struct Date* dt){
         ptrDate=dt;
     }
     bool isLeapYear(){
         if(ptrDate->year%4==0){
             cout<<ptrDate->year<<"is a leap year"<<endl;
         }
         else{
             cout<<ptrDate->year<<"is not a leap year"<<endl;
         }
     }
};
void  initDate(struct Date* ptrDate){
    ptrDate->day=01;
    ptrDate->month=01;
    ptrDate->year=01;
}
void acceptDateFromConsole(struct Date* ptrDate)
{
    cout<<"enter day"<<endl;
    cin>>ptrDate->day;
    cout<<"enter month"<<endl;
    cin>>ptrDate->month;
    cout<<"enter year"<<endl;
    cin>>ptrDate->year;
}
void printDateOnConsole(struct Date* ptrDate){
    cout<<"Date :"<<ptrDate->day<<"/"<<ptrDate->month<<"/"<<ptrDate->year<<endl;
}

int main(){
    struct Date* ptrDate;
       ptrDate=new Date;
      date date(ptrDate);
     
    int choice;
do{
cout<<"0.Exit\n1. initDate\n2. acceptDateFromConsole \n3.printDateOnConsole\n4.LeapYear"<<endl;

cin>>choice;
switch(choice){
    case 1:
        initDate(ptrDate);
    break;
    case 2:
        acceptDateFromConsole(ptrDate);
     break;
    case 3: 
        printDateOnConsole(ptrDate);
    break;
    case 4:
    
     date.isLeapYear();
     break;
    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
cout<< "hello shweta"<<endl;
return 0;
}