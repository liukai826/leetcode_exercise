#include <stdio.h>

//删除有序数组的重复元素

int solution(int list[], int n)
{
    if (n == 0)
        return 0;
    int j = 0;
    for(int i = 1; i < n; i++)
    {
        if (list[j] != list[i])
        {
            list[++j] = list[i];
        }
    }
    return j + 1;

}

void main()
{
    int list[] = {1, 2, 2, 3, 4};
    printf("%d", solution(list, 5));
}
