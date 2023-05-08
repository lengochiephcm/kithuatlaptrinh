#include <iostream>
using namespace std;

int DeQuy(int n)
{
    if( n == 1 )
    {
        return 1 ;
    }
    return DeQuy(n -1 )+ n*n;
}
int main ()
{
    int n;
    cout<<"Nhap n : ";
    cin>>n;
    cout<<"Tong DeQuy : "<<DeQuy(n);
}