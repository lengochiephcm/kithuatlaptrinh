#include<iostream>
using namespace std;

int xn(int n){
    if (n<=1) return 1;
    else{
    int sum = 0;
    for(int i=0; i<n;i++){
        sum += (n-i)*xn(i);
    }
    
    return sum;
    }
}
int main(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"\n X"<<n<<": "<<xn(n);
}