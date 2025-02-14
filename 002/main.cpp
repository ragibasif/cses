#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long s = (n*(n+1))/2;
    long long r = 0;
    for (long long i = 0; i < n-1; i++) {
        long long temp;
        cin >> temp;
        r += temp;
    }
    cout << s - r;
}
