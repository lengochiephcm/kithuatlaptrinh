#include <iostream>
using namespace std;
int a(int n ){
    if( n == 1)
    {
        return 1;
    }
    else 
    return n + a(n-1);
}
int b(int n ){
    if ( n == 1)
    return 1;
    else 
    return n *n + b(n-1 );
}
int tichc(int n){
    if(n ==1 )
    return 1;
    else 
    return n * tichc(n-1 );

}
int c(int n){
    if( n==1 )
    return 1;
    else 
    return c(n-1) + tichc(n);
}
int d( int n)
{
    if (n == 1)
    return 2;
    int tich = 1 ;
    for(int i = 1; i <= 2*n;i++){
        tich *=i;
    }
    return d(n-1) + tich;
}

int main ()
{
    int n ;
    cout<<"nhap n: ";
    cin>>n;
    cout<<"\n a: "<<a(n);
    cout<<"\n b: "<<b(n);
    cout<<"\n c: "<<c(n);
    cout<<"\n d: "<<d(n);
}