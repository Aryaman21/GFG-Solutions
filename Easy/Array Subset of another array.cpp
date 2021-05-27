#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,m,l=0;
	    cin >> n >> m;
	    int ar1[n],ar2[m];
	    for(int i=0;i<n;i++){
	        cin >> ar1[i];
	    }
	    for(int i=0;i<m;i++){
	        cin >> ar2[i];
	    }
	    sort(ar1,ar1+n);
	    sort(ar2,ar2+m);
	    int j=0,k=0;
	    while(j<n && k<m){
	        if(ar1[j]==ar2[k]){
	            l++;
	            j++;
	            k++;
	        }
	        else if(ar1[j]<ar2[k]){
	            j++;
	        }
	        else{
	            k++;
	        }
	    }
	    if(l==m){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	}
}
