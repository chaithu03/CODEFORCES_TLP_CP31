#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n > 1) {
            cout << x-n << endl; 
        } else {
            cout << a[0] << endl; 
        }
    }
    return 0;
}
