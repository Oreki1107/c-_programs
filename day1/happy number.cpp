#include <iostream>
using namespace std;
int main(){
    int num,sum,org,rem;
    cout  <<"enter the number to check:";
    cin  >>num;
    org=num;
    while(1)
    {
        sum=0;
        while(num>0)
        {
            rem=num%10;
            sum=sum+rem*rem;
            num=num/10;
        }
        if (sum==1)
        {
            cout  <<"is a happy number:";
            break;
        }
        else if(sum==4)
        {
            cout  <<"is not a happy number:";
            break;
        }
        num=sum;
    }
    return 0;
}
