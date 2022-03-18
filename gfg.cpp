#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minSteps(int A[], int N, int K) {
        // code here
        sort(A,A+N);
        vector<int> pre(N,0);
        
        int x = A[0];
        pre[0] = x;
        for(int i=0; i<N;i++)
        {
            pre[i] = pre[i-1]+A[i];
            
        }
        int f = INT_MAX;
        for(int  i=0;i<N;i++)
        {
            int mins = A[i];
            int rc =0;
            for(int j = i;j<N;j = j+2)
            {
                if(A[j] - mins > K)
                {
                    rc = rc + A[j] - (mins + K); 
                }
            }
            for(int k = i+1;k<N;k = k+2)
            {
                if(A[k] - mins > K)
                {
                    rc = rc + A[k] - (mins + K); 
                }
            }
            if(i>0)
            {
                rc = rc+pre[i-1];
            }
            
            f = min(rc, f);
            
        }
        return f;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin>>N>>K;
        
        int A[N];
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.minSteps(A,N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends
