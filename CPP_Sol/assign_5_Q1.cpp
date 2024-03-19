// C++ program to create student class, read and print N student's details
// (Example of array of objects)

#include <iostream>
using namespace std;

#define MAX 10

class student {
private:
    char name[30];
    int rollNo;
    int total;
    float perc;

public:
    //member function to get student's details
    void getDetails(void);
    //member function to print student's details
    void putDetails(void);
    void setRoll(int rollNo){
        this->rollNo=rollNo;
    }
     int getRoll(){
        return this->rollNo;
    }
};

//member function definition, outside of the class
void student::getDetails(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks for 3 subject outof 500: ";
    cin >> total;

    perc = (float)total / 500 * 100;
}

//member function definition, outside of the class
void student::putDetails(void)
{
    cout << "Student details:\n";
    cout << "Name:" << name << ",Roll Number:" << rollNo << ",Total:" << total << ",Percentage:" << perc;
}

void sortRecords(student st[]) {
    for(int i=0;i<3;i++){
        if(st[i].getRoll() > st[i+1].getRoll()){
            student temp=st[i];
            st[i]=st[i+1];
            st[i+1]=temp;
        }
    }
}

int searchRecords(student st[])
{
    int newroll=0;
    cout<<"enter roll no to search record"<<endl;
    cin>>newroll;
     for(int i=0;i<3;i++){
        if(st[i].getRoll() == newroll){
           return i;
        }
    }
    return -1;
}
int main()
{
    student std[MAX]; //array of objects creation
    int n, loop;

 int choice;
do{
cout<<"0.Exit\n1. accept\n2. print \n3.sort\n4.search"<<endl;

cin>>choice;
switch(choice){
    case 1:
    cout << "Enter total number of students: ";
    cin >> n;

    for (loop = 0; loop < n; loop++) {
        cout << "Enter details of student " << loop + 1 << ":\n";
        std[loop].getDetails();
    }

    cout << endl;
    break;
    case 2:
   for (loop = 0; loop < n; loop++) {
        cout << "Details of student " << (loop + 1) << ":\n";
        std[loop].putDetails();
    }
     break;
    case 3:
       sortRecords(std);
    break;
     case 4:
       int result=searchRecords(std);
       if(result==1){
           cout<<"record found"<<endl;
       }
       else{
          cout<<"record  not found"<<endl;

       }
    break;
    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
return 0;
}
  