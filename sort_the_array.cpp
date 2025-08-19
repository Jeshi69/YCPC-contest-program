#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;

        int arr[100005];
        int block[100005];  
        int block_size = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        block[block_size++] = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) {
                block[block_size++] = arr[i];
            }
        }

        int count = 0;
        for (int i = 1; i < block_size; i++) {
            if (block[i] < block[i - 1]) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}


