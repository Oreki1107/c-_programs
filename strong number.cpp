#include<iostream>
using namespace std;
int main(){
    int i,n;
    int fact,rem;
    cout  <<"enter the bnumber to check:";
    cin  >>n;
    int sum=0;
    int temp=n;
    while(n)
    {
        int i=1,fact=1;
        rem=n%10;
        while(i<=rem)
        {
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp)
    {
        cout  <<"strong number";
    }
    else
    {
        cout  <<"not a strong number";
    }
    return 0;
}
