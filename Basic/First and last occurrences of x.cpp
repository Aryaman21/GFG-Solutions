#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int c=0,j=0,k=n;
	    while(j<n){
	        if(arr[j]==m){
	            k = min(k,j);
	            c++;
	            j++;
	        }
	        else{
	            j++;
	        }
	    }
	    if(c!=0)
	        cout << k << " " << k+c-1 << endl;
	    else
	        cout << "-1" << endl;
	}
	return 0;
}
