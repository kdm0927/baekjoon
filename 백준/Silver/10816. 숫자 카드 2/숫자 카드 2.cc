#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int N, M, n;
	vector<int> v;

	cin >> N;
	while (N--)
	{
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());

	cin >> M;
	while (M--)
	{
		cin >> n;
		cout << std::upper_bound(v.begin(), v.end(), n)
			- lower_bound(v.begin(), v.end(), n) << ' ';
	}
}