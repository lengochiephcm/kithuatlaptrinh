#include <iostream>
#include <math.h>
using namespace std;

int input(int *&a, int &n){
    a = new int [n];
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
int sum(int *a, int n, int x){
    long fx =0 ;
    cout<<"\n Nhap gia tri cua x: ";
    cin>>x;
    for(int i = n; i >= 0; i--){
        fx = fx + *(a+i) *pow(x, i);
    }
    
    cout<<"\n F("<<x<<"): "<<fx;
}
int main(){
    int *a;
    int n, x;
    input(a,n);
    output(a,n);
    sum(a,n,x);
}