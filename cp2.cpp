#include <iostream>

using namespace std;
void eachelementfrequency(int arr[],int n)
{
    int freq[n];
    for(int i=0;i<n;i++)
    {
        if(freq[i]!=1)
        {
            int count=1;
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    freq[j]=1;
                }
            }
            cout<<endl;
            cout<<arr[i]<<" - "<<count<<endl;
        }
    }
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
   cout<<"\n  the array elements before arrangement\n";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   eachelementfrequency(arr,n);
    return 0;
}

