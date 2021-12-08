#include<iostream>
using namespace std;

void printArr(int arr[],int n)
 {
       for (int i = 0; i <n; i++)
     {
         cout<<arr[i]<< " ";
     }
     cout<<endl;

 }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>> arr[i];
    }
// insertion sort
    for(int i=1;i<n;i++)
    {
         int current =arr[i];
        for (int j = i-1; j >=0; j--)
        {
           
            if (arr[j]>current)
            {
               arr[j+1]=arr[j];
               // now with this code we are able tpo swap first index munber as well
            //   if(arr[j]==arr[0])
            //      {
            //          arr[j]=current;
            //      }
            if (j==0)
            { 
                arr[0] = current;
            }
               printArr(arr,n);
            }
            else
            {
                arr[j+1]=current;
                break;
            }
            
        }
        
    }
   for (int i = 0; i <n; i++)
     {
         cout<<arr[i]<< " ";
     }  
    return 0;
    
    
}

