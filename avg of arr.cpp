#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof arr[0];
    int sum=0,i,avg;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        avg=sum/n;
    }
    cout<<avg;
}
