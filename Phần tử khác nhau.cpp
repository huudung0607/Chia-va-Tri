
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

int main()
{
	int n, k; cin >> n;
	vector<int>a(n), b(n - 1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		cin >> b[i];
	}
	int i = 0, j = 0;
	int pos = -1;
	while (i < n && j < n - 1) {
		if (a[i] > b[j] || a[i] < b[j]) {
			pos = i;
			break;
		}
		else {
			i++;
			j++;
		}
	}
	cout << pos + 1;
}

