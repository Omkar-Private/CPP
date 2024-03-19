#include <iostream>
using namespace std;

void factorial(){
    int num;
  long factor = 1.0;

    cout << "Enter a positive integer: ";
    cin >> num;
    
    if (num < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= num; ++i) {
            factor *= i;
        }
        cout << "Factorial of " << num << " = " << factor;    
    }

}
int main() {

    factorial();

    return 0;
}