#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		string str1;
		int sum = 0;
		int ans = 1;
		cin >> str1;
		for (int j = 0; j < str1.length(); j++)
		{
			if (ans == 1)
			{
				if (str1[j] == '(')
				{
					sum += 1;
				}
				else
				{
					sum -= 1;
				}
				if (sum < 0)
				{
					ans = 0;
				}
			}
		}
		if (ans == 1 && sum==0)
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
	}
}
