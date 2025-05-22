
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
const int mod = 1e9 + 7;
struct matrix {
	long long a[2][2];
	friend matrix operator * (matrix x, matrix y) {
		matrix res;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				res.a[i][j] = 0;
				for (int k = 0; k < 2; k++) {
					res.a[i][j] += x.a[i][k] * y.a[k][j];
					res.a[i][j] %= mod;
				}
			}
		}
		return res;
	}
};
matrix binpow(matrix x, long long n) {
	if (n == 1)
		return x;
	matrix tmp = binpow(x, n / 2);
	if (n % 2 == 1) {
		return tmp * tmp * x;
	}
	else return tmp * tmp;
}
int main()
{
	matrix x;
	x.a[0][0] = 1, x.a[0][1] = 1, x.a[1][0] = 1, x.a[1][1] = 0;
	long long n;
	cin >> n;
	matrix res = binpow(x, n);
	cout << res.a[0][1] << endl;
}

