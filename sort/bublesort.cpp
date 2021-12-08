#include<iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int m = 0; m<n; m++)
    {
      cin>>arr[m];
    }
// ....................... BubbleSort.................... 
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j]>arr[j+1] && j<<(n-1))
            {
                int temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }            
        }        
    }

// with while loop int counter=1 while(counter<n){ counter++}

    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<endl;
    }
    
    return 0;    
}