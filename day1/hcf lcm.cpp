#include <iostream>
using namespace std;
int main(){
    int n1,n2,hcf,lcm,i;
    cout<<"enter n1 value:";
    cin>>n1;
    cout<<"enter n2 value:";
    cin>>n2;
    for(i=1;i<=n1;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    cout<<"hcf of two numbers is"<<hcf<<"\n";
    lcm=(n1*n2)/hcf;
    cout<<"lcm of two numbers is"<<lcm<<"\n";
}
