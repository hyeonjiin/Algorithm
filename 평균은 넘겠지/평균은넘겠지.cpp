#include <iostream>
#include <string>
using namespace std;

int main()
{
	int c;
	int n;
	double ans;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin >> n;
		int student[1010];
		int num = 0;
		int avg = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> student[j];
			avg += student[j];
		}
		avg = avg / n;
		for (int j = 0; j < n; j++)
		{
			if (avg < student[j])
			{
				num++;
			}
		}
		ans = (double)num / n * 100;

		cout << fixed;
		cout.precision(3);
		cout << ans << "%" << endl;
	}

}