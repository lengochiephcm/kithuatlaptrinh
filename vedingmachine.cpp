#include <iostream>
#include <math.h>
using namespace std;

void input (int &n, int &i , int &k)

{   
    string icon;
    icon [1] = 3;
    icon [2]=16;
    icon [3]=17;   
    int money = 0;
    int refund ;
    
    string order;   
    
    cout<<"\n\nCHOOSE YOUR ORDER ( PRESS THE NUMBER BOTTOM ): ";
    cin>>n; 
    cout<<"\n\nENTER YOUR QUANTITY: ";
    cin>>i;
    cout<<"\n\nINSERT YOUR MONEY : ";
    cin>>k;
    
    switch (n)
    {
        case 1:
                order = "COKE ";
                money = i*15000;
        break;
        case 2:
                order = "MILK ";
                money = i*15000;
        break;
        case 3:
                order = "SPRITE ";
                money = i*15000;
        break;
        case 4:
                order = "WATER ";
                money = i*10000;
        break;
        case 5:
                order = "LEMONE ADE  ";
                money = i*20000;
        break;
        case 6:
                order = "TEA ";
                money = i*10000;
        break;
        default:
        cout<<"INVALID NUMBER. PLEASE TRY AGAIN !!!";
        break;
        
    }
        if ( money > k )
        {
            cout<<"\nDO NOT ENOUGH MONEY TO PROCEED THIS TRANSACTION!!";
            cout<<"\nPLEASE RECEVIE YOUR MONEY. THANK YOU."<<icon[1];

        }

    
    else 
    {
        cout<<"\nYOUR ORDER : "<<i<<"-"<<order;
        cout<<"\nTOTAL : "<<money;
        refund = k- money;
        cout<<"\nREFUND : "<<refund;
    }
}
int main ()
{ 
    string icon;
    icon [2]=16;
    icon [3]=17;
    int i, n,k;
    cout<<"\t\t\t\t VENDING MACHINE \t\t\t\n";
    cout<<icon[2]<<"\t\t1. COKE - 15.000\t\t 2. MILK - 15.000\n";
    cout<<icon[2]<<"\t\t3. SPRITE- 15.000\t\t 4. WATER - 10.000\n";
    cout<<icon[2]<<"\t\t5. LEMONE ADE - 20.000\t\t 6. TEA - 10.000\n";
    input(k,i,n);
    return 0;

}
