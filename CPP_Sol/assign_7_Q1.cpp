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


class manager : employee
{
private:
float bonus;
public:
    manager(int id, float sal, float bonus){
        this->set_sal(sal);
        this->set_id(id);
        this->bonus=bonus;
    }
    manager(){}
public:
 
    float get_bonus(){
        return this->bonus;
    }
    void set_bonus(float bonus){
        this->bonus=bonus;
    }
    void display(){
        cout<<"employee id"<<get_id()<<endl;
        cout<<"employee salary"<<get_sal()<<endl;

    }
    void display_manager(){
        cout<<"manager bonus"<<get_bonus()<<endl;
    }
   void accept_manager(){
       float bonus;
        cout<<"enter bonus"<<endl;
         cin>>bonus;
        set_bonus(bonus);
   }
    void accept(){
    cout<<" Manager accept  method"<<endl;

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

class salesman :employee
{
private:
float comm;
public:
    
     salesman(int id, float sal, float comm){
        this->set_sal(sal);
        this->set_id(id);
        this->comm=comm;
    }
    salesman(){}
       float get_comm(){
        return this->comm;
    }
    void set_comm(float comm){
        this->comm=comm;
    }
    void display(){
        cout<<"employee id"<<get_id()<<endl;
        cout<<"employee salary"<<get_sal()<<endl;

    }
    void display_salesman(){
        cout<<"salesmans comm"<<get_comm()<<endl;
    }
   void accept_salesman(){
       float comm;
        cout<<"enter comm"<<endl;
         cin>>comm;
        set_comm(comm);
   }
    void accept(){
      cout<<"Salesman accept  method"<<endl;

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

class sales_manager: manager,salesman
{
private:
    /* data */
public:
 sales_manager(int id, float sal,float bonus,float comm){
     this->set_comm(comm);
     this->set_bonus(bonus);
     
     
 }
 sales_manager(){

 }
  void accept(){

       cout<<"Sales Manager accept  method"<<endl;
    //   this->accept();
       this->accept_manager();
       this->accept_salesman();
    }
   void display(){
     //  this->display();
       this->display_salesman();
       this->display_manager();

    }
};
int main(){
    sales_manager *sm=new sales_manager();
    sm->accept();
    sm->display();
}


