
#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator,denominator;
public:
    Fraction(int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    Fraction(){
        this->numerator=0;
        this->denominator=0;        
    }

    void setNumerator(int nume){
        this->numerator=nume;
    }
     int getNumerator(){
        return this->numerator;
    }
     void setDenominator(int deno){
         if(deno==0){
             cout<<"denominator should not be 0";
         }else
        this->denominator=deno;
    }
     int getDenominator(){
        return this->denominator;
    }
    int findGCD(int a, int b) {
        if (b == 0)
            return a;
        return findGCD(b, a % b);
   }
   void lowestForm(){
      int denom;
      cout<< "Numerator = " << getNumerator()<<endl;
      cout<< "Denominator = " << getDenominator()<<endl;
      denom = findGCD(getNumerator(),getDenominator());
      setNumerator(getNumerator()/denom);
      setDenominator(getDenominator()/denom);

      cout<< "Lowest Fraction : "<<getNumerator()<<"/"<<getDenominator()<<endl;
}
    
    void decimalValue(int num1,int num2){
        double result= num1/num2;
        cout<<"Decimal Value : "<<result<<endl;
    }
};
int main(){

    Fraction fr;  
    int num1,num2,choice;
    
do{
cout<<"0.Exit\n1. accept values\n2. display lowest Form\n3. display Decimal Values"<<endl;

cin>>choice;
switch(choice){
    case 1:
    cout<<"Enter values for Nuemerator and Denominator"<<endl;
    cin>>num1;
    cin>>num2;
    fr.setNumerator(num1);
    fr.setDenominator(num2);
    break;
    case 2:
    fr.lowestForm() ;
    break;
    case 3:
    fr.decimalValue(num1,num2) ;
    break;
    default:
    cout<<"Enter correct Choice!!!";
    break;
      
}
}while(choice!=0);
return 0;
}
