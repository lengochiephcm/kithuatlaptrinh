#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std ;

int main(){
    int *a;
    int n;
    cout<<"Enter n number' : ";
    cin>>n; 
    a = new int [n];    
    if (!a)
    {
        cout<<"Not Enough Memory";
    exit(0);
    }
    for (int i =0 ; i<n ; i++)
    {
        cout<<"a["<<i<<"]: ";
        cin>>a[i];


    }
    
 delete[]a;
}

