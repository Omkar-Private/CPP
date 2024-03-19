# include<iostream>
using namespace std;

class Matrix
{
private:
    int arr[3][3],n,m,transpose[3][3], mat1[3][3], mat2[3][3],mat3[3][3];;
public:
    Matrix(int N,int M){
       this->n=N;
       this->m=M;
    }
    void accept(){
        cout<<"enter matrix 1 element "<<endl;
    
        for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                   cin>>arr[i][j];
              }
        }
        cout<<"enter matrix 2 element"<<endl;

          for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                   cin>>mat1[i][j];
              }
        }

        
    }
    void print(){
cout<<" matrix 1 element are "<<endl;
   
        for(int i=0;i<n;i++){
             cout<<"|";
              for(int j=0;j<m;j++){
                   cout<<arr[i][j];
                     cout<<",";
              }
             cout<<"|"<<endl;

        }
    cout<<" matrix 2 element are "<<endl;
   
        for(int i=0;i<n;i++){
             cout<<"|";
              for(int j=0;j<m;j++){
                   cout<<mat1[i][j];
                     cout<<",";
              }
             cout<<"|"<<endl;

        }
    }
     void add(){
         for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                mat2[i][j] = mat1[i][j] + arr[i][j];
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                cout << mat2[i][j] << " ";
                cout << endl;
        }
    }
    void sub(){
          for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                mat2[i][j] = mat1[i][j] - arr[i][j];
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                cout << mat2[i][j] << " ";
                cout << endl;
        }
    }
     void mul(){   
         int sum=0;     
        for (int c = 0; c < 3; c++) {
            for (int d = 0; d < 3; d++) {
                for (int k = 0; k < 3; k++) {
                    sum = sum + mat1[c][k]*arr[k][d];
                }
                mat3[c][d] = sum;
                sum = 0;
            }
        }
        cout << "\nProduct of the matrices:\n"<<endl;
        for (int c = 0; c < 3; c++) {
            for (int d = 0; d < 3; d++)
                cout << mat3[c][d] << " ";
                cout << endl;
            }
     }
    void Transpose(){
         // Computing transpose of the matrix
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j) {
         transpose[j][i] = arr[i][j];
      }

   // Printing the transpose
   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j) {
         cout << " " << transpose[i][j];
         if (j == n - 1)
            cout << endl << endl;
      }
    }
};


int main(){
    int size,index=0,num;
    cout<<"enter size for row and column"<<endl;
    cin>>size;
    cin>>num;
    int choice;
    Matrix *mat=new Matrix(size,num);
    Matrix m1(*mat);
    Matrix m2=*mat;
do{
cout<<"0.Exit\n1. accept\n2.print\n3.Add Matrix\n4.Substract\n5.multiplication\n6.Transpose of matrix 1\n7.Transpose using copy constructor"<<endl;

cin>>choice;
switch(choice){
    case 1:
        mat->accept();
   
    break;
    case 2:
           mat->print();
     break;
    case 3:
       mat->add();
    break;
    case 4:
       mat->sub();
    break;
    case 5:
       mat->mul();
    break;
    case 6:
       mat->Transpose();
    break;
     case 7:
       m1.Transpose();
       m2.Transpose();
    break;
    default:
    cout<<"Enter correct Choice!!!";
    break;
    
}
}while(choice!=0);
return 0;
}