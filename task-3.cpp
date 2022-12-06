#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
    int task;
    cout<<"Choose the number of the task (1,2,3)!"<<endl;
    cin>>task;

    switch(task){
    case 1:{
        int N,k,l,S,M,V;

        cout<<"Enter the number of rows with grandmothers: "<<endl;
        cin>>N;
        cout<<"Enter the number of rows in the classroom: "<<endl;
        cin>>k;
        cout<<"Enter the number of computers: "<<endl;
        cin>>l;

        S=((2+(N-1))/2)*N;
        cout<<"The number of all grandmothers is "<<S<<endl;

        M=k*l;
        V=M-S;
        if(V>=0){
            cout<<"Grandmothers took all the seats in the classrom. "<<V<<" seats remained free."<<endl;
        }else if(V<0){
            cout<<"Grandmothers needed more seats in the classroom. "<<(-1)*V<<" seats were needed."<<endl;
        }else{
            cout<<"Something went wrong!"<<endl;
        }
            break;}
    case 2:{
        int K, sum=0;
        cout<<"Enter the number: "<<endl;
        cin>>K;
    
        while(K>0)
        {
        sum=sum+K%10;
        K=K/10;
        }
        cout<<"The sum of the digits is "<<sum<<endl;
        break;}
    case 3:{
        double T,G,P,B,L;
        cout<<"Enter the number of bills: "<<endl;
        cin>>T;
        cout<<"Enter the sum of money: "<<endl;
        cin>>G;
        cout<<"Enter the percentage: "<<endl;
        cin>>P;

        L=G*T;

        while(T>1){
        B=(((G)*P)/100)*(T);
        G*=2;
        T--;
        }   

        cout<<"Bank will get this amount of money from all unions: "<<B<<endl;
        cout<<"The largest amount of money which can remain in firm`s account is "<<L-B<<endl;}
    

    return 0;
    }
}

