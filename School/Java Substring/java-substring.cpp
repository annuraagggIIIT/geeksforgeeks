//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string javaSub(string S, int L, int R) {
        // code here

string s;
for(int i=L;i<=R;i++)
{
    s.push_back(S[i]);
}
return s;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout << ob.javaSub(S, L, R) << endl;
    }
    return 0;
}

// } Driver Code Ends