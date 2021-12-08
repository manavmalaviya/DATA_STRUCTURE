// subarray is a part of an array (just like subset of a set) the number of total possible subarray is = nC2+n =     n(n+1)/2 LOGIC: we have to numbers to choose from an array (i,j) along with n individul elements .
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // cout<<"Enter the index of subarray for the sum "<<endl;
    // int i,j;
    // cin>>i>>j;
    int sum= 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j<n; j++)
        {
            sum+=arr[j];
            cout<<"The sum of subarray from "<<i<<" to "<<j<<" = ";
            cout<<sum<<endl;
        }
        cout<<"<---------------------------->"<<endl;
        sum=0;
        
        
    }
    
    return 0;    
} 