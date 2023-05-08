#include <iostream>
#include <string>
using namespace std;
void input(string &s){
    cout<<"Nhap chuoi: ";
    getline(cin,s);
    cout<<"\n Chuoi vua nhap: "<<s;

}
int countUpperCase(string s){
    int count =0;
    for(int i = 0; i < s.length(); i ++){
        if(isupper(s[i])){
            count ++;
        }
    }
    return count;

}
int countLowerCase(string s){
    int count =0;
    for(int i = 0; i < s.length(); i ++){
        if(islower(s[i])){
            count ++;
        }
    }
    return count;
}
int numOfAsciiCode(string s){
    char k;
    cout<<"\n\n B> \n";
    cout<<"\n Ma ascii code cua tung ki tu: ";
    for(int i =0; i <s.length() ; i++){
        if(s[i]!= '\0'){
        k = s[i];
        cout<<"\n"<<int(k);
        }
    }
}
int convertUpper(string s){
    cout<<"\n\n C>\n";
    for(int i =0; i < s.length(); i ++){
        if(s[i]!= '\0')
        {
            if(s[0] >= 65 && s[0] <= 90 )
            s[0] = s[0];
            else if(s[0] >= 97 && s[0] <= 122 )
                s[0] = s[0] - 32 ;
            }
            if(s[i+1] >= 65 && s[i+1] <= 90){
                s[i+1] = s[i+1] + 32;
            }
            else if(s[i+1] >= 97 && s[i+1] <= 122)
            s[i+1] = s[i+1];

        }
         cout<<"\n Doi tu dau tien in hoa: "<<s;
    }
void countLetterPerWord(string str)
{
    cout<<"\n \n D> \n";
    int count =0;
    int len = str.length();
    int p = 0;
    for (int i=0; i <len+1; i++)
    {
        if (str[i] == '\0' || str[i] == ' ') {
            for (int j = p; j < p + count; j++){
                cout << str[j];
            }
            cout << ": " << count << " letters." << endl;
            p = p + count + 1;
            count = 0;
        }
        else {
            count++;
        }
    }
}
void countWordandLetter(string s){
    cout<<"\n\n E>\n";
    int count =0;
    int letter;
    for(int i =0; i <s.length(); i++){
        if(s[i] == ' ' && s[i] != '\0'){
            count++;
        }
    }
    cout<<endl;
    cout<<"\n So tu trong chuoi: "<<count+1;

    
   

}

void findFirstandLast(string s){
    cout<<"\n\n F> \n";
    cout<<"\nTu dau tien ben trai va ben phai lan luot la: "<<endl;
    int len = s.length();
    int p = 0;
    for (int i=0; i <len+1; i++)
    {   
        if (s[i] == '\0' || s[i] == ' ')
            {
                break;
            } else cout << s[i];
            
    }
    cout << endl;    
    
    
    for (int j=len; j >=0; j--)
    {
        if ( s[j] == ' ')
            {
                p=j+1;
                break;
            } else if (j==0) 
                {
                p=j;     
                break;
                }
    }
    for (int i=p; i<=len;i++)
                    {
                        cout<<s[i];
                    }

}
int main(){
    
    string s;
    input(s);
     
     cout<<"\n \n A> ";
     cout <<"\n In hoa: "<<countUpperCase(s);
     cout<<"\n Viet thuong: "<<countLowerCase(s);
     cout<<numOfAsciiCode(s);
    convertUpper(s);
    countLetterPerWord(s);
     countWordandLetter(s);
     findFirstandLast(s);
    system("pause");
}