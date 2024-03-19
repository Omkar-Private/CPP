#include<iostream>
using namespace std;

class Box
{
private:
    float length,breadth,height;

public:
 Box(float length,float breadth,float height){
    cout<<length*breadth*height<<endl;
 }
     Box(){
        this->breadth=0.0;
        this->height=0.0;
        this->length=0.0;
     }


};
int main(){

    Box * box;
    box=new Box(10,10,10);

  

    return 0;
}