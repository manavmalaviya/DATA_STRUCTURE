// KADANE'S ALGORITHM.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    int currentSum =0;
    int maxSum=INT8_MIN;
    for(int j=0;j<n;j++)
    {
        currentSum+=a[j];
        if(a[j]<0)
        {
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }
    cout<<maxSum;
    return 0;
}