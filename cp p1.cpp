#include <iostream>

using namespace std;
void swap(int *a,int*b);
void rearrangeevenodd(int arr[],int n)
{
    int i=-1;
    for(int j=0;j<n;j++)
    {
        if(arr[j]%2==0)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
   int arr[10],n;
   cout<<"\n enter the number of array  elements";
   cin>>n;
   cout<<"\n the array elements";
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<"\n  the array elements before arrangement";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   rearrangeevenodd(arr,n);
   cout<<"\n  the array elements after arrangement";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
    return 0;
}
