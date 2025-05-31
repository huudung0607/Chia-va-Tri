
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
bool binarySearch(vector<int>a, int l, int r, int x) {
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) return true;
		if (a[m] > x) {
			r = m - 1;
		}
		else l = m + 1;
	}
	return false;
}
int main()
{
	int n, k; cin >> n >> k;
	vector<int>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (binarySearch(a, 0, n - 1, k)) {
		cout << "YES";
	}
	else cout << "NO";
}

