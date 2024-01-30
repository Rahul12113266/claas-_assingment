/******************************************************************************

move zeroes in right side 


*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,0,3,4,0,9,7,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
            
        }
    }
    for(int i=0;i<n;i++)
    {
          cout<<arr[i]<<" ";
    }
    
}
