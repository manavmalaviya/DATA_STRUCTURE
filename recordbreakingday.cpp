#include<iostream>
using namespace std;

int max(int x,int a[])
{
for (int i = 1; i <= x; i++)
{
    if(a[i-1]>a[i])
    {
        int temp =a[i-1];
        a[i-1]=a[i];
        a[i]=temp;
    }
}
int max=a[x];
return max;
}

int recordBreaker(int a[], int n)
{
    int counter;
    int record=0;
    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            if(a[0]>a[1])
            {
                record++;
            }
           
        }
        else if(i==n-1)
        {
            counter = 0;
            int j =i-1;
           
              while (a[i]>a[j]&&j>=0)
                 {
                     counter++;
                     j--;
                 }
                
                 if(counter==i)
                 {
                     record++;
                 }
                // while(a[i]>max(j,a))
            // {
            //     record ++;
            // }
               
        }
        else
        {
            counter=0;
            int j=i-1;
            if(a[i]>a[i+1])
            {
                while (a[i]>a[j]&&j>=0)
                {
                    counter++;
                    j--;
                }
                
                if(counter==i)
                {
                    record++;
                }
                
                // for (int j = 0; j < i; j++)
                // {
                //     if (a[i]>a[j])
                //     {
                //         /* code */
                //     }
                // }
            }    
            
           
        }
        
    }
    return record;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
   
    
    for (int  i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    cout<<recordBreaker(a,n)<<endl;
}