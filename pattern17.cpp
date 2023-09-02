//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int t =1;
        for(int i=1;i<=n;i++){
            
            for(int k=0;k<n-i;k++){
                cout<<" ";
            }
            for(int j =0;j<t;j++){
                
                if(j<i){
                    cout<<(char)('A'+j);
                }
                else{
                    cout<<(char)('A'+(t-j-1));
                }
                
            }
            t+=2;
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