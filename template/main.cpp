#include <iostream> // std::cout, std::cin, std::endl - Input/Output
#include <vector> // std::vector - dynamic array
#include <string> // std::string
#include <algorithm> // std::sort, std::binary_search, std::lower_bound, std::upper_bound
#include <cassert> // assert - for debugging
#include <unordered_map> // std::unordered_map - hash map
#include <unordered_set> // std::unordered_set - hash set
#include <queue> // std::queue, std::priority_queue
#include <stack> // std::stack
#include <set> // std::set, std::multiset - (non-hashed, tree) ordered set
#include <map> // std::map, std::multimap - (non-hashed, tree) ordered key-value pairs
#include <bitset> // std::bitset - for binary data
#include <utility> // std::pair
#include <cmath> // sqrt, pow, abs
#include <climits> //INT_MAX, INT_MIN
#include <cstdint> // int64_t, uint64_t, etc. - fixed-width integer types
#include <functional> // std::greater, std::less - function objects and operations
#include <iterator> // iterators and related items
#include <numeric> // std::accumulate, std::gcd, std::lcm - numeric operations
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
