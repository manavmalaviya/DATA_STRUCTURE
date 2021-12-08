#include<iostream>
using namespace std;
int main()
{
    int x,y,n;
    x=0;
    y=1;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }

    
    int diff,longest;
    longest =1;
    int j =0;
    diff= a[y]-a[x];
    while(j <= n)
    {
        
        y++; 
        if((a[y]-a[y-1])==diff)
        {
            y++;
            longest++;
            if((y-x)>=2)
            {
                for (int i = x; i <= y; i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
        }
        else{
            x=y-1;
            diff= a[y]-a[x];
        }
        j++;

    }


}