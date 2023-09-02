#include <iostream>
using namespace std;

/**
 * GEEKS FOR GEEKS pattern 12 : https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662664259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_12
Input: 5
Output:
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/

    void printTriangle(int n) {
        // code here
        for(int i=1; i<=n;i++){
            
            for(int j=1;j<=i;j++){
               
                cout<<j<<" ";
                
                

            }
            
            for(int k=0;k< 4*(n-i);k++ ){
                cout<<" ";
            }
            
            for(int l = i; l>0;l--){
                cout<<l<<" ";
                
            }
            
            cout<<"\n";
        }
    }

    
int main(){
	printTriangle(5);
	return 0;
}