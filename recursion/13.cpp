#include <iostream>
using namespace std;

float a(int n);

float b(int n);

float a(int n){
    if( n == 0)
    return 1;
    else return a(n-1)/3 + b(n-1)/2 + 27;

}
float b(int n)
{
    if (n ==0 )
    return 2;
    else return a(n-1)/5 + b(n-1)/7 +11 ;

}
int main(){
    int n;
    while(n <1 ){
    cout<<"nhap n : ";
    cin>>n;
    
    if(n <1){
        cout<<"\n Vui long nhap lai n: ";
        cin>>n;
    }
    else
    {
        cout<<"\n Xn: "<<a(n);
        cout<<"\n Yn: "<<b(n);
    }
    }
    return 0;

}