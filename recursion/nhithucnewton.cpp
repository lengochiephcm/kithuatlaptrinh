#include<iostream>
using namespace std;

int newton(int k , int n){
    if ( k ==0 || k== n)
    {
        return 1;

    }
    return newton(k-1, n-1 ) + newton(k, n-1);

}

int main()
{
    int n, k;
    cout<<"Nhap n va k: ";
    cin>>k>>n;
    cout<<"\n Nhi thuc newton la : "<<newton(k,n);
    for(int i = 0; i <=n ; i++){
        for(int j = 0 ; j <= i; j++)
        {
            cout<<"\n Pascal triangle: \n"<<newton(j,i);
        }
        cout<<endl;
    }
    system("pause");
}