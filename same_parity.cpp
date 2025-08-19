#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n; 

        int a[n];
        int jor =0,bejor = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
            if(a[i]%2 == 0){
                jor++;
            }
            else {
                bejor++;
            }
        }

        

        int parity = (a[0] + 1) % 2;

        for (int i = 1; i < n; i++) {
            int current_parity = (a[i] + (i + 1)) % 2;
            if (current_parity != parity)
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
