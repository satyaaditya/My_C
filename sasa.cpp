#include <stdio.h>

int main() {
	char operatorr;
	long long n, a, res;

	scanf("%lld", &n);
	while (n--) {
		operatorr = 0;
		scanf("%lld", &res);
		while (1) {
			scanf("%s", &operatorr);
			if (operatorr == '=') {
				break;
			}

			scanf("%lld", &a);
			switch (operatorr) {
			case '+':
				res += a;
				break;
			case '-':
				res -= a;
				break;
			case '*':
				res *= a;
				break;
			case '/':
				res /= a;
				break;
			}
		}
		printf("%lld\n", res);
	}

	return 0;
}