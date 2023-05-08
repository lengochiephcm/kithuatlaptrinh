#include <iostream>
#include <string>

using namespace std;

void ins(string &s1, string s2, int p)
{
    int i = 0;
    while (i < s2.length())
        {
            s1 += ' '; 
            i++;
        }
    
    for (i = s1.length(); i >= (p+s2.length()); i--)
        {
            s1[i] = s1[i-s2.length()];
        }
    i = p;
    int j = 0;
    while (j < s2.length())
        {
            s1[i] = s2[j];
            i++;
            j++;
        }
}

void del(string &s, int l, int p)
{
    for (int i=p; i<s.length(); i++)
        {
            s[i] = s[i+l];
        }
    for (int i=s.length(); i>s.length()-l; i--)
        {
            s[i] = '\0';
        }
}

void input(string &s, string &x, string &y)
{
    cout << "Input the main string(S): ";
    getline(cin,s);
    fflush(stdin);

    cout << "Input the substring need to be replaced(X): ";
    getline(cin,x);
    fflush(stdin);
    
    cout << "Input the substring to replace(Y): ";
    getline(cin,y);
}

bool check(string s, string x, int i)
{
    int j = 0;
    while (j < x.length())
        {
            if (s[i] != x[j]) return (false);
            i++;
            j++;
        }
    return (true);
}

void output(string s, string x, string y)
{
    for (int i=0; i<s.length(); i++)
        {
            if (s[i] == x[0] && check(s,x,i)) 
                {
                    del(s,x.length(),i);
                    ins(s,y,i);
                    i += y.length()-1;
                } 
        }
    cout << "Result: " << s;
}

int main ()
{
    system("cls");
    string s, x, y;

    input(s,x,y);
    output(s,x,y);

    return (0);
}