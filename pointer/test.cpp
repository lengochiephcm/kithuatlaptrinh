#include<iostream>
#include <math.h>
using namespace std;

int input(int *&a, int &n){
    cout<<"Nhap bac cua da thuc: ";
    cin>>n;
    if(n <1 )  {

        while( n<1 ){
            cout<<"n\ Vui long nhap lai bac cua da thuc: ";
            cin>>n;
        }
    }
    for(int i = n ; i >=0  ; i--){
        cout<<"\n Nhap he so cua x^"<<i<<" : ";
        cin>>*(a+i);
    }
}
int output(int *a, int n){
    cout<<"\n Da thuc vua nhap la : ";
    for(int i = n ; i >=0 ; i--){
        if(i ==0){
            cout<<*(a+i);
        }
        else {
            cout<<*(a+i)<<"x^"<<i<<" + ";
        }
    }
}
int main(){
    int *a;
    int n, x;
    input(a,n);
    output(a,n);
    
}