#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cout<<"Enter no. of elements";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            c=c+1;
            continue;
        }
        else{
            cout<<"false";
            break;
        }
    }
    if(c==n)
    cout<<"true";
    return 0;
}