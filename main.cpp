#include <bits/stdc++.h>
using namespace std;
/* TYPES  */
#define int long long
#define mask(x) (1ll << x)
#define all(x) x.begin(), x.end()
/* FUNCTIONS */
void mimi(int & a, int b) { a = min(a, b); }
void lulu(int & a, int b) { a = max(a, b); }
int gcd(int a, int b) { if (b==0) return a; return gcd(b, a%b); }
int lcm(int a, int b) { return a/gcd(a,b)*b; }
/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

const double PI = acos(-1);
const int MOD = 1e9 + 7;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while (t--) {
        
    }
    return 0;
}