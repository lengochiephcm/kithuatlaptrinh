#include <iostream>
#include <string>

using namespace std;

void Input (string &s, string &x)
{
    cout<<"Enter string S:"; getline (cin,s);
    cout<<endl;
    cout<<"Enter string x:"; getline (cin,x);
}

bool A (string s, string x)
{
    int n = s.length();
    int m = x.length();
    int k;
    for (int i = 0; i <= n - m; i++) {
        if (s[i] == x[0]) {
            
            int j = 1;
            while (j < m && s[i+j] == x[j]) {
                j++;
            }
            if (j == m) {
                return 1;
            }
        }
    }

    return -1;

}

void B (string s, string x)
{
    cout<<"=====B====="<<endl;
    int count = 0;
    int n = s.length();
    int m = x.length();
    int step = m; 

    for (int i = 0; i <= n - m; i += step) {
        string sub_s = " ";
        for (int j = i; j < i + m; j++) {
            sub_s += s[j];
        }
        if (sub_s == x) {
            count++;
        }
    }

    cout << count+1 << endl;
}

void output (string s, string x)
{
    cout <<"=====A====="<<endl;
    if (A(s,x)== 1)
        {
            cout<<"\nChuoi X thuoc S"<<endl;
        }else cout<<"\nChuoi X khong thuoc S"<<endl;
}

int main ()
{
    string s,x;
    Input (s,x);
   
    output (s,x);
    B(s,x);
    return 0;
}