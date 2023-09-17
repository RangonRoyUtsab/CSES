#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

const int N = 10005;

char mat[N][N];
bool vis[N][N];
int dis[N][N];
queue<pair<int, int>> q;

void bfs(int x, int y, int row, int col) {
  q.push({x, y});
  vis[x][y] = 1;

  while (!q.empty()) {
    pair<int, int> curr = q.front();
    q.pop();

    for (int i = 0; i < 4; i++) {
      int xx = curr.first + dx[i];
      int yy = curr.second + dy[i];
      if (xx < 0 || yy < 0 || xx >= row || yy >= col) continue;
      if (vis[xx][yy] || (mat[xx][yy] == '#')) continue;
      q.push({xx, yy});
      vis[xx][yy] = 1;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mat[i][j];
      if (mat[i][j] == '#') vis[i][j] = 1;
    }
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mat[i][j] == '.' && vis[i][j] == 0) {
        bfs(i, j, n, m);
        ans++;
      }
    }
  }
  cout << ans << endl;

  return 0;
}
