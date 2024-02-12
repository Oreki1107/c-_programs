#include <iostream>
using namespace std;
int main(){
    int n,i,a=0,b=1,c;
    cout <<"enter the n value:";
    cin  >>n;
    for(i=0;i<n;i++)
    {
       cout <<a<<"\n";
       c=a+b;
       a=b;
       b=c;
    }
    return 0;
}
