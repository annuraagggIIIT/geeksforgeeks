//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
    
    stack<int>s2;
    int mid=sizeOfStack/2 ;
    for(int i=0;i<=mid;i++)
    {
        if(i!=mid)
        {
            int ans=s.top();
            s.pop();
            s2.push(ans);
        }
        else 
        s.pop();
    }
   while (!s2.empty()) {
            int temp = s2.top();
            s2.pop();
            s.push(temp);
        }
    
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends};