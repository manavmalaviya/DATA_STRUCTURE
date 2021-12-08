// longest arthematic subarray is a sequence of an array in which the consicutive elements of array should have same diffrences[ 1,3,6,3],[3,3,3].
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int pdiff;
    int arr[n];
    int newarr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    pdiff= arr[1]-arr[0];
    // int ans = 2;
 int index=0;
    for (int i = 1; i < n; i++)
    {
        if(pdiff==(arr[i]-arr[i-1]))
        {
           
            newarr[index]=arr[i];
            cout<<arr[i];
            index++;
        }
        
    else{
        pdiff=arr[i]-arr[i-1];
        newarr[n]={};
        index =0;
        }
    }
    
    
    cout<<endl;
   
     

}