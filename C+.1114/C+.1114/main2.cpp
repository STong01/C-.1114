#include<iostream>
using namespace std;

int main()
{
	int a, b;
	int c = 1;
	cin >> a >> b;
	while (1)
	{
		if (c % a == 0 && c % b == 0)
		{
			cout << c;
			break;
		}
		c++;
	}

	system("pause");
	return 0;
}