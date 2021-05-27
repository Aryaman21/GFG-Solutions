// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> v;
        v.push_back(a[n-1]);
        int maxi = a[n-1];
        for(int i=n-1;i>1;i--){
            if(a[i-1]>=max(a[i],maxi)){
                v.push_back(a[i-1]);
            }

            maxi = max(a[i-1],maxi);
        }
        if(a[0]>maxi){
            v.push_back(a[0]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array

        int a[n];

        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);

        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }

        cout << endl;

   }
}
  // } Driver Code Ends
