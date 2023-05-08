#include <iostream>
using namespace std;

int quesb(int n )
{   
    if( n == 1 || n ==2 )
    return 1;
    else 
    return quesb(n -1 )+ (n -1 )*quesb(n-2);
}
int questc(int n){
    int x = n;
    int x1 = 1 ;
    int x2 = 1;
    for(int i =3 ; i <=n ; i++){
        x = x2 + (i-1)*x1;
        x1 = x2; x2 =x;
        
    }
    return x;
}
int main()
{
    int n ;
    cout<<"Nhap n : ";
    cin>>n;
    cout<<"\n a: "<<quesb(7);
    cout<<"\n b: "<<quesb(n);
    cout<<"\n c: "<<questc(n);
}