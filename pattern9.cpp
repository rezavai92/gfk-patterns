//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        
        printTriangle(false,n);
        printTriangle(true,n);
    }
    
    void printTriangle(bool reverse, int n){
        if(reverse){
        for(int i=n;i>0;i--){
	        int space = n-i;
	        
	        for(int j = 0; j < space; j++){
	            cout<<" ";
	        }
	        
	       for(int j = 0; j < i; j++){
	            cout<<"* ";
	        }
	        
	       for(int k = 0; k < space; k++){
	            cout<<" ";
	        }
	        
	        cout<<"\n";
	        
	    }
        }
        else{
            for(int i=1;i<=n;i++){
	        int space = n-i;
	        
	        for(int j = 0; j < space; j++){
	            cout<<" ";
	        }
	        
	       for(int j = 0; j < i; j++){
	            cout<<"* ";
	        }
	        
	       for(int k = 0; k < space; k++){
	            cout<<" ";
	        }
	        
	        cout<<"\n";
	        
	    }
            
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends