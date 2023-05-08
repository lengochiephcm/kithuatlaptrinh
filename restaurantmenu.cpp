#include <iostream>
using namespace std;
#include <string>
typedef struct{
    string dishes;
    int quanlity, price;

}menu;
typedef struct{
    int id,salary;
    string fullname;

}employee;
void employeeIn4(employee *&e, int &j){
    cout<<"\n------------------------------------------------------------\n";
    cout<<"\n Enter an amount of employee: ";
    cin>>j;
    cout<<"\n -----------------------------------\n";
    cout<<"\n =========ENTER LIST OF EMPLOYEE=========\n";

    for(int i =0 ; i < j ; i++){
        cout<<"\nNumber "<<i+1;
        cout<<"\n Enter fullname: ";
        fflush(stdin);
        getline(cin,e[i].fullname);
        cout<<"\n Enter id: ";
        cin>>e[i].id;
        cout<<"\n Enter salary: ";
        cin>>e[i].salary;
    }
}
void printOutList(employee *e, int j){
    cout<<"\n---------------------------------\n";
    cout<<"\n======= LIST OF EMPLOYEE =======";
    for(int i =0 ; i < j ; i++){
        cout<<"\n Enter id: "<<e[i].id;
        cout<<"\n Enter fullname: "<<e[i].fullname;
        cout<<"\n Enter salary: "<<e[i].salary;
    }
}
void resMenu(menu *&m, int &n){
    cout<<"\nEnter an amount of dishes: ";
    cin>>n;
    m= new menu[n];
    cout<<"\n\n\t============ENTER DISHES DETAILS============\t\n\n";
    for(int i = 0; i < n ; i++){
        cout<<"\nDish#"<<i+1;
        cout<<"\n Enter name dishes : ";
        fflush(stdin);
        getline(cin,m[i].dishes);
        cout<<"\n Enter price: ";
        cin>>m[i].price;
        cout<<"\n Enter leftover: ";
        cin>>m[i].quanlity;

    }
}
void printOutMenu(menu *m, int n){
    cout<<"\n ====================== RESTAURANT MENU ======================\n ";
    for(int i = 0; i < n ;i ++){
        cout<<"\n"<<i+1<<"Dishes : "<<m[i].dishes;
        cout<<"\t"<<m[i].price<<" VND";
        cout<<"\t Leftover: "<<m[i].quanlity;

    }
}
void customerOrder(menu *m, int n){
    cout<<"\n-----------------------------------------------------------\n";
    int choose, quanlity1 = 0;
    int recall,count, total = 0;
    printOutMenu(m,n);
    do{
        cout<<"\nSelect your meal:  ";
        cin>>choose;
        count ++;
        if(choose < 1 || choose > m[choose -1 ].quanlity){
            cout<<"\n Invaild value";
            cout<<"\n Please reenter your selection";
            continue;
        }
        cout<<"\n Enter quanlity ( LeftOver : "<<m[choose -1].quanlity<<"): ";
        cin>>quanlity1;
        if(quanlity1 < 0 || quanlity1 > m[choose-1].quanlity){
            while(quanlity1 < 0 || quanlity1 > m[choose-1].quanlity)
            {
                cout<<"\n Invailid value!!";
            }
        }
        total += m[choose-1].price *quanlity1;
        m[choose-1].quanlity -= quanlity1;
        cout<<"\n---------------------------------------------------------\n";
        cout<<"\n Do you want to reorder: ";
        cout<<"\t1.YES \t\t 2.NO ";
        cout<<"\n Enter your selection: ";
        cin>>recall;
        if(recall > 2 || recall < 1){
            while(recall > 2 || recall < 1){
                cout<<"\n Please enter your selection again: ";
                cin>>recall;
            }
        }
    }while(recall == 1);
    cout<<"\n\n =========================\n\n";
    cout<<"\n ========= RECEIPT =========\n";
    cout<<"\n TOTAL: "<<total;
}
int main(){
    menu *m;
    int n,j;
    employee *e;
    resMenu(m,n);
    customerOrder(m,n);
    employeeIn4(e,j);
    printOutList(e,j);
}