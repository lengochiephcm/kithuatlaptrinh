#include <iostream>
#include <string>
using namespace std;

struct Student {
    string ID;
    string firstname;
    string lastname;
};

void selectionSortByName(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minI = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].lastname < arr[minI].lastname) {
                minI = j;
            }
        }
        if (minI != i) {
            Student temp = arr[i];
            arr[i] = arr[minI];
            arr[minI] = temp;
        }
    }
}

void input(Student arr[], int n) {
    cout << "Enter student information:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter student #" << i + 1 << ":\n";
        fflush(stdin);
        cout << "ID: ";
        cin >> arr[i].ID;
        fflush(stdin);
        cout << "First name: ";
        getline(cin, arr[i].firstname);
        fflush(stdin);
        cout << "Last name: ";
        cin >> arr[i].lastname;
        fflush(stdin);
    }
}

void output(Student arr[], int n) {
    cout << "---------------------------------" << endl;
    cout << "Sorted list of students by name:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student #" << i + 1 << ":\n";
        cout << "ID: " << arr[i].ID << endl;
        cout << "Full name: " << arr[i].firstname + " " + arr[i].lastname << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student arr[n];
    input(arr, n);

    selectionSortByName(arr, n);

    output(arr, n);

    return 0;
}
