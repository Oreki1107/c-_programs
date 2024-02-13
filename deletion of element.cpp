#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int pos=3,i;
    int size=sizeof(arr)/sizeof arr[0];
    if(pos>size)
    {
        cout  <<"invalide position";
    }
    else
    {
        --pos;
        for(i=pos;i<=size-1;i++)
        {
           arr[i]=arr[i+1]; 
        }
        cout<<"new array is:";
        for(i=0;i<size-1;i++)
        {
            cout<<" "<<arr[i]<<" ";
        }
    }
    cout<<"\n";
    return 0;
    
}
