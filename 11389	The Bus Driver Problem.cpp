#include <stdio.h>
#include <algorithm>
#include <functional>
int n,d,r,p,h,m[100],a[100];
int main() {
	while (scanf("%d %d %d", &n, &d, &r), n || d || r) {
		p=0;
		for(int i=0;i<n;i++)scanf("%d", &m[i]);
		std::sort(m,m+n);
		for(int i=0;i<n;i++)scanf("%d", &a[i]);
		std::sort(a,a+n, std::greater<int>());
		for (int i=0;i<n;i++) {
			h=m[i]+a[i];
			if (h>d)p+=(h-d)*r;
		}
		printf("%d\n", p);
	}
}
