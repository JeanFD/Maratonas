#include <bits/stdc++.h>
using namespace std;

bool visitadas(int N, const vector<vector<pair<int, int>>>& graph, int K, int max_time) {
    vector<bool> vis(N + 1, false);
    queue<int> q;
    q.push(1);
    vis[1] = true;
    int count = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        count++;

        if (count >= K) return true;

        for (auto& edge : graph[node]) {
            int neighbor = edge.first;
            int time = edge.second;
            if (time <= max_time && !vis[neighbor]) {
                vis[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return count >= K;
}

int horas(int N, int M, int K, const vector<tuple<int, int, int>>& edges) {
    int left = 0;
    int right = 0;
    for (const auto& edge : edges) {
        right = max(right, get<2>(edge));
    }
    int result = -1;

    vector<vector<pair<int, int>>> graph(N + 1);
    for (const auto& edge : edges) {
        int u, v, c;
        tie(u, v, c) = edge;
        graph[u].emplace_back(v, c);
        graph[v].emplace_back(u, c);
    }

    while (left <= right) {
        int mid = (left + right) / 2;
        if (visitadas(N, graph, K, mid)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<tuple<int, int, int>> edges;
    for (int i = 0; i < M; ++i) {
        int U, V, C;
        cin >> U >> V >> C;
        edges.emplace_back(U, V, C);
    }

    cout << horas(N, M, K, edges) << endl;

    return 0;
}