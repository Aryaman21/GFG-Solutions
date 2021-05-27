#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	string removeDups(string s)
	{
	    int arr[26] = {0};
	    for(int i=0;i<s.length();i++){
	        if(arr[(int)s[i]%97]==0){
	            arr[(int)s[i]%97] = 1;
	        }
	        else{
	            s.erase(s.begin()+i);
	            i--;
	        }
	    }
	    return s;
	}
};

// { Driver Code Starts.


int main()
{


   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;


   		Solution ob;
   		cout << ob.removeDups(s) << "\n";

   	}

    return 0;
}  // } Driver Code Ends
