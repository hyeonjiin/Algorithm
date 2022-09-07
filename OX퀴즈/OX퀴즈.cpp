#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string str1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str1;
		int sum = 0,e=0;
		for (int j = 0; j < str1.length(); j++)
		{
			if (str1[j] == 'O')
			{
				e++;
			}
			else
			{
				e = 0;
			}
			sum += e;
		}
		cout << sum << "\n";
	}
}