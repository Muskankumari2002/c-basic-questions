#include<iostream>
#define Pi 3.14
using namespace std;
int main()
{
    int radius;
    double circumference,area;
    cout<<"enter the radius of cylinder: "<<endl;
    cin>>radius;
    circumference= 2*Pi*radius;
    area= Pi*radius*radius;
    cout<<"circumference of cylinder is :"<<circumference<<endl;
    cout<<"area of cylinder :"<<area;

    return 0;

}