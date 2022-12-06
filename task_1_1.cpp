#include <iostream>
using namespace std;

int main() 
{
    int x;
    cout<<"Input the serial number of the month from 1 to 7:  "<<endl;
    cin>>x;

    if(x==1){
        cout<<"This month is January/Janvier.\n"<<"(English/French)"<<endl;
    }else if(x==2){
        cout<<"This month is February/Fevrier.\n"<<"(English/French)"<<endl;
    }else if(x==3){
        cout<<"This month is March/Mars.\n"<<"(English/French)"<<endl;
    }else if(x==4){
        cout<<"This month is April/Avril.\n"<<"(English/French)"<<endl;
    }else if(x==5){
        cout<<"This month is May/Mai.\n"<<"(English/French)"<<endl;
    }else if(x==6){
        cout<<"This month is June/Juin.\n"<<"(English/French)"<<endl;
    }else if(x==7){
        cout<<"This month is July/Juillet.\n"<<"(English/French)"<<endl;
    }else if(x!=1,x!=2,x!=3,x!=4,x!=5,x!=6,x!=7){
        cout<<"Choose the month, which serial number is from 1 to 7!"<<endl;
    }
return 0;
}
