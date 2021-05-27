#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++


class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	   if(n==0) return 0;
        if(n==1 or n==2) return n+1;
        int a=2,b=3,c,mod=1e9+7;

        for(int i=3;i<=n;i++)
        {
        c=(a%mod+b%mod)%mod;
        a=b;
        b=c;
        }

        return c%mod;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
