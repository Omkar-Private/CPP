# include<iostream>
using namespace std;

enum Account_type{
    SAVING=0, CURRENT,DMAT
};
class Account
{
private:
int id;
Account_type type;
double balence;
public:
    //Account();
    Account(){

    }

    void setId(int id){
        this->id=id;
    }
    int getId(){
        return id;
    }
     void setType(int tp){
    type = (Account_type)tp;
    }
    Account_type getType(){
        return type;
    }
     void setBalence(double bal){
        this->balence=bal;
    }
    double getBalence(){
        return balence;
    }
    void accept(){
        int num;
        cout<<"Enter id"<<endl;
        cin>>id;   
        setId(id);
        cout<<"Enter type 0 or 1 or 2"<<endl;
        cin>>num;
        setType(num);
        cout<<"Enter balence"<<endl;
        cin>>balence;
        this->setBalence(balence);
    }

    void display(){
        cout<<this->getBalence()<<endl;
    }
    
    void withdraw(double bal){
        setBalence(this->balence-bal);
    }
    void deposit(double bal){
      //  this->balence=this->balence+bal;
        setBalence(this->balence+bal);
    }
};
class insufficient_funds
{
private:
    int accid;
    double withdraw_amt,cur_bal;
public:
    insufficient_funds(int accid,double withdrwa_amt,double cur_bal){
        this->accid=accid;
        this->withdraw_amt=withdraw_amt;
        this->cur_bal=cur_bal;
    }
    insufficient_funds();
    void display(){
        if(cur_bal<100 || withdraw_amt>cur_bal)
        cout<<"your account has insufficent balance : Rs."<<cur_bal<<endl;
    }
};


class Bank
{
private:
  Account acc[5]; //array of objects creationpublic:
  public:
     void accept(int accid){
      
        acc[accid].setId(accid);
        cout<<"Enter type 0 or 1 or 2"<<endl;
        int num;
        cin>>num;
        acc[accid].setType(num);
        cout<<"Enter balence"<<endl;
        int balence;
        cin>>balence;
        acc[accid].setBalence(balence);
    }
    void display(int accid){
        cout<<"Id : "<<acc[accid].getId()<<"\n type : "<<acc[accid].getType()<<"\n Balance : "<<acc[accid].getBalence();
    }
     
    int withdraw(int accid,double bal){
          if( acc[accid].getBalence()<100 || bal>acc[accid].getBalence()){
              return 0;
          }
        acc[accid].setBalence(acc[accid].getBalence()-bal);
        return 1;
    }
    void deposit(int accid,double bal){
       acc[accid].setBalence(acc[accid].getBalence()+bal);
    }

    int fundTrans(int fromAccid,int toAccid,double amt){
         if( acc[fromAccid].getBalence()<100 || amt>acc[fromAccid].getBalence()){
             return 0;
         }
        acc[fromAccid].setBalence(acc[fromAccid].getBalence()-amt);
        acc[toAccid].setBalence(acc[toAccid].getBalence()+amt);
        return 1;
    }
    Bank(){

    }
};


int main()
{
  Bank bk;
    int n, loop;
     double bal;
    int id;

 int choice;
do{
cout<<"0.Exit\n1. accept\n2. print \n3.deposit\n4.withdraw\n5.fund Transfer"<<endl;

cin>>choice;
switch(choice){
    case 1:  
      cout<<"Enter id"<<endl;
      cin>>id;
        bk.accept(id);
    break;
    case 2:
        cout<<"Enter id"<<endl;
        cin>>id;
        bk.display(id);
    break;
    case 3:
        cout <<"enter account id and amount for deposit"<<endl;
        cin>>id;    
        cin>>bal;
        bk.deposit(id,bal);
    break;
    case 4:  cout <<"enter account id and amount for withdraw"<<endl;
    cin>>id;
    cin>>bal;
    if(bk.withdraw(id,bal)){
        cout<<"your withdrawed amount is : Rs."<<bal<<endl;
    }
    else{
        cout<<"you have insufficient balance "<<endl;
    }
    break;
     case 5:  cout <<"enter From account id, To account id and amount for Transfer"<<endl;
    cin>>id;
    int toId;
    cin>>toId;
    cin>>bal;
      if(bk.fundTrans(id,toId,bal)){
        cout<<"your Tranfered amount is : Rs."<<bal<<endl;
    }
    else{
        cout<<"you have insufficient balance "<<endl;
    }
 
    break;
    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
return 0;
}
  

