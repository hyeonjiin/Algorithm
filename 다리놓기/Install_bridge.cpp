#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int ans = 1;
		int a, b;
		cin >> a >> b;
		for (int j = 0; j < a; j++)
		{
			ans = ans * (b - j);
			ans = ans / (j + 1);
		}
		cout << ans<<"\n";
	}

}