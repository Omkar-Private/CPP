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
int main()
{
    Account acc[5]; //array of objects creation
    int n, loop;
     double bal;
    int id;

 int choice;
do{
cout<<"0.Exit\n1. accept\n2. print \n3.deposit\n4.withdraw"<<endl;

cin>>choice;
switch(choice){
    case 1:
    cout << "Enter total number of account holder: ";
    cin >> n;

    for (loop = 0; loop < n; loop++) {
        cout << "Enter details of account " << loop + 1 << ":\n";
        acc[loop].accept();
    }

    cout << endl;
    break;
    case 2:
   for (loop = 0; loop < n; loop++) {
        cout << "Details of account " << (loop + 1) << ":\n";
        acc[loop].display();
    }
     break;
    case 3:
    cout <<"enter account id and amount for deposit"<<endl;
    cin>>id;    
    cin>>bal;
     for (loop = 0; loop < n; loop++) {
         if(acc[loop].getId()==id){
            acc[loop].deposit(bal);
        //    acc[loop].display();
         }
    }
        break;
     case 4:  cout <<"enter account id and amount for withdraw"<<endl;
    cin>>id;
    cin>>bal;
     for (loop = 0; loop < n; loop++) {
         if(acc[loop].getId()==id){
             insufficient_funds insuff(id,bal,acc[loop].getBalence());
             insuff.display();
             acc[loop].withdraw(bal);
         }
    }
    break;
    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
return 0;
}
  

