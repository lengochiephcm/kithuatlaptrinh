#include <iostream>
using namespace std;
void inAndOuput(string &s, string &s1, string &s2){
    cout<<"\n nhap chuoi s: ";
    getline(cin, s);
    cout<<"\n nhap chuoi s1: ";
    getline(cin, s1);
    cout<<"\n nhap chuoi s2: ";
    getline(cin, s2);
    cout<<"\n chuoi s da nhap: "<<s;
    cout<<"\n chuoi s1 da nhap: "<<s1;
    cout<<"\n chuoi s2 da nhap: "<<s2;
    
}
void deleteletter(string &s){
    int n, p;
    cout<<"\n nhap vi tri can xoa trong chuoi s: ";
    cin>>p;
    cout<<"\n nhap luong can xoa: ";
    cin>>n;
    for(int i =p ; i <s.length(); i++){
        s[i] = s[i+n];
    }
    for(int i = s.length(); i > s.length()-n; i--){
        s[i] = '\0';
    }
    cout<<"\n =====A=====";
    cout<<"\n Chuoi sau khi xoa: "<<s;
}
void insertString2String(string &s, string x)
{
    int p;
    cout<<"\n Nhap vi tri can them s2 vao chuoi s1: ";
    cin>>p;
    int i = 0;
    
    while (i < x.length())
        {
            s += ' '; 
            i++;
        }
    
    for (i = s.length(); i >= (p+x.length()); i--)
        {
            s[i] = s[i-x.length()];
        }
    i = p;
    int j = 0;
    while (j < x.length())
        {
            s[i] = x[j];
            i++;
            j++;
        }
    cout<<"\n\n\n B) ";
    cout<<"\n Chuoi s1 sau khi chen s2 vao: "<<s;
}

int main(){
    string s,s1,s2;
    inAndOuput(s,s1,s2);
    deleteletter(s);
    insertString2String(s1,s2);
}