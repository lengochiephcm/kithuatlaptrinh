#include <iostream>
using namespace std;


typedef struct{
    int day, month, year;
}date;
typedef struct{
    int id;
    string fullname;
    date born;
    float dtb;

}student;
void menuStudent(student *sv, int &n){
    cout<<"\n Nhap so luong sinh vien: ";
    cin>>n;
    sv = new student[n];
    cout<<"\n ===== NHAP THONG TIN SINH VIEN ====";
    for(int i =0 ; i <n ; i ++){
        cout<<"\n\n ====== Sinh vien thu"<<i+1<<"======\n\n";

        cout<<"\nNhap MSSV: ";
        cin>>sv[i].id;
        cout<<"\n Nhap Ho va Ten: ";
        getline(cin,sv[i].fullname);
        cout<<"\n Nhap ngay thang nam sinh: ";
        cin>>sv[i].born;
        cout<<"\n Nhap diem trung binh: ";
        cin>>sv[i].dtb;
    }

}
int main(){
    student *sv ;

}