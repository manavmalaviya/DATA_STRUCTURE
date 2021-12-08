#include<iostream>
using namespace std;
int main()
{
    int n, key;
    cin>> n>> key;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int sum=0;
    int count=0;
    for (int j = 0; j <n ;j++)
    {
        
        if (j==n-1)
        {
            sum=a[j]+a[0];
            if(sum==key)
            {
                cout<<"True for index "<<j<<" 0 "<<endl;
                count++;
            }
        }
        else
        {
            sum=a[j]+a[j+1];
             if(sum==key)
            {
                cout<<"True for index "<<j<<" & "<<j+1<<endl;
                count++;
            }
        }      
    }
    if(count==0)
    {
        cout<<"false";
    }
    return 0;
    
    
}