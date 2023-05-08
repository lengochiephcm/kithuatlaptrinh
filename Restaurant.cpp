#include <iostream>
#include<string>
using namespace std;
typedef struct{
    string dishes;
    int price,quanlity ;

}menu;
typedef struct{
    int id;
    string fullname;
    int salary;
}employee;

void resMenu(menu *&m, int &n){
    m = new menu[n];
    cout<<"\n Enter the amount of dishes : ";
    cin>>n;
    cout<<"\n \n \t==========ENTER DISHES DETAILS==========\t\n\n";
         for(int i =0 ; i < n ; i++){
        cout<<"\n Name of dishes: ";
        cin.ignore();
        getline(cin,m[i].dishes);
        cout<<"\n Price: ";
        cin>>m[i].price;
        cout<<"\n Leftover: ";
        cin>>m[i].quanlity;
    }

}
void printOutOfMenu(menu *m, int n){
    cout<<"\n\t=========HERE'S YOUR MENU=========\t\n";
    for(int i =0 ; i < n ; i++){
        cout<<i+1<<". "<<m[i].dishes;
        cout<<"\t"<<m[i].price<<" VND";
        cout<<"\t Leftover: "<<m[i].quanlity<<endl;


    }
}

void customerChose(menu *m, int n)
{
    int choice, quantity, total = 0;
    char again;
    do
    {
        printOutOfMenu(m, n);
        cout << "-------------------------------";
        cout << endl;
        cout << "Enter the number of the dish you want to order: ";
        cin >> choice;
        if (choice < 1 || choice > n)
        {
            cout << "Invalid choice." << endl;
            continue;
        }
        cout << "Enter the quantity you want to order (available: " << m[choice - 1].quanlity << "): ";
        cin >> quantity;
        if (quantity < 1 || quantity > m[choice - 1].quanlity)
        {
            cout << "Invalid quantity." << endl;
            continue;
        }
        total += m[choice - 1].price * quantity;
        m[choice - 1].quanlity -= quantity;
        cout << "Do you want to order another dish? (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
    cout << "Total amount to pay: " << total << " VND" << endl;
    cout << "Thank you for your order!" << endl;
}
void outputEmployee(employee *e,int j){
    cout<<"\n ======= LIST EMPLOYEEE ======\n\n";

    for(int i =0 ; i<j ;i++){
        cout<<"\n Employee"<<i+1<<": \n";
        cout<<"\nId: "<<e[i].id;
        cout<<"\n Enter full name: "<<e[i].fullname;
        cout<<"\nEnter salary: "<<e[i].salary;
    }
}
int main(){
    menu *m;
    int n,j;
    employee *e;
    resMenu(m,n);
    customerChose(m,n);
    outputEmployee(e,j);
    


}