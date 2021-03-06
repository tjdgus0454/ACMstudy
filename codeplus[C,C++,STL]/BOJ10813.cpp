#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning(disable : 4996) 
using namespace std;

int main()
{

	int n, m;
	scanf("%d %d", &n, &m);
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		v[i] = i + 1;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		swap(v[a - 1], v[b - 1]);
	}

	for (int i : v)
		printf("%d ", i);

	return 0;
}