// C# implementation of finding length of longest 
// Common substring using Dynamic Programming 
using System; 

class GFG { 
	
	// Returns length of longest common 
	// substring of X[0..m-1] and Y[0..n-1] 
	static int LCSubStr(string X, string Y, 
								int m, int n) 
	{ 
		
		// Create a table to store lengths of 
		// longest common suffixes of substrings. 
		// Note that LCSuff[i][j] contains length 
		// of longest common suffix of X[0..i-1] 
		// and Y[0..j-1]. The first row and first 
		// column entries have no logical meaning, 
		// they are used only for simplicity of 
		// program 
		int[, ] LCStuff = new int[m + 1, n + 1]; 
		
		// To store length of the longest common 
		// substring 
		int result = 0; 

		// Following steps build LCSuff[m+1][n+1] 
		// in bottom up fashion 
		for (int i = 0; i <= m; i++) { 
			for (int j = 0; j <= n; j++) { 
				if (i == 0 || j == 0) 
					LCStuff[i, j] = 0; 
				else if (X[i - 1] == Y[j - 1]) { 
					LCStuff[i, j] = 
							LCStuff[i - 1, j - 1] + 1; 
							
					result = Math.Max(result, 
									LCStuff[i, j]); 
				} 
				else
					LCStuff[i, j] = 0; 
			} 
		} 
		
		return result; 
	} 

	// Driver Program to test above function 
	public static void Main() 
	{ 
		String X = "OldSite:GeeksforGeeks.org"; 
		String Y = "NewSite:GeeksQuiz.com"; 

		int m = X.Length; 
		int n = Y.Length; 

		Console.Write("Length of Longest Common"
		+ " Substring is " + LCSubStr(X, Y, m, n)); 
	} 

} 
