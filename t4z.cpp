#include <iostream>
#include <cmath>
#include "stdio.h"
using namespace std;

int main()
{
    double x,z,f, a=0, b=0;
    int k, n=6, m=12;
    x=k;
    cout<<"Results:"<<endl;
    for(k=4; k<=n; k++)
    {
    f=3.1*cos((x+2.3))/(sin(x)+3);
    cout<<"The item a"<< k <<" = "<<f<<endl;
    a+=f;
    }
    cout<<"The sum = "<<a<<endl;
    system("pause>>void");


    cout<<"Results:"<<endl;
    for(k=4; k<=m; k++)
    {
    f=3.1*cos((x+2.3))/(sin(x)+3);
    cout<<"The item b"<< k <<" = "<<f<<endl;
    b+=f;
    }
    cout<<"The sum = "<<b<<endl;
    system("pause>>void");

    z=pow((a+b),2);
    cout<<"The result is: "<<z<<endl;

    return 0;
}


