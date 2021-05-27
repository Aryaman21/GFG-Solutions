#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);

// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }

    return 0;
}// } Driver Code Ends


// arr[] : the input array
// N : size of the array arr[]

// return the length of the longest subsequene of consecutive integers
int findLongestConseqSubseq(int arr[], int N)
{
  sort(arr,arr+N);
//   vector<int> v;
//   for(int i=0;i<N;i++){
//       if(i!=0 && v[i-1]!=arr[i]){
//           v.push_back(arr[i]);
//       }
//       else if(i==0){
//           v.push_back(arr[i]);
//       }
//   }
  int j=1,i=0,maxi=0;
  while(i<N-1){
      if(arr[i+1]-arr[i]==1){
          j++;
      }
      else if(arr[i+1]-arr[i]==0){
          i++;
          continue;
      }
      else{
          j=1;
      }
      maxi = max(j,maxi);
      i++;
  }
  return max(j,maxi);
}
