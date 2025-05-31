
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
void merge(vector<int>& a, int l, int m, int r) {
	int x1 = m - l + 1;
	int y1 = r - m;
	vector<int> x(x1);
	vector<int> y(y1);
	for (int i = 0; i < x1; i++) {
		x[i] = a[l + i];
	}
	for (int i = 0; i < y1; i++) {
		y[i] = a[m + i + 1];
	}
	int index = l;
	int i = 0, j = 0;
	while (i < x1 && j < y1) {
		if (x[i] <= y[j]) {
			a[index++] = x[i++];
		}
		else if (x[i] >= y[j]) {
			a[index++] = y[j++];
		}
	}
	while (i < x1) {
		a[index++] = x[i++];
	}
	while (j < y1) {
		a[index++] = y[j++];
	}
}
void mergeSort(vector<int>& a, int l, int r) {
	if (l < r) {
		int m = (l + r) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m, r);
	}
}
int main()
{
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	mergeSort(a, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

