//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<2*n;i++){
            if(i<=n){
                for(int j=0;j<i;j++){
                cout<<"* ";
            }                
            }
            else{
                for(int k=0;k< (2*n-i);k++ ){
                    cout<<"* ";
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends