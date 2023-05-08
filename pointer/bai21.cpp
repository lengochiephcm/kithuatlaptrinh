#include<iostream>
#include <math.h>
using namespace std;


int input(int *&a, int &n){

    cout<<"Enter a value of Array: ";
    cin>>n;
    if(n < 1 ){
        while(n<1 ){
            cout<<"\n Please enter a value bigger than 1 : ";
            cin>>n;
        }
    }
    a= new int [n];
    cout<<"Enter a element of Array: \n";
    for(int i = 0; i< n; i++){
        cout<<"\n Value "<<i+1<<": ";
        cin>>*(a+i);
        if(*(a+i)<1 ){
            while(*(a+i)<1){
            cout<<"\n Please try positive value: ";
            cin>>*(a+i);
            }
        }
    }
}
int output(int *a, int n){
    for(int i= 0; i<n; i++){
        cout<<"\n Value "<<i+1<<": "<<*(a+i);
    }
}
int deletek(int *a, int &k, int &n){//caua

    cout<<"\n Enter a position that you need to delete: ";
    cin>>k;
    if(k > n){
        while(k > n){
            cout<<"\n Please enter again value you needto delete: ";
            cin>>k;
        }
    }
    for(int i =k ; i < n; i++){
        *(a+i)= *(a+i+1);
        
    }
    n--;
    
    

}
int insertx(int *a, int x, int &n, int k){//caub
     
    cout<<"\n Enter a position that you need to insert: ";
    cin>>k;
    if(k > n){
        while(k > n){
            cout<<"\n Please enter again value you need to insert: ";
            cin>>k;
        }
    }
    cout<<"\nEnter x value into position k: ";
    cin>>x;
    if(x<1){
        while(x<1){
            cout<<"\nRetry with a positive value: ";
            cin>>x;
        }
    }
    for(int i = n;i >= k;i-- ){
        *(a+i) = *(a+i-1);
        

    }
    *(a+k)= x;
    n++;

}
int prime(int n){
    if( n <2 )
    return 0;
    for(int i = 0; i <= sqrt(n); i++){
        if ( n % i == 0)
        return 0;

    }
    return 1;
}
int deleteprime(int *a, int &n){
    for(int i =0 ; i <n ; i++){
        if (prime(*(a+i)))
        deletek(a,i,n);
        i--;
    }
}
int main(){
    int *a;
    int n,k,x;
    cout<<"===CAUTION===";
    cout<<"\n THE FIRST POSITION IN ARRAY IS 0 AND END WITH N-1 SO IF YOU WANT TO ENTER A POSTION OF ARRAY PLEASE REMEMBER THIS!!!";
    cout<<"\n THANK YOU ><"<<endl;
    input(a,n);
    cout<<"\n ===== FULL ARRAY =====\n";
    output(a,n);
    deletek(a,k,n);
    output(a,n);
    insertx(a,x,n,k);
    output(a,n);
    deleteprime(a,n);
    output(a,n);
    system("pause");
    delete[]a;
}