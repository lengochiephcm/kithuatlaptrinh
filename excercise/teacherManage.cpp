#include <iostream>
#include <string>
using namespace std;
typedef struct student{
    string fullname;
    float avr,id;
}student;
void enterSubject(){
    int s;
    string major, subject;
    cout<<"\n\n";
    cout<<"\n Enter Subject id: ";
    cin>>s;
    cout<<"\n Subject: ";
    fflush(stdin);
    getline(cin,subject);
    cout<<"\n Major: "; 
    fflush(stdin);
    getline(cin,major);

}
student studentList(){
    student s;
    cout<<"\n Enter name: ";
    fflush(stdin);
    getline(cin, s.fullname);
    cout<<"\n Enter id: ";
    cin>>s.id;
    cout<<"\n Enter avr: ";
    cin>>s.avr;
    return s;
}
void enterStudentList(student **&s, int &m,int &n){
    cout<<"\n==============Enter Student List==============\n";
    cout<<"\n Enter number of class: ";
    cin>>m;
    cout<<"\n Enter number of student: ";
    cin>>n;
    cout<<"\n----------------------------------------------\n";
    for(int i =0; i <m ; i++){
        for(int j =0; j <n; j ++){
            cout<<"\nClass  "<<i+1<<": \n";
            s[i][j] = studentList();
        }
    }
}
void printOutStudentList(student **s, int m, int n){
    cout<<"\n==============Student List==============\n";
    for(int i =0; i <m ; i ++){
        for(int j  =0 ; j <n ; j++){
            cout<<"\n Class "<<i+1<<": ";
            cout<<"\t"<<s[i][j].fullname<<": ";
            cout<<"\t"<<s[i][j].id<<": ";
            cout<<"\t"<<s[i][j].avr<<": ";
        }
    }
} 
void deleteStudent(student **s, int n , int m){
    int c,d;
    cout<<"\n==============DeleteStudent==============\n";
    cout<<"\nEnter class of student: ";
    cin>>c;
    cout<<"\n Enter id of student need to delete: ";
    cin>>d;
    if(c > m || c < 1){
        cout<<"\nInvalid value";
        
    }
    else {
    for(int j =0; j <n; j++){
        if(s[c-1][j].id == d ){
            s[c-1][j] = s[c-1][j+1];
        }
        else if(s[c-1][j].id!= d){
            cout<<"\n Invalid value ";
            break;
        }
    }
    n--;
    }
}
void editStudentList(student**&s,int n , int m){
    cout<<"\n==============EditStudentList==============\n";
    int id,c;
    cout<<"\n Enter class of student: ";
    cin>>c;
    cout<<"\n Enter id's student: ";
    cin>>id;
    if(c > m || c < 1){
        cout<<"\nInvalid value";
    }
    else{
        for(int j= 0; j <n ; j++){
            if(s[c-1][j].id == id)
            {
                cout<<"\n Reenter name of student: ";
                fflush(stdin);
                getline(cin,s[c-1][j].fullname);
            }
            else{
                cout<<"\n Invalid value";
                break;

            }
        }
    }
}
void menuSelection(student **s, int n , int m){
    cout<<"\n==============Menu Selection==============\n";
    int sl;
    while(true){
    cout<<"\n 1. Enter information of Subject.";
    cout<<"\n 2. Enter Student list.";
    cout<<"\n 3. Print out   list of Class.";
    cout<<"\n 4. Delete a student.";
    cout<<"\n 5. Change Student's information.";
    cout<<"\n Enter selection: ";
    cin>>sl;
    switch(sl){
        case 1:
        enterSubject();
        break;
        case 2: 
        enterStudentList(s,m,n);
        break;
        case 3:
        printOutStudentList(s,m,n);
        break;
        case 4: 
        deleteStudent(s,n,m);
        break;
        case 5:
        editStudentList(s,n,m);
        break;

    }}
}
int main(){
    int n,m;
    student **s;
    menuSelection(s,n,m);

}
