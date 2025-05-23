
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
long long F[105];
char find(int n, long long k) {
	if (n == 0) {
		if (k == 1) return 'g';
		else return 'o';
	}
	if (k <= F[n - 1]) {
		return find(n - 1, k);
	}
	else if (k <= F[n - 1] + n + 3) {
		if (k == F[n - 1] + 1) return 'g';
		else return 'o';
	}
	else {
		return find(n - 1, k - F[n - 1] - n - 3);
	}
}
int main()
{
	F[0] = 3;
	for (int i = 1; i <= 60; i++) {
		F[i] = F[i - 1] + i + 3 + F[i - 1];
	}
	int t;
	cin >> t;
	while (t--) {
		long long k;
		cin >> k;
		cout << find(60, k) << endl;
	}
}

