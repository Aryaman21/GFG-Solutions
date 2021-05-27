//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    int getPairsCount(int arr[], int n, int k) {
        sort(arr,arr+n);
        int i=0,j=n-1,c=0;
        int arr2[n];
        for(int i=0;i<n;i++){
            arr2[i] = 0;
        }
        while(i<j){
            if(arr[i]+arr[j]>k){
                j--;
            }
            else if(arr[i]+arr[j]<k){
                j=n-1;
                i++;
            }
            else{
                c++;
                j--;
            }
        }
        return c;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }

    return 0;
}  // } Driver Code Ends
