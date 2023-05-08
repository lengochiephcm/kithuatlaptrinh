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
void inputStudentList(student *&sv, int &n){
    cout<<"\n Nhap so luong sinh vien: ";
    cin>>n;
    sv = new student[n];
    cout<<"\n ===== NHAP THONG TIN SINH VIEN ====";
    for(int i =0 ; i <n ; i ++){
        cout<<"\n\n ====== Sinh vien thu "<<i+1<<"======\n\n";

        cout<<"\nNhap MSSV: ";
        cin>>sv[i].id;
        cout<<"\n Nhap Ho va Ten: ";
        fflush(stdin);
        getline(cin,sv[i].fullname);
        cout<<"\n Nhap ngay thang nam sinh: \n";
        cout<<"Ngay: ";
        cin>>sv[i].born.day;
        cout<<" Thang: ";
        cin>>sv[i].born.month;
        cout<<" Nam:  ";
        cin>>sv[i].born.year;
        do{ 
        cout<<"\n Nhap diem trung binh: ";
        cin>>sv[i].dtb;
        }while(sv[i].dtb > 10.0 || sv[i].dtb < 0.0);   
    
    }
}
void outputStudentList(student *sv, int n){
    cout<<"\n\n\n ========== DANH SANH SINH VIEN ========== \n\n\n";
    for(int i =0; i < n ; i++){
        cout<<"\n\n ====== Sinh vien thu "<<i+1<<"======\n\n";
        cout<<"\n MSSV: "<<sv[i].id;
        cout<<"\n Ho va Ten: "<<sv[i].fullname;
        cout<<"\n Ngay thang nam sinh: "<<sv[i].born.day;
        cout<<". "<<sv[i].born.month;
        cout<<". "<<sv[i].born.year;
        cout<<"\n Diem trung binh: "<<sv[i].dtb;
    }
}
void addNewStudent(student *sv, int &n){
    n = n+1;
    cout<<"\n Nhap thong tin sinh vien moi: ";
    cout<<"\nNhap MSSV: ";
        cin>>sv[n-1].id;
        cout<<"\n Nhap Ho va Ten: ";
        getline(cin,sv[n-1].fullname);
        cout<<"\n Nhap ngay thang nam sinh: ";
        cin>>sv[n-1].born.day;
        cout<<"\ ";
        cin>>sv[n-1].born.month;
        cout<<"\ ";
        cin>>sv[n-1].born.year;
        cout<<"\n Nhap diem trung binh: ";
        cin>>sv[n-1].dtb;
}
void changeStudentInformation(student *sv, int n){
    int k,j;
    cout<<"\n Nhap MSSV can sua thong tin: ";
    cin>>k;
    for(int i = 0; i < n ; i++){
        if(sv[i].id == k){
            cout<<"\n ===== BANG TUY CHON CHINH SUA THONG TIN =====";
            cout<<"\n 1. Ho ten";
            cout<<"\n 2. Ngay sinh: ";
            cout<<"\n 3. Diem trung binh: ";
            cout<<"\n Nhap tuy chon: ";
            cin>>j;
            switch(j){
                case 1: 
                cout<<"\n Nhap lai ho va ten: ";
                getline(cin, sv[i].fullname);
                break;
                case 2: 
                cout<<"\n Nhap lai ngay sinh: ";
                cin>>sv[i].born.day;
                cout<<" . ";
                cin>>sv[i].born.month;
                cout<<" . ";
                cin>>sv[i].born.year;
                break;
                case 3: 
                cout<<"\n Nhap lai diem trung binh: ";
                cin>>sv[i].dtb;
                default: 
                cout<<"\n Vui long nhap lai tuy chon : ";
                cin>>j;

            }
        }
        else {
            cout<<"\n Nhap lai MSSV: ";
            cin>>k;
        }
    }
}
void menuStudent(student *sv, int n){
    int k;
    cout<<"\n\n ======= BANG TUY CHON ======= \n\n";
    cout<<"\n 1. Them sinh vien.";
    cout<<"\n 2. Hien thi danh sach sinh vien.";
    cout<<"\n 3. Tuy chinh thong tin sinh vien.";
    cout<<"\n\nNhap tien ich:  ";
    cin>>k;
    switch(k){
        case 1 :
        addNewStudent(sv, n);
        break;

        case 2:
        outputStudentList(sv,n);

        break;

        case 3: 
        changeStudentInformation(sv,n);
        break;
    }
}
int main(){
    student *sv ;
    int n;
    inputStudentList(sv,n);
    menuStudent(sv,n);
}