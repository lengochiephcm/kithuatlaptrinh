 #include <iostream>
 #include<math.h>
using namespace std;


int intputn(int &n){
    while(n < 1|| n>1000){
        cout<<"Nhap gia tri cua n: ";
        cin>>n;
    }
}
int inputArray(int a[], int n){
    if( n == 0 )
    return 0;
    inputArray(a, n-1);
    cout<<"\n a["<<n-1<<"]: ";
    cin>>a[n-1];
}
int sum(int a[], int n){
    if( n == 0)
    return 0;
    int s ;
    s = sum(a, n-1);
    s+= a[n-1];
    return s;

}
int highestnum(int a[], int n){
    if( n == 1 ) return a[0];
    int temp ;
    temp = highestnum(a, n-1);
    if(a[n-1 ]> temp )
    temp = a[n-1];
    return temp;
}
int prime(int a[],int n){
    if(n == 0 )
    return 0;
    else if(a[n-1]>2) {

        if (a[n-1]%2==0){
        return 0;
        }
            for(int j =3 ; j <= sqrt((float)a[n-1]);j +=2){
            if(a[n-1]%j == 0)
            
            return 0;
            }
            return 1;
        }
        return prime (a,n-1);
}
        
    
    
int count(int a[], int n){
    int count1= 0;
    for(int i = 0; i<= n; i++){
        if(prime(a,i) == 1){
        count1++;
        }
    }
    
    return count1;

}




int output(int a[], int n){
    if(n == 0)
    return 0;
    output(a,n-1);
    cout<<"\n a["<<n-1<<"]: "<<a[n-1];
    cout<<endl;
}

int main()
{
    int n ;
    int a[1000];
    intputn(n);
    inputArray(a,n);
    output(a,n);
    cout<<"\n Sum of Array: "<<sum(a,n);
    cout<<"\n Highest number in the array: "<<highestnum(a,n);
    cout<<"\n Prime number: "<<count(a,n);
    
    return 0;


}