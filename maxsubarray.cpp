#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    int subarray=((n*(n+1))/2);
    // int max[subarray];
    int sum=0;
    int counter=0;
    int max=a[0];
    for(int i =0; i<n;i++)
    {
        for(int j=i; j<n;j++)
        {

            sum+=a[j];
            if(sum>=max)
            {
                max=sum;
            }
            // max[counter]=sum;
            counter++;
        }
        sum=0;
    }
 cout<< max;
    
    
    //  for(int m=0;m < subarray;m++)
    //  {
    //      for (int k = m+1; k < subarray; k++)
    //      {
    //          if(max[k]<max[m])
    //          {
    //              int temp=max[k];
    //              max[k]=max[m];
    //              max[m]=temp;
    //          }
           
    //      }
        
    //  }
    //  cout<<max[subarray-1]<<endl;
    
    
}