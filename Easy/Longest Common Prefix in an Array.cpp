#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:

    string longestCommonPrefix (string arr[], int N)
    {
        int m = INT_MAX;
        for(int i=0;i<N;i++){
            if(arr[i].length()<m){
                m = arr[i].length();
            }
        }
        bool is = true;
        string h = "";
        for(int i=0;i<m;i++){
            if(is){
                char g = arr[0][i];
                h+= arr[0][i];
                for(int j=1;j<N;j++){
                    if(arr[j][i]!=g){
                        h.erase(h.size() - 1);
                        break;
                    }
                }
            }
            else{
                break;
            }
        }
        if(h.length()==0){
            return "-1";
        }
        return h;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}
