
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
long long powmod(long long n, long long k, long long mod) {
	long long res = 1;
	n %= mod;
	while (k != 0) {
		if (k % 2 == 1) {
			res = (res * n) % mod;
		}
		n = (n * n) % mod;
		k /= 2;
	}
	return res;
}
int main()
{
	string s;
	cin >> s;
	long long a = stoll(s);
	reverse(s.begin(), s.end());
	long long b = stoll(s);
	cout << powmod(a, b, mod) % mod;
}

