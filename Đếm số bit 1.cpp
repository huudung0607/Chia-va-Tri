
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
int bac(long long n) {
	int cnt = 0;
	while (n) {
		n /= 2;
		cnt++;
	}
	return cnt;
}
long long H[64];
void xuly() {
	H[0] = 1;
	for (int i = 1; i <= 40; i++) {
		H[i] = H[i - 1] * 2;
	}
}
int tim(int b, long long n, long long k) {
	long long mid = H[b - 1];
	if (k == mid) return n % 2;
	else if (k < mid) return tim(b - 1,n/2, k);
	else return tim(b - 1, n/2, k - mid);
}

int main()
{
	xuly();
	long long n, l, r;
	cin >> n >> l >> r;
	int cnt = 0;
	int b = bac(n);
	for (long long i = l; i <= r; i++) {
		cnt += tim(b, n, i);
	}
	cout << cnt;

}

