#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int ar[n]={0};
        int *a = new int(2);
        for(int i=0;i<n;i++){
            if(ar[arr[i]-1]==0){
                ar[arr[i]-1] = 1;
            }
            else{
                a[0] = arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(ar[i]==0){
                a[1] = i+1;
                break;
            }
        }
        return a;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
