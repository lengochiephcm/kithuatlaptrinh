#include <iostream>
#include <cstdlib>
#include<math.h>
using namespace std;
int inputArray(int *&a, int &n){
    cout<<"Nhap gia tri cua mang: ";
    cin>>n;
    a = new int[n];
    
    for(int i =0 ; i < n ; i++){
        cout<<"\n a["<<i<<"]: ";
        cin>>*(a+i);
    }
}

int sum(int *a , int n){
    int s =0 ;
    for(int i=0; i < n; i++){
        s += *(a+i);
    }
    return s;     
}
int evennum(int*a, int n){
    int chan = 0;
    int le =0;
    for(int i =0; i<n; i++){
        if(*(a+i)%2 == 0){
            chan++;
        }
        else
        le++;
    }
    cout<<"\n So luong so chan la: "<<chan;

    cout<<"\n So luong so le la: "<<le;
}

int max(int *a, int n){
    int max = *a;
    for(int i =0; i<n ; i++){
    
        if(*(a+i) > max)
        max = *(a+i);
    }
    return max;

}
int fisrtvalue(int *a, int &n)
{
    for(int i =0 ; i < n; i++){
        *(a+i)= *(a+i+1);
        
    }
    n--;
    output(a,n);
}
int output(int*a, int n){
    for(int i  = 0 ; i < n; i++){
        cout<<"\na ["<<i<<"]: "<<*(a+i);
    }
}
int prime(int n){
    if(n <2)
    return 0;
    else if( n ==2 )
    return 1;
    else if( n>2 )
    {
        if ( n % 2 == 0)
        {
            return 0;
        }
        for(int i  =2 ; i <= sqrt((float)(n)); i++){
            if( n % 2== 0)
            return 0;
        }
    }
    return 1;
         
}
 int count(int *a, int n){
    int count1= 0;
    for(int i =0 ; i <n ; i++){
        if (prime(*(a+i))==1 )
        count1 ++;
    }
    return count1;
}
int main(){
    int n;
    int*a;
    inputArray(a,n);
    output(a,n);
    cout<<"\n Tong cac gia tri trong mang: "<<sum(a,n);
    cout<<"\n So nguyen to trong mang: "<<count(a,n);
    evennum(a,n);
    cout<<"\n So lon nhat: "<<max(a,n);
    fisrtvalue(a,n);
    
    delete[]a;
    system("pause");
    
}

