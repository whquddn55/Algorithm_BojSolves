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

#define MAX_N 80

int n;
int arr[MAX_N];

bool get(int idx) {
	if (idx == n)
		return true;
	for (int i = 1; i <= 3; i++) {
		arr[idx] = i;

		bool check = false;
		for (int j = 1; j <= idx  && !check; j += 2) {
			bool t1 = true;
			for (int k = idx - j; k < idx - j + (j + 1) / 2 && t1; k++)
				if (arr[k] != arr[k + (j + 1) / 2])
					t1 = false;
			check = t1;
		}
		if (check)
			continue;


		if (get(idx + 1))
			return true;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin >> n;
	get(0);
	for (int i = 0; i < n; i++)
		cout << arr[i];
	cout << endl;

	return 0;
}