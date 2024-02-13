#include<iostream>
using namespace std;
int main()
{
int arr[]={10,20,30,40,50};
int pos=3,value=25,i;
int size=sizeof(arr)/sizeof arr[0];
for(i=size;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=value;
    
    cout <<"result array is:";
    for(i=0;i<=size;i++)
    {
        cout  <<arr[i]<<" ,";
    }
    return 0;
}
