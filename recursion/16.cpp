#include <iostream>
using namespace std;
int input(int &n){
    cout<<"nhap n: ";
    cin>>n;
}
int recursion(int n){
    if(n <=1 )return 1;
    else {
        int sum =0;
        for(int i = 0; i< n ;i++){
            sum += recursion(i)*(n-i);
        }
        return sum;
    }
}
int output(int n){
    cout<<"\n A) x"<<7<<": "<<recursion(7);
    cout<<"\n B) x"<<n<<": "<<recursion(n);
}
int main()
{
    int n;
    input(n);
    recursion(n);
    output(n);
}