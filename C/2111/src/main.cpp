#include <iostream>
#include <string.h>
#define MAX 1000

using namespace std;
typedef struct Book{
    char title[50];
    char author[50];
    char year[50];

    
};


int main()
{
    int Book[MAX];
    int n;

    cout<<"Enter the number of book in list: "<< endl;
    cin>>n;
    struct Book Book [n];
    for (int i=0 ;i<n;i++)
    {
        cout<<"Enter the book's name: "<<endl;
        gets(Book[i].title);
        cout<<"Enter the author : "<<endl;
        gets(Book[i].author);
        cout<<"Enter the year the book was publisher: \n"<<endl;
        gets(Book[i].year);


    }
    return 0;
}
