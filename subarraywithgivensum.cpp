#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    int gsum;
    cin>> gsum;
    int i =0;
    int j =0;
    // using while loop
    while(i<n)
    {
        j=i;
        while(j<n)
        {
            sum+=a[j];
            if(sum==gsum)
            {
                cout<<"subarray from index "<<i << " to "<<j<<" matches the given sum"<<endl;
            }
            j++;
        }
        sum=0;
        i++;
    }
    
//   using for loop

      for (int i = 0; i < n; i++)
     {
        
         for (int j = i; j<n; j++)
         {
            sum+=a[j];
            if(sum==gsum)
            {
                cout<<"subarray from index "<<i << " to "<<j<<" matches the given sum"<<endl;
            }
         }
         sum=0;

                     
            
                  
       
    
            
   
        
    return 0;
    }