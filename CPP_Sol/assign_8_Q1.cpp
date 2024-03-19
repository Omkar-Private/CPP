# include<iostream>

using namespace std;


class employee
{
private:
    int id;
    float sal;
public:
    employee(int id, float sal);
    employee(){}
    int get_id(){
        return this->id;
    }
    void set_id(int id){
        this->id=id;
    }
    float get_sal(){
        return this->sal;
    }
    void set_sal(float sal){
        this->sal=sal;
    }
    void display(){
        cout<<"employee id"<<get_id()<<endl;
        cout<<"employee salary"<<get_sal()<<endl;
    }
   
    void accept(){
    cout<<"Employee accept  method"<<endl;

        int id;
        float sal;
        cout<<"enter id"<<endl;
        cin>>id;
        set_id(id);
        cout<<"enter sal"<<endl;
        cin>>sal;
        set_sal(sal);
    }
   
};

employee::employee(int id, float sal){
    this->id=id;
    this->sal=sal;
}


class manager : virtual public employee
{
private:
float bonus;
public:
    manager(int id, float sal, float bonus):employee(){
        this->set_sal(sal);
        this->set_id(id);
        this->bonus=bonus;
    }
    manager():employee(){
        this->bonus=0.0;
    }
public:
 
    float get_bonus(){
        return this->bonus;
    }
    void set_bonus(float bonus){
        this->bonus=bonus;
    }
  
    void display_manager(){
      //  employee::display();
        cout<<"manager bonus"<<get_bonus()<<endl;
    }
   void accept_manager(){
      // employee::accept();
       float bonus;
        cout<<"enter bonus"<<endl;
         cin>>bonus;
        set_bonus(bonus);
   }
   
};

class salesman : virtual public employee
{
private:
float comm;
public:
    
     salesman(int id, float sal, float comm):employee(){
        this->set_sal(sal);
        this->set_id(id);
        this->comm=comm;
    }
    salesman():employee(){
        this->comm=0.0;
    }
       float get_comm(){
        return this->comm;
    }
    void set_comm(float comm){
        this->comm=comm;
    }

    void display_salesman(){
      //  employee::display();
        cout<<"salesmans comm"<<get_comm()<<endl;
    }
   void accept_salesman(){
       float comm;
     //  employee::accept();
        cout<<"enter comm"<<endl;
         cin>>comm;
        set_comm(comm);
   }
   
};
static int mn=0,sl=0;
class sales_manager: manager,salesman
{
private:
public:
 sales_manager(int id, float sal,float bonus,float comm):manager(),salesman(){
     this->set_comm(comm);
     this->set_bonus(bonus);
     
     
 }
 sales_manager():manager(),salesman(){

 }
  void accept(){
    int ch;
       cout<<"Sales Manager accept  method"<<endl;
       employee::accept();
        cout<<"enter choice for designation for 1.manager 2.salesman"<<endl;
        cin>>ch;
        if(ch==1){
            this->accept_manager();
            mn++;
        }else if(ch==2){
            this->accept_salesman();
            sl++;
        }else{
            cout<<"enter correct choice"<<endl;
        }
    }
   void display(){
employee::display();
 cout<<"Employee designation : ";
    if(this->get_bonus()>0.0){
      cout<<"manager"<<endl;
         }
        else if(this->get_comm()>0.0){
      cout<<"Salesman"<<endl;
         }
    }
};

int main(){
//Tape *tape = new Tape[3];

    sales_manager *sm=new sales_manager[10];

 int n, loop;
     double bal;
    int id;

 int choice,cnt=0,ch;
do{
cout<<"0.Exit\n1. accept\n2. print count of employee with respect to the designation \n3.Display respective designation employees"<<endl;
cin>>choice;
switch(choice){
    case 1:
        cout << "Enter detail of employee"<<endl;
      for (loop = 0; loop < 10; loop++) {
        sm[loop].accept();
       
    }
    break;
    
     case 2:
   cout<<"Total manager"<<mn<<endl;
      cout<<"Total salesman"<<sl<<endl;


    break;
    case 3:
     for (loop = 0; loop < 10; loop++) {
        cout << " detail of all employee"<<loop+1<<endl;
        sm[loop].display();
    }
    break;
    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
return 0;
}



