#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements";
    cin>>n;
    int arr[n],wd[n]={0};
    for(int i=0;i<n;i++)
    {
        cout<<"Array elements";
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) {
        bool repeated = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                repeated = true;
                break;
            }
        }
        if (!repeated) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}