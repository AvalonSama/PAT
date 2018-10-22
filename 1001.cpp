#include <cstdio>  
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	char ans[100];
	while (~scanf("%d %d", &a, &b)) {
		memset(ans, 0, sizeof(ans));
		int sum = a + b;
		int t = 0;
		if (sum < 0)
			printf("-");
		int p=0;
		sum = abs(sum);
		if (sum == 0)
			printf("0\n");
		else {
			while (sum) {
				ans[t++] = '0' + sum % 10;
				p++;
				sum /= 10;
				if (p % 3 == 0 && sum != 0) {
					ans[t++] = ',';
				}
			}
			while (t--) {
				printf("%c", ans[t]);
			}
			printf("\n");
		}
	}
	return 0;
}