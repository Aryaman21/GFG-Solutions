#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        char c;
        for(int i=0;i<S.length();i++){
            if(S[i]!=c){
                c=S[i];
            }
            else{
                S.erase(i,1);
                i-=1;
            }
        }
        return S;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
}
