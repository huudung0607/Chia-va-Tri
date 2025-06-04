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
struct matran {
	long long a[100][100];
	long long n;
	friend matran operator * (matran x, matran y) {
		matran res;
		res.n = x.n;
		for (int i = 0; i < x.n; i++) {
			for (int j = 0; j < x.n; j++) {
				res.a[i][j] = 0;
				for (int k = 0; k < x.n; k++) {
					res.a[i][j] += x.a[i][k] * y.a[k][j];
					res.a[i][j] %= mod;
				}
			}
		}
		return res;
	}
};
matran binpow(matran n, long long k) {
	if (k == 1) return n;
	matran tmp = binpow(n, k / 2);
	if (k % 2 == 0) {
		return tmp * tmp;
	}
	else return tmp * tmp * n;
}
int main()
{
	long long n;
	cin >> n;
	matran mt;
	mt.n = 2;
	mt.a[0][0] = mt.a[0][1] = mt.a[1][0] = 1;
	mt.a[1][1] = 0;
	matran res = binpow(mt, n);
	cout << res.a[0][1];
}
