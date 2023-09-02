//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i=n;i>0;i--){
	        int space = n-i;
	        
	        for(int j = 0; j < space; j++){
	            cout<<" ";
	        }
	        
	       for(int j = 0; j < 2*i-1; j++){
	            cout<<"*";
	        }
	        
	       for(int k = 0; k < space; k++){
	            cout<<" ";
	        }
	        
	        cout<<"\n";
	        
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