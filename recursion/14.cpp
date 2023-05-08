#include<iostream>
using namespace std;

double fn(int n){
    if ( n  ==2 || n ==1)
    return 1;
    return fn(n-1)+fn(n-2);

}
double sn(int n){
    if ( n==1 )return 1/(1+1.0);
    else return sn(n-1)+ n/(fn(n)+1.0);
}
double fc(int n){
    double f1 = 1 , f2=1 , fn;
    if ( n ==1 || n ==2){
        return 1;

    }
    for( int i =3 ; i <= n ; i++){
        fn = f1+ f2;
        f1= f2;
        f2 =fn;
    }
    return fn;
}
double sc(int n){
    double s = 0;
    for(int i  =1 ; i <=n ; i++){
        s= s+ (double)i/(1+fc(i));
    }
    return s;
}
int main(){
    int n;
    do{
        cout<<"Nhap n: ";
        cin>>n;
        if ( n <1 ){
            cout<<"\n VUi long nhap lai: ";
        
        }
    }
        while(n<1);
        cout<<"\n S5: "<<fn(5);
        cout<<"\n fn : "<<fn(n);
        cout<<"\n sn: "<<sn(n);
        cout<<"\n Khong dung de quy.";
        cout<<"\n fn: "<<fc(n);
        cout<<"\n sn: "<<sc(n);

    return 0;
}