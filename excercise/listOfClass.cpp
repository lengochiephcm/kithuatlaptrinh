#include <iostream>
#include <string>
using namespace std;
typedef struct student{
    string fullname,id;
    float avr;

}student;
void enterSubject(int &id, string&subject, string&major);
student studentList();
void enterStudentList(student**&s, int &m, int &n);
void printOutOfStudentList(student**s, int m, int n,int id, string subject, string major);
void adjustStudent(student**s, int m , int n);
void deleteStudent(student**s, int m , int n);
void programMenu();
int main(){
    student**s;
    programMenu();
    return 0;
}
void enterSubject(int &id, string&subject, string&major){
    cout<<"\n\n-------------------Enter Subject's Detail-------------------\n";
    cout<<"\n Subject: ";
    fflush(stdin);
    getline(cin,subject);
    cout<<"\nId's Subject: ";
    cin>>id;
    cout<<"\n Major: ";
    fflush(stdin);
    getline(cin,major);
}
student studentList(){
    student s;
    cout<<"Enter name: ";
    fflush(stdin);
    getline(cin,s.fullname);
    cout<<"\n Id's student: ";
    cin>>s.id;
    do{
    cout<<"\n Grade avr point (Please enter from 0.0 - 10.0) : ";
    cin>>s.avr;
    }while(s.avr > 10.0 || s.avr < 0.0 );
    cout<<endl;
    return s;
}
void enterStudentList(student**&s, int &m, int &n){
    cout<<"\n\n------------------------Student List------------------------\n";
    cout<<"\n Enter number of class:  ";
    cin>>m;
    cout<<"\n Enter number of Student:  ";
    cin>>n;
    s = new student*[m];
    for(int i =0 ; i < m ; i ++){
        s[i] = new student[n];
        for(int j =0; j < n ; j ++){
            cout<<"\n Class "<<i+1<<" :";
            cout<<"\n Student "<<j+1<<": ";
            s[i][j] = studentList();
        }
    }
}
void printOutOfStudentList(student**s, int m, int n,int id, string subject, string major){
    cout<<"\n\n-----------------------List Of Class-----------------------\n";
    cout<<"\n Id' subject: "<<id;
    cout<<".\t\t Subject: "<<subject; 
    cout<<".\t\t Major: "<<major;
    cout<<"\n List of class: ";
    for(int i =0 ; i < m ; i ++){
        for(int j =0; j < n ; j ++){
            cout<<"\n#Class  "<<i+1<<": ";
            cout<<"\nID: "<<s[i][j].id;
            cout<<"\t||\tFull name: "<<s[i][j].fullname;
            cout<<"\t||\t Average: "<<s[i][j].avr;
        }}
}
void deleteStudent(student**s, int m , int n){
    cout<<"\n-----------------------Delete student-----------------------\n";
    string id;
    cout<<"\n Enter a delete id's student: ";
    cin>>id;
    for(int i =0 ; i < m ; i ++){
        for(int j =0; j < n ; j ++){
            if(s[i][j].id == id){
                cout<<"\nRemoting sucessfull";
                s[i][j] = s[i][j+1];
            }
            return;
        }
        
    }
   
    cout<<"\n ID NOT MATCH.";
}
void adjustStudent(student**s, int m , int n){
    cout<<"\n--------------------Adjust Information--------------------\n";
    string id;
    cout<<"\n Enter adjusting student id: ";
    cin>>id;
     for(int i =0 ; i < m ; i ++){
        for(int j =0; j < n ; j ++){
            if(s[i][j].id == id){
                cout<<"\n Full name: ";
                fflush(stdin);
                getline(cin,s[i][j].fullname);
                cout<<"\n Student id: ";
                cin>>s[i][j].id;
                cout<<"\n Average point: ";
                cin>>s[i][j].avr;
            }
            return;
        }}
        cout<<"\n ID NOT MATCH.....";
}
void programMenu(){
    student **s;
    int m,n,id,sl;
    string subject, major;
    cout<<"\n\n-----------------Teacher Management Program-----------------\n";
    while(true){
    cout<<"\n 1.Enter subject information.";
    cout<<"\n 2. Enter list of student each class.";
    cout<<"\n 3. Print out list of class.";
    cout<<"\n 4. Delete a student.";
    cout<<"\n 5. Adjusting student's information.";
    cout<<"\n Enter your selection: ";cin>>sl;
    switch(sl){
        case 1: 
        enterSubject(id,subject,major);
        break;
        case 2: 
        enterStudentList(s,m,n);
        break;
        case 3:
        printOutOfStudentList(s,m,n,id,subject,major);
        break;
        case 4: 
        deleteStudent(s,m,n);
        break;
        case 5: 
        adjustStudent(s,m,n);
        break;
    }}

}
