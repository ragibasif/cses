#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

void solve();

void solve() {
    long long n;
    cin >> n;
    long long i;
    long long tracker = 0;
    long long prev = 0;
    for (i=0; i < n; i++) {
        long long temp;
        cin >> temp;
        if (temp < prev) {
            tracker += prev - temp;
            temp = prev;
        }
        prev = temp;
    }
    cout << tracker;

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
