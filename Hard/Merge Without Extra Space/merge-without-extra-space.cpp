//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution {
public:
    // Function to merge the arrays.
    void merge(long long arr1[], long long arr2[], int n, int m) 
    { 
        std::vector<long long> v;

        for (int i = 0; i < n; i++) {
            v.push_back(arr1[i]);
        }

        for (int i = 0; i < m; i++) {
            v.push_back(arr2[i]);
        }

        std::sort(v.begin(), v.end());

        std::copy(v.begin(), v.begin() + n, arr1);
        std::copy(v.begin() + n, v.begin() + n + m, arr2);
    } 
};


//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends