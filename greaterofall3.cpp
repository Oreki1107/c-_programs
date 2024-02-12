#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout  <<"enter the a value:";
    cin  >>a;
    cout  <<"enter the b value:";
    cin  >>b;
    cout  <<"enter the c value:";
    cin  >>c;
    if (a>b && a>c)
    {
        cout  <<"a is largest";
    }
    else if(b>a && b>c)
    {
        cout  <<"b is larger";
    }
    else
    {
        cout  <<"c is larger";
    }
    return 0;
}
