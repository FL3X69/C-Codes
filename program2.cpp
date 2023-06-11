#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter 3 angles:-";
    cin>>a>>b>>c;
    if(a==90 || b==90 || c==90 && a+b+c==180)
    {
        cout<<"It is a right angled triangle.";
    }
    else if(a>90 || b>90 || c>90 && a+b+c==180)
    {
        cout<<"It is a obtuse angled triangle.";
    }
    else if(a<90 && b<90 && c<90 && a+b+c==180)
    {
        cout<<"It is a acute angled triangle.";
    }
    else
    {
        cout<<"It won't form a triangle.";
    }
    return 0;
}