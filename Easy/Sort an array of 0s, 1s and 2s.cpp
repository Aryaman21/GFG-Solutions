#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m,j;
	cin >> n;
	for(int i=0;i<n;i++){
	    cin >> m;
	    int arr[m];
	    int q=0,w=0,e=0;
	    for(int i=0;i<m;i++){
	        cin >> j;
	        arr[i] = j;
	        if(j==0){
	            q++;
	        }
	        else if(j==1){
	            w++;
	        }
	        else{
	            e++;
	        }
	    }
	    for(int i=0;i<q;i++){
	        cout << "0" << " ";
	    }
	    for(int i=0;i<w;i++){
	        cout << "1" << " ";
	    }
	    for(int i=0;i<e;i++){
	        cout << "2" << " ";
	    }
	    cout << "\n";
	}
	return 0;
}

