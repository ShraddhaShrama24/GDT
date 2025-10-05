#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"enter no. of elements and and how many times it rotated";
    cin>>n>>k;
    int arr[n],temp[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<k;i++) 
    {
        temp[i]=arr[n-k+i];
    }
    for(int i=0;i<k;i++)
    {
        temp[k+i]=arr[i];
    }for(int i=0;i<n;i++)
    {
        cout<<temp[i];
    }
    return 0;
}