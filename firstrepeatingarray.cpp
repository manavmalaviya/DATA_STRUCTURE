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

    int j=0;
    
    while(j<n)
    {
        int m=j+1;
        int counter=0;
        while(m<n)
        {
            if(a[j]==a[m])
            {
                cout<<"first repeating element of array is "<<a[j]<<endl;
                counter++;
                break;
            }
            m++;
        }
        if (counter==1)
        {
            break;
        }
        j++;
    }
    return 0;



    

}