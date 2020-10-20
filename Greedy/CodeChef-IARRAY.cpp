#include <bits/stdc++.h>  

using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> B[i];
        B[i] = A[i] - B[i];
    }
    int current = 0;
    long long int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (B[i] > current)
            ans += (B[i] - current);
        current = B[i];
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}