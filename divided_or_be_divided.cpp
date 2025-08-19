#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;        
    string num;
    cin >> num;              
    int X = num[x - 1] - '0';  
    int Y = num[y - 1] - '0';

    if ((X != 0 && Y % X == 0) || (Y != 0 && X % Y == 0))
    {
        cout << "YES" <<endl;;
    } 
    else 
    {
        cout << "NO"<<endl;;
    }

    return 0;
}
