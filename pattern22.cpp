//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        int line=2*n-1;
        for(int i=1;i<=2*n-1;i++){
            int candidate = i <= n ? n - i + 1 : std::abs(n - i)+1;

            if(i<=n){
                for(int j=1;j<=2*n-1;j++){
                
                if(j>=i && j<=2*n-i){
                    cout<<candidate<<" ";
                }
                else{
                    
                 cout<<std::abs(n-j)+1<<" ";
                        
                    
                }
                
            } 
            }
            else{
                
            for(int j=1;j<=2*n-1;j++){
                
                if(i==7){
                
                }
                if(j>=(line-i+1) && j<= i ){
                    cout<<candidate<<" ";
                }
                else{
                    
                 cout<<std::abs(n-j)+1<<" ";
                        
                    
                }
                
            } 
                
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends