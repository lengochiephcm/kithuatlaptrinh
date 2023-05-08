#include <iostream>
using namespace std;

int newton(int k, int n){
    if(k == 0 || k == n){
        return 1;

    }
    else
    return newton(k -1 , n-1 ) + newton(k , n-1 );
}
int main()
{
    int n,k;
    cout<<"Enter a values of n and k: ";
    cin>>n>>k;
    cout<<"\nResult of newton's binomial:  "<<newton(k,n);
    cout<<"\n";
    cout<<"\n Pascal triangle: \n";
    for(int i =0 ; i <= n ;i++ ){
        for(int j = 0 ; j <= i; j++){
            cout<<newton(j,i);
        }
        cout<<endl;
    }
    return 0;

}