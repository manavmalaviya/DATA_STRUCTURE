// for this question the approach will to eliminate the non contributing element of the array. For simple arrays the contributing elements do not wrap while for the one's with circular summation for max sum the non contributing element wraps. So what we will do is eliminate the non contributing element from the array; sum = total sum-non contributuing element.
#include<iostream>
using namespace std;

int kadane(int arr[],int size)
{
    int currentSum=0;
    int Max=INT8_MIN;
    
    for (int i = 0; i < size; i++)
    {
        currentSum+=arr[i];
        if (arr[i]<0)
        {
            currentSum=0;

        }
        Max=max(Max,currentSum);
      
    }
    return Max;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }

    int wrapSum;
    int nonWrapSum=kadane(a,n);

    int total=0;
    int ans;

     // FOR CASE 2
     for(int j=0;j<n;j++)
    { 
        total+=a[j];    
        a[j]=-a[j];
    }
    
    
    wrapSum = total + kadane(a,n);


    ans=max(wrapSum,nonWrapSum);
    cout<<ans;
    return 0;
}



    
    
   



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i <n; i++)
//     {
//         cin>>a[i];
//     }

//     int j=0;
//     int currentSum=0;
//     int maxSum=INT8_MIN;

//     int Max=0;
//     int max1=0;
//     int max2=0;
    
//     int eliminate=0; 

//     int total=0;


//     // FOR CASE 1
    
//     for (int i = 0; i < n; i++)
//     {
//         currentSum+=a[i];
//         if (a[i]<0)
//         {
//             currentSum=0;

//         }
//         max1=max(max1,currentSum);
        
//     }
//     currentSum=0;
    
//     // FOR CASE 2
//     for (int i = 0; i < n; i++)
//     {
//         total+=a[i];
//     }
    
    
//     for(int j=0;j<n;j++)
//     {
//         a[j]=-a[j];
//     }
    
//     for (int k = 0; k < n; k++)
//     {
//         currentSum+=a[k];
//         if(a[k]<0)
//         {
//             currentSum=0;
//         }
//         eliminate=max(eliminate,currentSum);
//     }

//     max2=total-(-eliminate);

//     Max=max(max1,max2);
//     cout<<Max;
// }
