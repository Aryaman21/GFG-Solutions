#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >>m;
	    int arr[n];
	    bool found = false;
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    int i=0,j,k=n;
	    while(i<n){
	        int s;
	        if(m - arr[i]>=0){
	            s = m - arr[i];
	        }
	        else{
	            i++;
	            continue;
	        }

	        j = i+1;
	        k = n-1;
	        while(j<k){
	            if(s==(arr[j]+arr[k])){
	                found = true;
	                break;
	            }
	            else if((arr[j]+arr[k])<s){
	                j++;
	            }
	            else{
	                k--;
	            }
	        }
	        if(found){
	            break;
	        }
	        i++;
	    }
	    if(found){
	        cout << "1" << endl;
	    }
	    else{
	        cout << "0" << endl;
	    }
	}
	return 0;
}
