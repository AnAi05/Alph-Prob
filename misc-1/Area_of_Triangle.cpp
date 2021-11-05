#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b, c, s, area;
    cout<<"Enter Length of Three Sides (one by one): ";
    cin>>a>>b>>c;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"\nArea = "<<area;
    cout<<endl;
    return 0;
}
