#include <iostream>
using namespace std;
int main()
{
    /*int a = 14;
    int *p;
    p =&a;
    cout<<"Valid of a: "<<a;
    cout<<"\n Address of a: "<<p;*/
    int num1, num2, sum , subtract, product;
    
    int *prt ;
    int *prt1 ;
    prt = &num1;
    prt1 = &num2;
    cout<<"\n Enter number :  \n";

    cin>>num1>>num2;

    sum = *prt + *prt1;
    subtract = *prt - *prt1;
    product = *prt * *prt1;

    cout<<"\nSum of 2 num: "<<sum;;
    cout<<"\n Sub of 2 num: "<<subtract;
    cout<<"\n Product of 2 num: "<<product;
    cout<<"\n";
    system("pause");

    

}
