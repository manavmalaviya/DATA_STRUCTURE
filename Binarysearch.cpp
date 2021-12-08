#include<iostream>
using namespace std;

int binarySearch(int n,int arr[],int key){
int start,end;
start =0;
end=n-1;
int mid;
int count=0;
// while(start<=end)
// {
//     if(arr[start]==key)
//     {
//         return start;
//     }
//     else if(arr[end]==key)
//     {
//         return end;
//     }
//     else
//     {
//         mid=(start+end)/2;
//         if(arr[mid]==key)
//         {
//             return mid;
//         }
//         else if(arr[mid]>key){
//             start=mid;
//         }
//     }
// }
while(start<=end)
{
    mid=(start+end)/2;
   
    count+=1;
    if(arr[mid]==key)
    {
        return mid;
        return count;

    }
    else if(arr[mid]> key)
    {
        end=mid-1;
    }
    else{
        start=mid+1;
    }
}

return -1;
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(size,arr,key)<<endl;
   
}

// TIME COMPLEXITY
// for this we need to understand the number of times the code runs through while loop
// in forst iteration n then n/2 then (n/2)/2=n/(2^2)...... n/(2^k). after k number of iterations the length would become 1
// theefore n/(2^k)=1 ... n=2^k.. taking Log both side we get Log base(2)(n) = k  therfore O(Log base(2) n).
