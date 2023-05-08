#include <iostream>
#define MAX 1000
using namespace std;

int input(int *&a, int &n){
    a = new int [n];
    cout<<"Nhap gia tri cua mang: ";
    cin>>n;
    for(int i =0; i < n; i++){
        cout<<"\n Gia tri "<<i+1<<": ";
        cin>>*(a+i);
    }
}
int output(int *a, int n){

    cout<<"\n";
    cout<<"=====MANG DA NHAP===="<<endl;
    for(int i =0 ; i <n; i++){
        cout<<"\na["<<i<<"]: "<<*(a+i);
    }
}
int main(){
    int n ;
    int *a;
    input(a,n);
    output(a,n);
    delete[]a;
}