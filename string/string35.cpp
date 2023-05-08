#include <iostream>
#include <string>

using namespace std;

void input(string &s)
{
    cout << "Input the string: ";
    getline(cin,s);
}

void count (string &s, int &i, int wordcount[], int &maxcount)
{

       
    while (i < s.length())
    {
        while (i < s.length() && s[i] == ' ') 
        {
            i++;
        }
        int len = 0;
        while (i <s.length() && s[i] != ' ')
        {
            len++;
            i++;
        }
        
        if (len >= 1 || len <=7)
        {
            cout<<wordcount[len - 1]++;
        }
        if (maxcount < wordcount[len-1])
        {
            maxcount=wordcount[len-1];
        }
    }
}

void output (int wordcount [], int maxcount)
{
    for (int i = 0; i < 7; i++)
    {
        cout << "Number of " << i+1 << "-letter words: " << wordcount[i] << endl;
    }
    cout << "The most frequent word length is: " << maxcount   << endl;
}

int main()
{
    string s;
    int wordcount [7] = {0};
    int maxcount = 0;
    int i=0;

    input(s);
    count (s,i,wordcount,maxcount);
    output (wordcount,maxcount);

 
    return 0;

}