#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int actions = 0;
        for (int i = 0; i < n;) {
            if (s[i] == '.') {
                int j = i;
                while (j < n && s[j] == '.') j++;

                int length = j - i;
                actions += (length + 2) / 3; // ceil(length / 3)

                i = j;
            } else {
                i++;
            }
        }
        cout << actions << "\n";
    }
    return 0;
}
