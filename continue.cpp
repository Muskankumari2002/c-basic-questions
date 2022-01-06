#include<iostream>
using namespace std;
int main()
{
    int i,age;
    for(i=0;i<10;i++)
    {
        cout<<i<<endl;
        cout<<"Enter your age "<<endl;
        cin>>age;
        if(age>10)
        {
            cout<<"uulala";
            break;
        }
    }
}