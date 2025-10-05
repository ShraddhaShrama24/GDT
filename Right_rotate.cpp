#include<iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter number of elements and how many times to rotate: ";
    cin >> n >> k;
    int arr[n], temp[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    k = k % n;
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[n - k + i];
    }
    for (int i = 0; i < n - k; i++)
    {
        temp[k + i] = arr[i];
    }
    cout << "Rotated array: ";
    for(int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
    return 0;
}
