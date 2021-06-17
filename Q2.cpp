#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(void)
{

    int n,money,robotanswer,counting =0 ;
    cin >> n;
    int arr[n];
    cout << "Enter the prices:\n";
    for(int i = 0 ; i < n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the money customer has:\n";
    cin >> money;
    cout << "Enter the answer given by robot:\n";
    cin >> robotanswer;
    for(int i = 0 ; i < n;i++)
    {

        if((money % arr[i]) == 0)
        {

            counting++;
        }
    }
    if(counting == robotanswer)
    {

        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }
}
