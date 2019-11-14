#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool E(vector<string> v)   //≈–∂œ «∑Ò∞¥◊÷µ‰≈≈–Ú
{
	for (int i = 0; i < v.size() - 1; i++)
	{
		if (v[i] > v[i + 1])
			return false;
	}
	return true;
}

bool L(vector<string> v)    //≈–∂œ «∑Ò∞¥≥§∂»≈≈–Ú
{
	for (int j = 0; j < v.size() - 1; j++)
	{
		if (v[j].size() > v[j + 1].size())
			return false;
	}
	return true;
}

int main()
{
	vector<string> v;
	int n = 0;
	cin >> n;
	string s;

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		v.push_back(s);
	}

	if (E(v) && L(v))
		cout << "both" << endl;
	else if (E(v) && !L(v))
		cout << "lexicographically" << endl;
	else if (!E(v) && L(v))
		cout << "lengths" << endl;
	else
		cout << "none" << endl;

	system("pause");
	return 0;
}
