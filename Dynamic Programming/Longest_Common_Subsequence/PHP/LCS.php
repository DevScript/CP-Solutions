<?php 
// A Naive recursive PHP 
// implementation of LCS problem 
function lcs($X, $Y, $m, $n) 
{ 
	if($m == 0 || $n == 0) 
	return 0; 
	else if ($X[$m - 1] == $Y[$n - 1]) 
		return 1 + lcs($X, $Y, 
					$m - 1, $n - 1); 
	else
		return max(lcs($X, $Y, $m, $n - 1), 
				lcs($X, $Y, $m - 1, $n)); 
} 

// Driver Code 
$X = "AGGTAB"; 
$Y = "GXTXAYB"; 
echo "Length of LCS is "; 
echo lcs($X , $Y, strlen($X), 
				strlen($Y)); 
?> 
