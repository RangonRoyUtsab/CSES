#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

vector<int> G[200005];
bool vis[200005];
int dis[200005];

void bfs(int root) {
  queue<int> q;
  q.push(root);
  vis[root] = 1;
  dis[root] = 0;

  while (!q.empty()) {
    int par = q.front();
    q.pop();
    for (int i = 0; i < int(G[par].size()); i++) {
      int child = G[par][i];
      if (vis[child]) continue;
      q.push(child);
      vis[child] = 1;
      dis[child] = dis[par] + 1;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  scanf("%d", &n);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    scanf("%d %d", &u, &v);
    G[u].push_back(v);
    G[v].push_back(u);
  }

  int gm = 0;
  bfs(1);
  for (int k = 1; k <= n; k++) {
    if (dis[k] > dis[gm]) {
      gm = k;
    }
  }
  for (int j = 1; j <= n; j++) {
    vis[j] = 0;
    dis[j] = 0;
  }
  bfs(gm);
  gm = 0;
  for (int k = 1; k <= n; k++) {
    gm = max(gm, dis[k]);
  }
  printf("%d\n", gm);

  return 0;
}