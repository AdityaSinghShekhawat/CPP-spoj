#include <cstdio>
using namespace std;

long long int power(long long int a, long long int b)
{
	long long int p, q;
	p = a % 10;
	q = b % 4;
	if (b == 0)
		return 1;
	else if ((p == 1) || (p == 5) || (p == 6) || (p == 0))
		return p;
	else if (q == 1)
		return p;
	else if (q == 2)
		return (p * p) % 10;
	else if (q == 3)
		return (p * p * p) % 10;
	else if (q == 0)
		return (p * p * p * p) % 10;
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		long long int a, b;
		scanf("%lld%lld", &a, &b);
		printf("%lld\n", power(a, b));
	}
	return 0;
}