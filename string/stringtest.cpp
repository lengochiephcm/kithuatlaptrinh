#include <iostream>
using namespace std;
void input(string &s)
{
    cout << "Input the string: ";
    getline(cin,s);
}
int countString(string s){
    int count =0 ;
    int len = s.length();
    int p = 0;
    for (int i=0; i <len+1; i++)
    {
        if (s[i] == '\0' || s[i] == ' ') {
            for (int j = p; j < p + count; j++){
                cout << s[j];
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