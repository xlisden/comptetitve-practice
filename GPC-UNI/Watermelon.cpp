#include <cstdio>

int main()
{
	int w;
	scanf("%d", &w);
	puts((w % 2 == 0 && w != 2) ? "SI" : "NO");
}