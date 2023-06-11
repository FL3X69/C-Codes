#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d;
    cout<<"Enter 3 sides of a triangle:-";
    cin>>a>>b>>c;
    d=a+b;
    if(d>c)
    {
        cout<<"It will form a triangle.";
    }
    else
    {
        cout<<"It will not form a triangle.";
    }
    return 0;
}