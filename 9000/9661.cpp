#include <bits/stdc++.h>
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

#define INF (INT_MAX / 2)

#define MAX_N 10005

ll n;

int main() {
	ios_base::sync_with_stdio(false); std::cin.tie(NULL);

	string arr[] = { "CY", "SK", "CY", "SK", "SK" };
	cin >> n;
	cout << arr[n % 5] << endl;

	return 0;
}