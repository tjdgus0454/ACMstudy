#include <iostream>
using namespace std;

int main() {

	int input;
	cin >> input;
	for (int i = input-1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			cout << ' ';
		for (int j = input; j > i; j--)
			cout << '*';
		cout << "\n";
	}
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < i; j++)
			cout << ' ';
		for (int j = input; j > i; j--)
			cout << '*';
		cout << "\n";
	}

	return 0;
}