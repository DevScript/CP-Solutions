#include <bits/stdc++.h>
using namespace std;

unsigned long long catalan(unsigned long long n)
{
    unsigned long long cat_arr[n+1]; //array to store catalan numbers

    cat_arr[0] = cat_arr[1] = 1; //C0 and C1 turn out to be 1

    for (size_t i = 2; i <= n; i++)
    {
        cat_arr[i] = 0;

        for (size_t j = 0; j < i; j++)
        {
            cat_arr[i] += (cat_arr[j] + cat_arr[i-j-1]);
        }
        
    }
    return cat_arr[n];
    
}

int main()
{
    int n;
    cout << "Enter number of catalan numbers you want: ";
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cout << catalan(i) << " ";
    }
    return 0;
}