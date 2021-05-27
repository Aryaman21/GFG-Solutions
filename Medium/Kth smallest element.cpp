#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,j,m,b;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> j;
        int a[j];
        for(int i=0;i<j;i++){
            cin >> m;
            a[i] = m;
        }
        cin >> b;
        sort(a,a+j);
        cout << a[b-1] << "\n";
    }
	return 0;
}
