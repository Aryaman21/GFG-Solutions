#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> duplicates(int a[], int n) {
    sort(a,a+n);
    vector<int> v;
    int j = n;
    for(int i=0;i<n-1;i++){
        if(j != a[i]){
           if(a[i]==a[i+1]){
            v.push_back(a[i]);
            j=a[i+1];
        }
        }
    }
    if(v.size()==0){
        v.push_back(-1);
    }
    return v;
}

