#include <iostream>
using namespace std;
int main() 
{
    int a,b;
    cout  <<"ente the value of a:";
    cin  >>a;
    cout  <<"enter the value of b:";
    cin  >>b;
    if(a>b)
    {
        cout  <<"a is greater than b";
    }
    else if(b>a)
    {
        cout  <<"b is greater than a";
    }
    else
    {
        cout  <<"a and b are equal";
    }
    return 0;
}
