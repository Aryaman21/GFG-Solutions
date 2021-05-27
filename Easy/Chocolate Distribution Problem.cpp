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
	    sort(arr,arr+n);
	    int i=0,j=m-1,mini=INT_MAX;
	    while(j<n){
	        if(arr[j]-arr[i]<mini){
	            mini = arr[j]-arr[i];
	        }
	        i++;
	        j++;
	    }
	    cout << mini << endl;
	}
	return 0;
}
