#include<iostream>
using namespace std;
int main(){
    int count=0,i,m=1;
    int arr[]={1,2,1,3,4,4,5};
    int n=sizeof(arr)/sizeof arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            count++;
        }
    }
    cout<<count;
}
