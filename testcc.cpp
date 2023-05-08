#include <iostream>
#include <string>
using namespace std;

struct restaurant
{
    string name;
    int price;
    int number_of_dishes;
};
typedef restaurant RES;
struct information
{
    string ID;
    string name;
    int salary;
};
typedef information inf;
void input(RES*& r, int& n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Name of dish " << i + 1 << ": ";
        cin.ignore();
        getline(cin, r[i].name);
        cout << "Price of dish " << i + 1 << ": ";
        cin >> r[i].price;
        cout << "Available quantity of dish " << i + 1 << ": ";
        cin >> r[i].number_of_dishes;
    }
}

void printlist(RES* r, int n)
{
    cout << "List of dishes:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". " << r[i].name << " - Price: " << r[i].price << " - Available quantity: " << r[i].number_of_dishes << endl;
    }
}

void select(RES* r, int n)
{
    int choice, quantity, total = 0;
    char again;
    do
    {
        printlist(r, n);
        cout << "-------------------------------";
        cout << endl;
        cout << "Enter the number of the dish you want to order: ";
        cin >> choice;
        if (choice < 1 || choice > n)
        {
            cout << "Invalid choice." << endl;
            continue;
        }
        cout << "Enter the quantity you want to order (available: " << r[choice - 1].number_of_dishes << "): ";
        cin >> quantity;
        if (quantity < 1 || quantity > r[choice - 1].number_of_dishes)
        {
            cout << "Invalid quantity." << endl;
            continue;
        }
        total += r[choice - 1].price * quantity;
        r[choice - 1].number_of_dishes -= quantity;
        cout << "Do you want to order another dish? (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
    cout << "Total amount to pay: " << total << " VND" << endl;
    cout << "Thank you for your order!" << endl;
}
void inputemployee(inf*& s,int z)
{
    for (int i = 0; i < z; i++)
    {
        cout << "ID of employee " << i + 1 << ": ";
        cin.ignore();
        getline(cin, s[i].ID);
        cout << "Name of employee " << i + 1 << ": ";
        cin.ignore();
        getline(cin, s[i].name);
        cout << "Salary of employee " << i + 1 << ": ";
        cin >> s[i].salary;
    }
}
void outputemployee(inf* s,int z)
{
    for (int i = 0; i < z; i++)
    {
        cout << "ID of employee " << i + 1 << ": " << s[i].ID << endl;
        cout << "Name of employee " << i + 1 << ": " << s[i].name << endl;
        cout << "Salary of employee " << i + 1 << ": "<<s[i].salary<<endl;
    }
}
int main()
{
    int n,z;
    cout << "Enter the number of dishes: ";
    cin >> n;
    RES* r = new RES[n];
    input(r, n);
    cout << "-------------------------------";
    cout << endl;
    select(r, n);
    cout << "-------------------------------";
    cout << endl;
    cout << "Enter the number of employee: ";
    cin >> z;
    inf* s = new inf[z];
    inputemployee(s, z);
    cout << "-----------------------------";
    cout << endl;
    outputemployee(s, z);
    delete[] r;
    return 0;
}
