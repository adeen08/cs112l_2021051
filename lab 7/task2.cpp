#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

class matrix{
    
    public:
    int r,c;
    int **arr,**result;
    matrix(){
        r=0,c=0;
    }
    ~matrix(){}
    void getinput(int rows,int columns){   
        arr=new int*[rows];
        for(int i=0;i<rows;i++){
            arr[i]=new int[columns];
        }        
    }
    void setvalues(){
        
        cout<<"Enter the values for matrix: ";
        for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
               cin>>arr[i][j];
            }
        }        
    }

    matrix operator +(matrix m){
        matrix temp;
        temp.getinput(r,c);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                temp.arr[i][j]=0;
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                temp.arr[i][j]=arr[i][j]+m.arr[i][j];
            }
        }
        return temp;
    }
    matrix operator -(matrix m){
        matrix temp;
        temp.getinput(r,c);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                temp.arr[i][j]=0;
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                temp.arr[i][j]=arr[i][j]-m.arr[i][j];
            }
        }
        return temp;
    }
    matrix operator *(matrix m){
        matrix temp;
        temp.getinput(r,m.c);
        for(int i=0;i<r;i++){
            for(int j=0;j<m.c;j++){
                temp.arr[i][j]=0;
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                for(int k=0;k<m.c;k++){
                    temp.arr[i][j]+=arr[i][k]*m.arr[k][j];
                }
            }
        }
        return temp;
    }


};

int main(){
    matrix m1,m2,result;
    
    cout<<"Enter the number of rows of m1: ";
    cin>>m1.r;
    cout<<"Enter the number of columns of m1:";
    cin>>m1.c;

    cout<<"Enter the number of rows of m2: ";
    cin>>m2.r;
    cout<<"Enter the number of columns of m2:";
    cin>>m2.c;

    m1.getinput(m1.r,m1.c);
    m1.setvalues();
    m2.getinput(m2.r,m2.c);
    m2.setvalues();
    result.getinput(m1.r,m2.c);

    if(m1.r!=m2.r && m1.c!=m2.c){
        cout<<"Rows and columns not equal so matrix cannot be added"<<endl<<endl;
    }
    else{
    cout<<"Addition: "<<endl;
    result=m1+m2;
    for(int i=0;i<m1.r;i++){
        for(int j=0;j<m1.c;j++){
            cout<<result.arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }


    if(m1.r!=m2.r && m1.c!=m2.c){
        cout<<"Rows and columns not equal so matrix cannot be subtracted"<<endl<<endl;
    }
    else{
    cout<<endl<<"Subtraction: "<<endl;
    result=m1-m2;
    for(int i=0;i<m1.r;i++){
        for(int j=0;j<m1.c;j++){
            cout<<result.arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }


    if(m1.r!=m2.c){
        cout<<"Row of first matrix not equal to column of second matrix so matrix cannot be added";
    }
    else{
    cout<<endl<<"Multiplication: "<<endl;
    result=m1*m2;
    for(int i=0;i<m1.r;i++){
        for(int j=0;j<m2.c;j++){
            cout<<result.arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    
    return 0;
}