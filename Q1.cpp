#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(void)
{

    int n;
    cin >> n;
    int arr[n],sum = 0;
    for(int i = 0 ; i < n-1;i++)
    {
        arr[i] = i;
        sum = sum + i;
    }
    arr[n-1] = -sum;
    for(int i = 0 ; i < n;i++)
    {
        cout << arr[i] << " ";

    }
}
