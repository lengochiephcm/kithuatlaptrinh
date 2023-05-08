#include <iostream>
using namespace std;

int main(){
    int array[4] = {1,5,6,9};
    cout<<"Value of array: "<<array;
    cout<<"\n Address of array: "<<&array;
    cout<<"\n Element 0: "<<&array[0];
    int *ptr = array;
    cout<<"\n"<<*ptr;
    cout<<endl<<ptr;
    
}