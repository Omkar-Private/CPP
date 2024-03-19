# include<iostream>
using namespace std;

class Time
{
private:
    int h, m, s;
public:
   Time(){}
    Time(int h,int m,int s){
        this->h=h;
        this->m=m;
        this->s=s;
    }   
    void setHour(int h){
        this->h=h;
    }
    void setMinute(int m){
        this->m=m;
    }
    void setSeconds(int s){
        this->s=s;
    }
    int getHour(){
        return this->h;
    }
    int getMinute(){
        return this->m;
    }
    int getSeconds(){
        return this->s;
    }
    void printTime(){
        cout<<getHour()<<" : "<<getMinute()<<" : "<<getSeconds()<<endl;
    }
    
};

int main()
{
    Time *t[3]; //array of objects creation
    int h,m,s,loop;

    for (loop = 0; loop < 3; loop++) {
        t[loop]=new Time();
        cin>>h;
        t[loop]->setHour(h);
        cin>>m;
        t[loop]->setMinute(m);
        cin>>s;
        t[loop]->setSeconds(s);
    }

 for (loop = 0; loop < 3; loop++) {
        t[loop]->printTime();
    }


}



