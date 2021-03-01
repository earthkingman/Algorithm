#include <stdio.h>
int cnt[50001]; //전역변수로 선언하면 0으로 초기화 됨
int main()
{

    int n,i,j;    

     scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j = j + i)
        {
            cnt[j]++; 
        }
    }
   for (i = 1; i <=n; i++)
   {
       printf("%d ", cnt[i]);
   }
}