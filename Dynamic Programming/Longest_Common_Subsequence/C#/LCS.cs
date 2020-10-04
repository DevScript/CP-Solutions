/* C# Naive recursive implementation of LCS problem */
using System; 

class GFG 
{ 
	

	/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
	static int lcs( char[] X, char[] Y, int m, int n ) 
	{ 
		if (m == 0 || n == 0) 
		return 0; 
		if (X[m - 1] == Y[n - 1]) 
		return 1 + lcs(X, Y, m - 1, n - 1); 
		else
		return max(lcs(X, Y, m, n - 1), lcs(X, Y, m - 1, n)); 
	} 
	
	/* Utility function to get max of 2 integers */
	static int max(int a, int b) 
	{ 
		return (a > b)? a : b; 
	} 
	
	public static void Main() 
	{ 
		String s1 = "AGGTAB"; 
		String s2 = "GXTXAYB"; 
	
		char[] X=s1.ToCharArray(); 
		char[] Y=s2.ToCharArray(); 
		int m = X.Length; 
		int n = Y.Length; 
	
		Console.Write("Length of LCS is" + " "
					+lcs( X, Y, m, n ) ); 
	} 
} 
