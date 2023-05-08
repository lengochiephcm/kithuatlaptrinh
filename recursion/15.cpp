#include <iostream>
using namespace std;

int input(int &n){
        cout<<"Nhap n: ";
        cin>>n;

}
int recursion(int n){
    if(n ==1 )
    return 1;
    else {
        int sum =0 ;
        for (int i =1 ;i <n; i++){
            sum += n*recursion(i);
        }
        return sum;
    }
}
void output(int n){
    cout<<"\n A) x"<<7<<": "<<recursion(7);
    cout<<"\nB) x"<<n<<": "<<recursion(n);
}
int main(){
    int n;
    input(n);
    recursion(n);
    output(n);
}