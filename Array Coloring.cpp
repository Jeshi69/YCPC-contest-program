#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum % 2 == 0 && n >= 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
