#include <iostream>
using namespace std;


int tong( int n){
    if(n == 1)
    return 3;
    return tong(n -1 )+ n*(n +1);
}
int main()
{
    int n ;
    cout<<"Nhap n : ";
    cin>>n;
    cout<<"Tong gia tri la : "<<tong(n);
}