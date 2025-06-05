
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;
long long res = -INT_MAX;
long long pre[1000006];
long long solve(long long a[], int l, int r) {
	if (l == r) {
		return a[l];
	}
	int m = (l + r) / 2;
	long long tmpl = a[m], tmpr = a[m + 1];
	for (int i = l; i < m; i++) {
		tmpl = max(tmpl, pre[m] - pre[i - 1]);
	}
	for (int i = m + 1; i <= r; i++) {
		tmpr = max(tmpr, pre[i] - pre[m]);
	}
	return max({ tmpl + tmpr,solve(a,l,m),solve(a,m + 1,r) });
}
long long a[1000006];
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	pre[0] = 0;
	for (int i = 1; i <= n; i++) {
		pre[i] = a[i] + pre[i - 1];
	}
	cout << solve(a, 1, n);
}

