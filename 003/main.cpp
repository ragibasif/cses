#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void solve();

void solve() {
    string s;
    cin >> s;
    char prev = s[0];
    int ctr = 1;
    int res = ctr;
    int i;
    for (i = 1; i < s.length(); i++) {
        if (s[i] == prev) {
            ctr++;
            res = max(res,ctr);
        }
        else
            ctr = 1;
        prev = s[i];
    }
    cout << res;
}

int main() {
    // fast IO
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    t = 1;
    /*cin >> t;*/
    while (t--) {
        solve();
        cout << "\n";
    }

    return 0;
}
