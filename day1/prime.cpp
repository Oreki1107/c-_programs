#include <iostream>
using namespace std;
int main(){
    int n,m,i,flage;
    cout  <<"enter n value:";
    cin  >>n;
    m=n/2;
    for (i=2;i<m;i++)
    {
        if(n%i==0)
        {
            cout  <<"not a prime number:";
            flage=1;
            break;
        }
        
    }
    if(flage==0)
    {
        cout  <<"number is a prime number";
    }
    return 0;
    
}
