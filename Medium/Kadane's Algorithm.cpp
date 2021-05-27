#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

int maxSubarraySum(int arr[], int n){

    int max=0,maxi=0;
    for(int i=0;i<n;i++){
        max+=arr[i];
        if(max>maxi){
            maxi=max;
        }
        if(max<0){
            max=0;
        }
    }
    return maxi;

}

// { Driver Code Starts.

int main()
{
    int t,n;

    cin>>t; //input testcases
    while(t--) //while testcases exist
    {

        cin>>n; //input size of array

        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array

        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
