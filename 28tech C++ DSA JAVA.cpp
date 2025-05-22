
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
long long F[1000];
string check(long long n, long long k) {
	if (n == 1) return "28tech";
	if (n == 2) return "C++";
	if (n == 3) {
		if (k == 1) return "DSA";
		else return "JAVA";
	}
	if (k <= F[n - 3]) {
		return check(n - 3, k);
	}
	else if (k <= F[n - 3] + F[n - 2]) {
		return check(n - 2, k - F[n - 3]);
	}
	else return check(n - 1, k - F[n - 3] - F[n - 2]);
}
int main()
{
	F[1] = 1;
	F[2] = 1;
	F[3] = 2;
	for (int i = 4; i <= 60; i++) {
		F[i] = F[i - 3]+ F[i - 2] + F[i - 1];
	}
	int t;	
	cin >> t;
	while (t--) {
		long long n, k;
		cin >> n >> k;
		cout << check(n, k) << endl;
	}
}

