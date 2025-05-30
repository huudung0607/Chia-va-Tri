
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
int result(int n, long long k) {
	if (k % 2 == 1) return 1;
	if (k < pow(2, n - 1)) {
		return result(n - 1, k);
	}
	else if (k == pow(2, n - 1)) {
		return n;
	}
	else return result(n - 1, 1ll * k - (pow(2, n - 1)));

}
int main()
{
	int n;long long k;
	cin >> n >> k;
	cout << result(n, k);
}

