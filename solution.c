//在数组中查找值，删除并返回新长度

#include <stdio.h>

int solution(int a[], int n, int elem)
{
	int i = 0, j =0;
	for (i; i < n; i++)
	{
		if (a[i] == elem)
			continue;
		a[j] = a[i];
		j++;
	}
	return j;
}

int main()
{	
	int list_a[] = {1, 2, 3};
	int len = solution(list_a, 3, 0);
	printf("%d", len);
}
