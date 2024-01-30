/* question:1 wave array 
sample input:2,4,7,8,9,10
sample output:4,2,8,7,10,9 */


#include<bits/stdc++.h>
using namespace std;


int main()
{
int n = 6;

int arr[n];

for (int i = 0; i < n; i++){
    cin >> arr[i];
}

for (int i = 0; i < n; i+=2)
{
    if (i>0 && arr[i] < arr[i-1]){
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
    }

    if (i<n-1 && arr[i] < arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
}

