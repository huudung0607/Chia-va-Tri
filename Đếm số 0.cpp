
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
	int n;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == 0) a.push_back(x);
	}
	cout << a.size();
}

