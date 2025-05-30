
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
const long long mod = 1e9 + 7;
long long powmod(long long x, long long y, long long mod) {
	long long res = 1;
	x %= mod;
	while (y) {
		if (y % 2) {
			res = (res * x) % mod;
		}
		x = (x * x) % mod;
		y /= 2;
	}
	return res;
}
int main()
{
	long long n, k;
	cin >> n >> k;
	cout << powmod(n, k, mod) % mod;
}

