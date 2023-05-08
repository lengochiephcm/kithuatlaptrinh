#include <iostream>
using namespace std;

int input(int &n){
    cout<<"nhap n: ";
    cin>>n;
}
float recurx(float n){
    if(n == 0)
    return 1;
    else 
    return recurx(n-1);
}
float recury(float n){
    if ( n == 0)
    return 2;
    else return recury(n-1);
}
float xn(float n){
    int sum =0;
    for(int i = n ; i > 0 ; i--){
    sum += recurx(i)/3 + recury(i)/2 + 27;
    }

}
float yn(float n){
    int sum =0;
    for(int i = n ; i > 0 ; i--){
    sum += recurx(i)/5 + recury(i)/7 + 11;
    }
    
}
int main()
{
    int n;
    input(n);
    cout<<"\n x("<<n<<"): "<<xn(n);
    cout<<"\n y ("<<n<<"): "<<yn(n);
}