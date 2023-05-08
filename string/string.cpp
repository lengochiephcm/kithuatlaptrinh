#include <iostream>
#include<string.h>
using namespace std;

int countChar(string s){
    int count =0;
     for(int i = 0; i <s.length(); i++){
        if(s[i] != ' '){
            count++;
        }
    }
    return count;
}
void hoanVi(char &x, char &y){
    int temp = x;
    x = y;
    y= temp;
}
void reverse(char s[]){
    int length = strlen(s);
    for(int i =0 ; i <length/2; i ++){
        hoanVi(s[i],s[length - i -1]);
    }
}
/*int countWord(char s){
    int length = strlen(s);
    int count = 0;
    for(int i = 0 ; i < length; i ++){
        if(s[i] == ' ' && s[i+1] != ' '){
            
            count++;
        }
    return count;
}
}*/
int compare2String(char s1[], char s2[]){
    int result =0;
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    size_t min = len1>len2 ? len2 : len1;
    for(int i = 0; i <min ; i++){
        result = s1[i]- s2[i];
        if(result != 0)
        break;

    }
    if(result > 0)
    cout<<"\n Chuoi 1 lon hon chuoi 2";
    else if(result < 0)
    cout<<"\n Chuoi 1 nho hon chuoi 2";
    else if( result == 0)
    cout<<"\n Chuoi 1 bang chuoi 2";


}
//int copy2String

int main(){
    char s[1000];
    char s1[100];
    char s2 [100];
    cout<<"Nhap chuoi 1: ";
    gets(s1);
    cout<<"\n Nhap chuoi 2: ";
    gets(s2);
    /*cout <<"Nhap chuoi: ";
    gets(s);
    cout<<"\nChuoi vua nhap: "<<s;
    cout<<"\n So ki tu trong chuoi: "<<countChar(s);
    reverse(s);
    cout<<"\n Chuoi dao nguoc: "<<s;
    //cout<<"\n So tu trong chuoi: "<<countWord(s);*/
    cout<<"\n So sanh chuoi 1 va 2: "<<compare2String(s1,s2);
    system("pause");


    


}