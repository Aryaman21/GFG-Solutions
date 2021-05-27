#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    cin >> m;

	    int i=0,maxi=0,s=0;
	    for(int t=0;t<n;t++){
	        if(arr[t]<=m){
	            s++;
	        }
	    }

	    while(i+s<=n){
	        int j=0;
	        for(int x=i;x<i+s;x++){
	            if(arr[x]<=m){
	               j++;
	            }
	        }
	        maxi=max(j,maxi);
	        i++;
	    }
	    cout << s-maxi << endl;
	}
	return 0;
}
