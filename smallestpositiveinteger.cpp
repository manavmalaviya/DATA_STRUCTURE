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

    bool check[n];
    for (int i = 0; i < n; i++)
    {
        check[i]=false;
    }

    for (int j = 0; j <n; j++)
    {
        if(a[j]>=0&& a[j]<=n)
        {
            check[a[j]]=true;
        }
    }
    for (int k = 0; k < n; k++)
    {
        if(check[k]==false)
        {
            cout<<k;
            break;
        }
    }
    
    
    return 0;
    

    

}