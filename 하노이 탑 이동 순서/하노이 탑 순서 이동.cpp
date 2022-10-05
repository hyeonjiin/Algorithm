#include <iostream>
#include <math.h>
using namespace std;
void hanoi(int n, int start, int end, int pass)
{
	if (n == 1)
	{
		cout << start << " " << end << "\n";
	}
	else
	{
		hanoi(n - 1, start, pass, end);
		cout << start << " " << end << "\n";
		hanoi(n - 1, pass, end, start);
	}
}
int main()
{
	int k;
	cin >> k;
	cout << (int)pow(2,k) - 1 << "\n";
	hanoi(k, 1, 3, 2);