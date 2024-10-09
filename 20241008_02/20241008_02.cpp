#include <iostream>
using namespace std;

int Sum(int x, int y);

int main()
{
	int x = 3, y = 5;

	int ans = Sum(x, y);

	cout << x << " + " << y << " = " << ans << endl;
}