#include<iostream>
using namespace std;
int main()
{
    int n,i,max;
    cout<<"Enter number of elements";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
      cout<<"Input elements";
      cin>>arr[i];
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
         {
            max=arr[i];
         }
    }
    cout<<max;
    return 0;
}
