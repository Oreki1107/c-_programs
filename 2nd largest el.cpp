#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={3,6,2,5,1};
    int n=sizeof(arr)/sizeof arr[0];
    int i,j,m=2;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    reverse(arr,arr+n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n ";
    cout<<"second largest element is"<<arr[m-1];
    return 0;
}
