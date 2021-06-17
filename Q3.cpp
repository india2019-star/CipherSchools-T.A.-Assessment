#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int knapsack(int n, int wt[],int val[],int W)
{

    if(n == 0 || W == 0)
    {
        return 0;
    }

    if(wt[n-1] <= W)
    {

        return max((val[n-1] + knapsack(n-1,wt,val,W-wt[n-1])),knapsack(n-1,wt,val,W));
    }
    else
    {
        return knapsack(n-1,wt,val,W);
    }

}

int main(void)
{
    int n,W;
    cin >> n;
    int wt[n+1];
    int val[n+1];
    cout << "Enter weights :\n";
    for(int i = 0 ; i < n;i++)
    {
        cin >> wt[i];
    }
    cout << "Enter values:\n";
    for(int i = 0 ; i < n;i++)
    {
        cin >> val[i];
    }
    cout << "Enter knapsack weight:\n";
    cin >> W;
    int result = knapsack(n,wt,val,W);
    cout << "Max profit should be " << result;

}
