<?php 
// Dynamic Programming solution to find 
// length of the longest common substring 

// Returns length of longest common 
// substring of X[0..m-1] and Y[0..n-1] 
function LCSubStr($X, $Y, $m, $n) 
{ 
	// Create a table to store lengths of 
	// longest common suffixes of substrings. 
	// Notethat LCSuff[i][j] contains length 
	// of longest common suffix of X[0..i-1] 
	// and Y[0..j-1]. The first row and 
	// first column entries have no logical 
	// meaning, they are used only for 
	// simplicity of program 
	$LCSuff = array_fill(0, $m + 1, 
			array_fill(0, $n + 1, NULL)); 
	$result = 0; // To store length of the 
				// longest common substring 

	// Following steps build LCSuff[m+1][n+1] 
	// in bottom up fashion. 
	for ($i = 0; $i <= $m; $i++) 
	{ 
		for ($j = 0; $j <= $n; $j++) 
		{ 
			if ($i == 0 || $j == 0) 
				$LCSuff[$i][$j] = 0; 

			else if ($X[$i - 1] == $Y[$j - 1]) 
			{ 
				$LCSuff[$i][$j] = $LCSuff[$i - 1][$j - 1] + 1; 
				$result = max($result, 
							$LCSuff[$i][$j]); 
			} 
			else $LCSuff[$i][$j] = 0; 
		} 
	} 
	return $result; 
} 

// Driver Code 
$X = "OldSite:GeeksforGeeks.org"; 
$Y = "NewSite:GeeksQuiz.com"; 

$m = strlen($X); 
$n = strlen($Y); 

echo "Length of Longest Common Substring is " . 
					LCSubStr($X, $Y, $m, $n); 
						
?> 
