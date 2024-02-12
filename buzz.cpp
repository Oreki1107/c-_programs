#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(n%7==0  ||  n%10==7)
    {
        cout<<"is a buzz number";
    }
    else
    {
        cout<<"is not a buzz number";
    }
}
