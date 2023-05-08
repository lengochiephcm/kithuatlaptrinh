#include <iostream>
#include <string>
using namespace std;


typedef struct{
    string hoten;
    int maso;
    float diemcoban, chuyennganh1, chuyennganh2, tongdiem, tong2diem;
}SinhVien;


int nhapSinhvien(SinhVien *sv, int &n){
    for(int i = 0 ; i < n; i++){
    cout<<"\n Nhap thong tin thi sinh "<<i+1<<" : \n";
    fflush(stdin);
    cout<<"Ho va ten: ";
    getline(cin,sv[i].hoten);
    fflush(stdin);
    cout<<"\n Ma so sinh vien: ";
    cin>>sv[i].maso;
    fflush(stdin);
    cout<<"\n Diem co ban : ";
    cin>>sv[i].diemcoban;
    cout<<"\n Diem chuyen nganh 1: ";
    cin>>sv[i].chuyennganh1;
    cout<<"\n Diem chuyen nganh 2: ";
    cin>>sv[i].chuyennganh2;
    sv[i].tongdiem = (sv[i].diemcoban + sv[i].chuyennganh1 + sv[i].chuyennganh2);
    sv[i].tong2diem = sv[i].chuyennganh1+sv[i].chuyennganh2;
    }
}


int xuatthongtin(SinhVien *sv, int n){
    for(int i=0; i < n ; i++){
    cout<<"\n Thong tin sinh vien thu "<<i+1<<": \n";
    cout<<"Ho va ten: "<<sv[i].hoten;
    cout<<"\n Ma so sinh vien: "<<sv[i].maso;
    cout<<"\n Diem co ban : "<<sv[i].diemcoban;
    cout<<"\n Diem chuyen nganh 1: "<<sv[i].chuyennganh1;
    cout<<"\n Diem chuyen nganh 2: "<<sv[i].chuyennganh2;
    cout<<"\n Tong diem 3 mon: "<<sv[i].tongdiem;
    }
}
int nhohon5(SinhVien *sv, int n){
    bool student = true;
    for(int i =0; i <n ; i++){
        if(sv[i].diemcoban < 5 || sv[i].chuyennganh1 < 5 || sv[i].chuyennganh2 < 5){
            if(student){
            
            cout<<"\nSinh vien co diem nho hon 5 : ";
            }
            cout<<"\nSinh vien "<<sv[i].hoten;
        }
        
        if(!student){
            cout<<"\n Khong co sinh vien nao co diem thanh phan nho hon 5!!!";
        }
    }
}
void lonnhat(SinhVien *sv, int n){
    float diemcao = 0;
    SinhVien *t_sv[n];
    int hocsinh = 0;
    for(int i =0; i <n; i++){
        float tongdiem = sv[i].tongdiem; 
        if(tongdiem > diemcao){
            diemcao = tongdiem;
            hocsinh = 0;
            t_sv[hocsinh ]= &sv[i];
            hocsinh++;
        }
        else if(tongdiem == diemcao){
            t_sv[hocsinh] = &sv[i];
            hocsinh++;
        }
    }
    cout<<"\n Cac hoc sinh co diem cao nhat : ";
    for(int i =0; i<n ; i++){
        cout<<"\n Ho ten: "<<t_sv[i]<<"\n Tong diem: "<<t_sv[i];
    }
}
int sapxep(SinhVien*sv,int n){
    for(int i=0; i<n-1; i++){
        for(int j=n-1;j>i;j--){
            if(sv[i].tong2diem < sv[j].tong2diem){
                
                SinhVien tg = sv[i];
                sv[i] = sv[j];
                sv[j] = tg;
            }
        }
    }
    xuatthongtin(sv,n);
}




int main()
{
    int n;
    cout<<"Nhap so luong sinh vien du thi: ";
    cin>>n;
    SinhVien *sv ;
    sv = new SinhVien[n];
    nhapSinhvien(sv,n);
    xuatthongtin(sv,n);
    nhohon5(sv,n);
    lonnhat(sv,n);
    cout<<"\n Danh sach Sinh Vien sau khi sap xep : "<<sapxep(sv,n);
    
    delete[] sv;
    system("pause");
}
