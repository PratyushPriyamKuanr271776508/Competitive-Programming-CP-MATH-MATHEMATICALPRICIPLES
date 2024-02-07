#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007LL

// Function to find power in logN
long long binary_pow(long long a, long long n) {
    long long res = 1;
    while (n) {
        if (n % 2 == 0) {
            a *= a;
            a %= mod;
            n /= 2;
        } else {
            res *= a;
            res %= mod;
            n--;
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        long long ans;
        // Get all possible images with three colors
        ans = binary_pow(3, N * N);

        // Remove images with only two colors
        ans -= (3 * binary_pow(2, N * N)) % mod;

        while (ans < 0) {
            ans += mod;
        }

        // Add images with only one color
        ans += 3 * binary_pow(1, N * N);

        ans %= mod;
        cout << ans << "\n";
    }

    return 0;
}