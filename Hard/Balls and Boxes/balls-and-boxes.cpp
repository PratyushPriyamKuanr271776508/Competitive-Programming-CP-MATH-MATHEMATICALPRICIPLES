#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
const int mod = 1e9+7;
#define ll long long

// The Solution class encapsulates the solution to the problem
class Solution {
public:
    int maxLength(int n, int k) {
        // Declare variables for iteration
        int i, j;

        // Declare an array to store factorials modulo MODULO
        int f[1020];
        f[0] = 1;
        const int MODULO = 1000000007;

        // Compute factorials modulo MODULO
        for (i = 1; i <= n; ++i)
            f[i] = ((long long)f[i-1] * i) % MODULO;

        // Declare a 2D array for binomial coefficients
        int c[15][15];
        memset(c, 0, sizeof(c));
        c[0][0] = 1;

        // Compute binomial coefficients
        for (i = 1; i <= k; ++i) {
            c[i][0] = 1;
            for (j = 1; j <= i; ++j)
                c[i][j] = (c[i-1][j] + c[i-1][j-1]) % MODULO;
        }

        // Initialize variables for alternating sign and answer
        int xx = -1;
        int ans = 0;

        // Compute the result using the inclusion-exclusion principle
        for (i = 0; i <= k; ++i) {
            xx *= (-1);
            ans = ((ans + (long long)xx * (long long)f[n-i] * c[k][i] % MODULO) + MODULO) % MODULO;
        }

        // Return the final answer
        return ans;
    }
};

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        int n, s;
        cin >> n >> s;
        Solution obj;

        // Call the maxLength function from the Solution class and print the result
        cout << obj.maxLength(n, s) << "\n";
    }

    // End of the program
    return 0;
}