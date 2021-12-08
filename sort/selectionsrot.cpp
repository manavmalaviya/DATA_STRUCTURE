#include<iostream>
using namespace std;



int main()
{
    int size;
    cin>>size;
    int arr[size];
   
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
     
    for(int n=0;n < size;n++)
    {
        for (int j = n+1; j < size; j++)
        {
            if(arr[j]<arr[n])
            {
                int temp=arr[j];
                arr[j]=arr[n];
                arr[n]=temp;
            }
           
        }
        
    }
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
