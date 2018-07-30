#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

ostream& operator<<(ostream& os, const pii& pai) {
	os << pai.first << ' ' << pai.second;
	return os;
}

istream& operator>>(istream& is, pii& pai) {
	is >> pai.first >> pai.second;
	return is;
}

#ifdef ONLINE_JUDGE
#define endl '\n'
#endif

#define INF (INT_MAX / 2)

#define MAX_N 9

int n, m;
int arr[MAX_N];
bool isPicked[MAX_N];

void get(vector<int>& picked, int remain) {
	if (remain == 0) {
		for (auto e : picked)
			cout << arr[e] << ' ';
		cout << endl;
		return;
	}

	for (int i = 0; i < n; i++) {
		if (!isPicked[i] && (picked.empty() ? 0 : arr[picked.back()]) < arr[i]) {
			picked.push_back(i);
			isPicked[i] = true;
			get(picked, remain - 1);
			picked.pop_back();
			isPicked[i] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); std::cin.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);

	vector<int> picked;
	get(picked, m);

	return 0;
}