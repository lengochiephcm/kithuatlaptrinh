#include <iostream>

using namespace std;

int f (int n){
    cout<<"\nGia tri N: "<<n;
    if ( n > 0)
    {
        f( n -1 );

    }
    

}
int main()
{
    
    f(5);
}