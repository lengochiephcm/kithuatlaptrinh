#include <iostream>
using namespace std;

int main()
{
    int n;
    int a =0;
    int b = 0;
    int tich =1 ;
    int tichx = 1;
    int c= 0;

    do{

    
    cout<<"Nhap so N: ";
    cin>>n;
    if (n<0)
    {
        cout<<"Vui long nhap gia tri N > 0!!!";

    }
    }while(n < 0);
    for ( int i = 1 ; i <= n; i++)
    {
        a += i*i;
    }
    cout<<"\nGia tri cau a: "<<a;
    for (int j = 1 ; j <=n ; j++)
    {
        tich *= j;
        b += tich;

    }
    cout<<"\nGia tri cau b: "<<b;
   return 0;
}