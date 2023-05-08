#include <iostream>
using namespace std;

typedef struct{
    int id;
    string name;

}Student;

Student enter1_student();
void enter2_student(Student &);
void enter3_student(Student *);
void print_student(Student);

Student enter1_student(){
    Student st;
    st.id = 10;
    st.name = "Le Ngoc Hiep";
    return st;
}
void enter2_student(Student &s){
    s.id = 15;
    s.name = "Vo Nguyen Bao Thanh";
    
}
void enter3_student(Student *s){
    s->id = 4;
    (*s).name = "Le Tran Tuan Dat";
}
void print_student(Student s){
    cout<<"\nID: "<<s.id<<"\t Name: "<<s.name;


}
int main(){
    Student s;
    s = enter1_student();
    print_student(s);
    enter2_student(s);
    print_student(s);
    enter3_student(&s);
    print_student(s);
}