#include <iostream>
using namespace std;
int main(){
    int rem,n,sum=0,num;
    cout  <<"enter any number:";
    cin  >>n;
    num=n;
    while(num!=0)
    {
        rem=num%10;
        sum+=rem*rem*rem;
        num/=10;
    }
    
    if(sum==n)
       cout  <<"number is an armstrong number";
    
    else
       cout  <<"number is not an armstrongnumber";
    
    return 0;
}
