// here we will search for the max element upto the i th element in the array say we have an array of 1 2 4 0 8 here for the 0th index the max element is 1, for the second one it's 2, for the 2th index the max is 4 and for the 3rd index its again 4.. and so on

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
    int key;
    cout<<"<--------------------------------------->" <<endl;
    cout<<"Enter the I th place for max digit"<<endl;
    cin>>key;
    int max = arr[0];
    for (int j = 1; j <= key+1; j++)
    {
       for (int k = 0; k < j; k++)
       {
           if(arr[k]>=max && k<j)
           {
               max=arr[k];
            //    cout<<max<<endl;
           }
           else
           {
               continue;
           }
       }
        
    }
    cout<<"Max digit upto";
    cout<<key;
    cout<<"th Place is ";
    cout<<max<<endl;
    return 0;
    
    
}