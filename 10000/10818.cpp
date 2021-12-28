#include <bits/stdc++.h>
#pragma GCC target("avx2")
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

template<typename a, typename b>
ostream& operator<<(ostream& os, const pair<a, b>& pai) {
    os << pai.first << ' ' << pai.second;
    return os;
}
template<typename a, typename b>
istream& operator>>(istream& is, pair<a, b>& pai) {
    is >> pai.first >> pai.second;
    return is;
}

#ifdef ONLINE_JUDGE
#define endl '\n'
#endif

#define all(x) x.begin(), x.end()
#define INF (INT_MAX / 2)
#define MAX_N 3005
#define MOD 1'000'000'007

int n;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    int minV = INF, maxV = -INF;
    while(n--) {
        int a;
        cin >> a;
        minV = min(minV, a);
        maxV = max(maxV, a);
    }
    cout << pii(minV, maxV) << endl;
    
    return 0;
}
