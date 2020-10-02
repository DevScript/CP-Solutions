#include <iostream>
#include <vector>

using namespace std;

int n, m, t_area, dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0}, g[1000][1000];
vector<vector<bool>> vis;

inline bool valid(int x, int y, int v) {
    return x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && g[x][y] == v;
}

void dfs(int x, int y) {
    vis[x][y] = true;
    t_area++;
    for (int i = 0; i < 4; i++) {
        int xx = x + dx[i], yy = y + dy[i];
        if (valid(xx, yy, g[x][y])) {
            dfs(xx, yy);
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }
    int val = 1e9 + 1, area = -val;
    vis.resize(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vis[i][j]) {
                continue;
            }
            t_area = 0;
            dfs(i, j);
            if (t_area > area) {
                area = t_area;
                val = g[i][j];
            } else if (t_area == area && g[i][j] < val) {
                val = g[i][j];
            }
        }
    }
    cout << val << ' ' << area << '\n';
    return 0;
}
