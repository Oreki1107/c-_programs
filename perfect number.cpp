#include <iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout <<"enter any number:";
    cin >>n;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        cout  <<"is a perfect number";
    }
    else
    {
        cout  <<"not a perfect number";
    }
    return 0;
}
