#include <iostream>
using namespace std;


int main()
{
    int num;
    cout<<"Enter total number of student: ";
    cin>>num;
    float *ptr;
    ptr =new float [num];
    cout<<"Enter GPA of students"<<endl;
    for(int i  =0 ; i < num ; i++){
        cout<<"Student  "<<i+1<<" : ";
        cin>>*(ptr + i);
    }
    cout<<"\n Displaying GPA of student: ";
    for(int j =0 ; j <num; j++){
        cout<<"\n Student "<<j+1<<" : "<<*(ptr+j);
    }
    
    return 0;

}