#include <iostream>
using namespace std;
class Distance
{
    private:
        int feet,inch;//add,sub,equal,incr,decr;
    public:
        Distance ()
        {
            feet = 0;
            inch = 0;
        }
        Distance (int f , int i)
        {
            feet = f;
            inch = i;
        }
        Distance operator + (Distance d1){
            d1.feet+d1.inch;
           // cout<<add<<endl;
        }
        void operator ++ (int){
               this->feet++;
               this->inch++;
               cout<< this->feet<< this->inch<<endl;
        }
        void  operator >> (Distance d1){
            cin>> d1.feet;
            cin >> d1.inch;
            cout<< d1.feet<< d1.inch<<endl;

        }
        
        void  operator << (Distance d1){
            cout<<"feet ="<<d1.feet<<" inch ="<<d1.inch<<endl;
        }
        friend Distance operator == (Distance d1,Distance d2);
        friend void operator -- (Distance &d1,int);

};
        Distance operator == (Distance d1,Distance d2)
        {
            if( d1.feet==d2.feet){
            cout<<"feet = "<<d1.feet<<endl;       
            }
            if(d1.inch==d2.inch){
            cout<<"inch = "<<d1.inch<<endl;
            }
        }
        void operator -- (Distance &d1,int)
        {
            d1.feet--;
            d1.inch--;
            cout<< d1.feet<< d1.inch<<endl;

         //   return d1;
        }
    int main ()
    {
        Distance d1(1,20), d2(1,5), d3;
        int choice;
        do{
        cout<<"0.Exit\n1. + operator\n2. == operator  \n3.++ operator\n4.-- operator\n5.>> operator\n6.<< operator"<<endl;
        cin>>choice;
        switch(choice){
        case 1:
            d3 = d1 + d2;
        break;
        case 2:
            d1 == d2; 
        break;
        case 3:
            d1++;
        break;
        case 4:
            d2--;
        break;
        case 5:
            d1>>d1;
        break;
        case 6:
            d1<<d1;
        break;
    
        default:
            cout<<"Enter correct Choice!!!";
        break;
        }
    }while(choice!=0);
    return 0;
}