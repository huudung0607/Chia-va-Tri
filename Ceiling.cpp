
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
int binarySearch(vector<int>a, int l, int r, int x) {
	int res = -1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] <= x) {
			res = m;
			l = m + 1;
		}
		else r = m - 1;
	}
	return res;
}
int main()
{
	int n, k; cin >> n >> k;
	vector<int>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int pos = binarySearch(a, 0, n - 1, k);
	cout << a[pos];
}

