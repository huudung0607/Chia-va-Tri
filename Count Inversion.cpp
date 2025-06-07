
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
long long merge(int a[], int l, int m, int r) {
	vector<int> v1(a + l, a + m + 1);
	vector<int> v2(a + m + 1, a + r + 1);
	int i = 0, j = 0, k = l;
	long long cnt = 0;
	while (i < v1.size() && j < v2.size()) {
		if (v1[i] <= v2[j]) {
			a[k] = v1[i];
			i++;
			k++;
		}
		else {
			cnt += v1.size() - i;
			a[k] = v2[j];
			j++;
			k++;
		}
	}
	while (i < v1.size()) {
		a[k++] = v1[i++];
	}
	while (j < v2.size()) {
		a[k++] = v2[j++];
	}
	return cnt;
}
long long mergesort(int a[], int l, int r) {
	if (l == r) return 0;
	int m = (l + r) / 2;
	return mergesort(a, l, m) + mergesort(a, m + 1, r) + merge(a, l, m, r);
}
int a[1000006];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << mergesort(a, 0, n - 1);
}

