#include <iostream>
using namespace std;
#include <cstring>

class Book
{
private:
    int id; 
    char title[20],author[20]; 
    double price;
public:
    Book(int id,char* title,char* author,double price ){
        this->id=id;
        strcpy(this->title,title);
        strcpy(this->author,author);
        this->price=price;
    }
    Book(){
        this->id=0;
        strcpy(this->title,"");
        strcpy(this->author,"");
        this->price=0.0;

    }
    int getId(){
        return this->id;
    }

    void setId(int Id){
        this->id=Id;
    }

    char* getTitle(){
        return  this->title;
    }

    void setTitle(char * title){
      strcpy(this->title,title);
    }

      char * getAuthor(){
        return this->author;
    }

    void setAuthor(char * author){
      strcpy(this->author,author);
    }
      double getPrice(){
        return this->price;
    }

    void setPrice(double price){
      this->price=price;
    }

    double purchaseBook(Book book){
        double amt=price*(10/100);
        return price-amt;
    }

   
};


class Tape
{
private:
    int id; 
    char title[20],artist[20]; 
    double price;
public:
    Tape(int id,char* title,char* artist,double price){
        this->id=id;
        strcpy(this->title,title);
        strcpy(this->artist,artist);
        this->price=price;
    }
    Tape(){

    }
    
    int getId(){
        return this->id;
    }

    void setId(int Id){
        this->id=Id;
    }

    char* getTitle(){
        return this->title;
    }

    void setTitle(char * title){
      strcpy(this->title,title);
    }

      char * getArtist(){
       return this->artist;
    }

    void setArtist(char * artist){
      strcpy(this->artist,artist);
    }
      double getPrice(){
       return this->price;
    }

    void setPrice(double price){
      this->price=price;
    }

    double purchaseTape(Tape tp){
        double amt=price*(5/100);
        return price-amt;
    }
};

int main()
{
    double amt=0.0,amt1=0.0;
    Book *book = new Book[3];
//Book *book= static_cast<Book*>(malloc(sizeof(Book)*3));
//Book book[3];
//book[0]=Book(1,"abc","abc",250.80);
  book[0].setId(1); book[0].setTitle("abc");book[0].setAuthor("abc");book[0].setPrice(250.00);  
   book[1].setId(2); book[1].setTitle("pqr");book[1].setAuthor("pqr");book[1].setPrice(500.00);  
   book[2].setId(3); book[2].setTitle("xyz");book[2].setAuthor("xyz");book[2].setPrice(300.00);  

  
    Tape *tape = new Tape[3];
    tape[0].setId(1); tape[0].setTitle("abc");tape[0].setArtist("abc");tape[0].setPrice(250.00);  
    tape[1].setId(2); tape[1].setTitle("pqr");tape[1].setArtist("pqr");tape[1].setPrice(500.00);  
    tape[2].setId(3); tape[2].setTitle("xyz");tape[2].setArtist("xyz");tape[2].setPrice(300.00);  

 int choice,cnt=0;
do{
cout<<"0.Exit\n1. show all books and tapes \n2.generate bill"<<endl;
cin>>choice;
switch(choice){
    case 1:
    int ch;
      
            do{
                cout<<"1. Purchase book\n2. Purchase tape"<<endl;
                cin>>ch;
                switch(ch){
                    case 1:
                    int bkid;
                    for(int i=0;i<3;i++)
                        cout<<"book : \n id : "<<book[i].getId()<<" Title : "<<book[i].getTitle()<<"Author : "<<book[i].getAuthor()<<"Price : "<<book[i].getPrice()<<endl;
                        cout<<"choose book id"<<endl;
                        cin>>bkid;
                        cnt++;
                      //  amt=book[bkid].getPrice();
                    amt=((book[bkid].getPrice()*10)/100);
                    amt1+=book[bkid].getPrice()-amt;
                    break;
                     case 2:
                    int tpid;
                    for(int i=0;i<3;i++)
                        cout<<"Tape : \n id : "<<tape[i].getId()<<" Title : "<<tape[i].getTitle()<<"Author : "<<tape[i].getArtist()<<"Price : "<<tape[i].getPrice()<<endl;
                        cout<<"choose tape id"<<endl;
                        cin>>tpid;
                        cnt++;
                       amt =((tape[tpid].getPrice()*5)/100);
                         amt1+=tape[tpid].getPrice()-amt;

                    break;
                }
            }while(cnt!=3);
       
     break;
    case 2:
        cout<<"after discount your Bill amount is Rs."<<amt1<<endl;
    break;

    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
return 0;
}
  
