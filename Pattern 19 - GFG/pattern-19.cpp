//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int s=0;
        for(int i=0;i<n;i++)
        {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<s;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        s+=2;
        cout<<endl;
        }
        s=2*n-2;
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<s;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        s-=2;
        cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends