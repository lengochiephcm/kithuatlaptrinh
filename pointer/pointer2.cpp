#include <iostream>
using namespace std;


int main(){
    int n,k,sum, sub;
    float divide;

    int* ptr, *ptr2;

    ptr2 = &k;
    ptr = &n;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"\n Nhap k: ";
    cin>>k;
    cout<<"\n Gia tri n vua nhap la: "<<*ptr;
    cout<<"\n Dia chi cua n trong bo nho la : "<<ptr;
    sum = * ptr + * ptr2 ;
    sub = *ptr - *ptr2;
    divide = *ptr/ *ptr2;


    cout<<"\n Tong 2 so vua nhap la: "<<sum;
    cout<<"\n Hieu 2 so vua nhap la : "<<sub;
    cout<<"\n Thuong 2 so vua nhap la: "<<divide;

}