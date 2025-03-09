#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, q;
        cin >> n >> q;
        
        vector<unsigned long long> a(n), prefix_sum(n), max_heights(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        prefix_sum[0] = a[0];
        max_heights[0] = a[0];
        
        for (int i = 1; i < n; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + a[i];
            max_heights[i] = max(max_heights[i - 1], a[i]);
        }
        
        while (q--) {
            int k;
            cin >> k;
            
            int idx = upper_bound(max_heights.begin(), max_heights.end(), k) - max_heights.begin();
            
            if (idx > 0)
                cout << prefix_sum[idx - 1] << " ";
            else
                cout << "0 ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
