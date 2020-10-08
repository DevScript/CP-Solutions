#include <iostream>
#include <limits.h>
using namespace std;

int res(int n, int f) 
{ 
   
    int dp[n + 1][f + 1]; 
    int res; 
   
  
   
    for (int i = 1; i <= n; i++) { 
        dp[i][1] = 1; 
        dp[i][0] = 0; 
    } 
  
   
    for (int j = 1; j <= f; j++) 
        dp[1][j] = j; 
  
    
    for (int i = 2; i <= n; i++) { 
        for (int j = 2; j <= f; j++) { 
            dp[i][j] = INT_MAX; 
            for (int x = 1; x <= j; x++) { 
                res = 1 + max( 
                              dp[i - 1][x - 1], 
                              dp[i][j - x]); 
                if (res < dp[i][j]) 
                    dp[i][j] = res; 
            } 
        } 
    } 
     
    return dp[n][f]; 
} 


int main() {
    
    	int n,f;
	cin>>n;
	cin>>f;
    	cout<<res(n, f);
    	
    	return 0;
}
