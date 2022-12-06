#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double x,y,r;
    cout<<"Enter the x: ";
    cin>>x;
    cout<<"Enter the y: ";
    cin>>y;
    cout<<"Enter the radius: ";
    cin>>r;

    if(x*x+y*y<=r*r && x>=0 && y>=0 ){
        cout<<"The point is in zone!"<<endl;
    }else if (x*x+y*y<=r*r && x<=0 && y<=0){
        cout<<"The point is in zone!"<<endl;
    }
    else if(x>=-r && y<=r && x<=0,y>=0 && x<=sqrt(r*r) && y<=sqrt(r*r)){
        cout<<"The point is in zone!"<<endl;
    }else{
        cout<<"The point is not in zone or something went wrong!"<<endl;
    }

    return 0;
} 
