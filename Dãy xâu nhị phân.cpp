
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
long long F[1001];
int find(int n, long long k) {
	if (n == 1) return 0;
	if (n == 2) return 1;
	if (k <= F[n - 2]) {
		return find(n - 2, k);
	}
	else if(k > F[n - 2] && k <= F[n - 1]) 
		return find(n - 1, k - F[n - 2]);
}
int main()
{
	F[1] = 1;
	F[2] = 1;
	for (int i = 3; i <= 92; i++) {
		F[i] = F[i - 2] + F[i - 1];
	}
	int n; long long k;
	cin >> n >> k;
	cout << find(n, k);
}

