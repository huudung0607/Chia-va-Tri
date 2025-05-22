
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
long long F[100];
char find(long long n, long long k) {
	if (n == 1) return 'A';
	if (n == 2) return 'B';
	if (k <= F[n - 2]) {
		return find(n - 2, k);
	}
	else return find(n - 1, k - F[n - 2]);
}
int main()
{
	F[1] = 1;
	F[2] = 1;
	for (int i = 3; i <= 92; i++) {
		F[i] = F[i - 1] + F[i - 2];
	}
	long long n, k;
	cin >> n >> k;
	cout << find(n, k) << endl;
}

