#include <iostream>
using namespace std;

int main() 
{
    int month;
    cout<<"Input the serial number of the month from 1 to 7:  "<<endl;
    cin>>month;

    switch (month) {
    case 1:
        cout << "This month is January/Janvier.\n"<<"(English/French)"<<endl;
        break;
    case 2:
        cout << "This month is February/Fevrier.\n"<<"(English/French)"<<endl;
        break;
    case 3:
        cout << "This month is March/Mars.\n"<<"(English/French)"<<endl;
        break;
    case 4:
        cout << "This month is April/Avril.\n"<<"(English/French)"<<endl;
        break;
    case 5:
        cout << "This month is May/Mai.\n"<<"(English/French)"<<endl;
        break;
    case 6:
     cout << "This month is June/Juin.\n"<<"(English/French)"<<endl;
        break;
    case 7:
        cout << "This month is July/Juillet.\n"<<"(English/French)"<<endl;
        break;
    default:
        cout<<"Choose the month, which serial number is from 1 to 7!"<<endl;
  }

return 0;
}
