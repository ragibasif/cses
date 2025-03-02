#include <algorithm> // sort, binary_search, lower_bound, upper_bound
#include <bitset> // bitset - for binary data
#include <cassert> // assert - for debugging
#include <climits> //INT_MAX, INT_MIN
#include <cmath> // sqrt, pow, abs
#include <cstdint> // int64_t, uint64_t, etc. - fixed-width integer types
#include <functional> // greater, less - function objects and operations
#include <iostream> // cout, cin, endl - Input/Output
#include <iterator> // iterators and related items
#include <numeric> // accumulate, gcd, lcm - numeric operations
#include <map> // map, multimap - (non-hashed, tree) ordered key-value pairs
#include <queue> // queue, priority_queue
#include <set> // set, multiset - (non-hashed, tree) ordered set
#include <stack> // stack
#include <string> // string
#include <tuple>
#include <unordered_map> // unordered_map - hash map
#include <unordered_set> // unordered_set - hash set
#include <utility> // pair
#include <vector> // vector - dynamic array

using namespace std; // removes the need to use std::
void solve();


void solve() {
    int n;
    cin >> n;
    cout << "n: " << n;
}

int main() {

    /*Fast I/O*/
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testcases;
    testcases = 1;
    /*cin >> testcases;*/
    while (testcases--) {
        solve();
        cout << "\n";
    }
    cout << endl;

    return 0;
}

