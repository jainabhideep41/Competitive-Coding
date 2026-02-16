#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        long long total = 0;
        for (long long x : a) {
            total += x;
        }
 
        long long cur = 0, min_sum = 0;
        for (long long x : a) {
            cur = min(x, cur + x);
            min_sum = min(min_sum, cur);
        }
 
        long long ans = max(total, total - 2 * min_sum);
        cout << ans << endl;
    }
    return 0;
}
