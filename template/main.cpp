#include <iostream> // cout, cin, endl - Input/Output
#include <vector> // vector - dynamic array
#include <string> // string
#include <algorithm> // sort, binary_search, lower_bound, upper_bound
#include <cassert> // assert - for debugging
#include <unordered_map> // unordered_map - hash map
#include <unordered_set> // unordered_set - hash set
#include <queue> // queue, priority_queue
#include <stack> // stack
#include <set> // set, multiset - (non-hashed, tree) ordered set
#include <map> // map, multimap - (non-hashed, tree) ordered key-value pairs
#include <bitset> // bitset - for binary data
#include <utility> // pair
#include <cmath> // sqrt, pow, abs
#include <climits> //INT_MAX, INT_MIN
#include <cstdint> // int64_t, uint64_t, etc. - fixed-width integer types
#include <functional> // greater, less - function objects and operations
#include <iterator> // iterators and related items
#include <numeric> // accumulate, gcd, lcm - numeric operations
using namespace std; // removes the need to use std::
void fastIO();
void solve();


void solve() {
    int n;
    cin >> n;
    cout << "n: " << n;
}

int main() {

    int t;
    t = 1;
    /*cin >> t;*/
    while (t--) {
        solve();
        cout << "\n";
    }
    cout << endl;

    return 0;
}

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
