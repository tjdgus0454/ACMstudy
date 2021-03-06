#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int line;
	cin >> line;

	for (int i = 0; i < line; i++)
	{
		int a, b;
		cin >> a >> b;

		int temp1 = a, temp2 = b;
		while (temp2 != 0)
		{
			int temp = temp2;
			temp2 = temp1 % temp2;
			temp1 = temp;
		}
		int GCD = temp1;
		int LCM = a * b / GCD;
		cout << LCM << '\n';
	}
	return 0;
}