/* #include <stdio.h>
int main()
{
  int i;
  int j;
  for (i = 0; i < 10;i++)
  {
    for (j = 0; j < 10;j++)
    {
      printf("hehe");
    }
  }
} */

// for循环变种1
/* #include <stdio.h>
int main()
{
  int i = 0;
  int j = 0;
  for (; i < 10; i++)//刚进入for语句，先执行赋值，没有就略过。
  {
    for (; j < 10; j++)
    {
      printf("hehe");
    }
  }
} */

// for 循环变种2
/* #include <stdio.h>
int main()
{
  int i;
  int j;
  for (i = 0, j = 0; i < 2 && j < 5; i++, j++) //刚进入for语句，先执行赋值，没有就略过。
  {
    printf("hehe\n");
  }
  return 0;
} */

/* #include <stdio.h>
int main()
{
  int i=0;
  int j=0;
  for (; i < 2 && j < 5; i++, j++) //刚进入for语句，先执行赋值，没有就略过。
  {
    printf("hehe");
  }
  return 0;
}
 */

//循环多少次？
/* #include <stdio.h>
int main()
{
  int i=0;
  int j=0;
  for (i=0,j=0; j=0; i++, j++) //j=0,是赋值，值是0，为假......j 赋值 非0 ，就是死循环
  {
    printf("%d\n",j++);
  }
  return 0;
} */

// do  while()
//正常
/* #include <stdio.h>
int main()
{
  int i = 1;
  do
  {
    printf("%d", i);
    i++;
  } while (i <= 10);
  return 0;
} */

// do  while()
//break，终止循环
/* #include <stdio.h>
int main()
{
  int i = 1;
  do
  {
    if(i==5)
      break;
    printf("%d", i);
    i++;
  } while (i <= 10);
  return 0;
} */

// do  while()
// continue,跳过此次循环
/* #include <stdio.h>
int main()
{
  int i = 1;
  do
  {
    if (i == 5)
      continue;
    printf("%d", i);
    i++;
  } while (i <= 10);
  return 0;
}
 */

//1.n的阶乘
/* #include <stdio.h>
int JC(int n)
{
  int i = 1;
  int s = 1;
  // printf("input n:\n");
  // scanf("%d", &n);
  for (i = 1; i <= n;i++)
  {
    s = i * s;
  }
    // printf("%d\n", s);
    return s;
}
int JC(int);
#include <stdio.h>
int main()
{
  int i;
  int s = 0;
  for (i = 1; i <= 3;i++)
  {
    s = JC(i) + s;
  }
  printf("%d\n", s);
} */

//注意ret
/* #include <stdio.h>
int main()
{
  int i;
  int n;
  int ret = 1;
  int s = 0;
  for (n = 1; n <= 3;n++)
    {
      ret = 1;
      for (i = 1; i <= n;i++)
        {
          ret = i * ret;
        }
      s = s + ret;
    }
    printf("%d\n", s);
  return 0;
}
 */

//优化
/* #include <stdio.h>
int main()
{
  int i;
  int n;
  int ret = 1;
  int s = 0;
  for (n = 1; n <= 3;n++)
    {
      ret = n * ret;
      s = s + ret;
    }
  printf("%d\n", s);
  return 0;
}
 */

//有序数组查找
/* #include <stdio.h>
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int k = 15;
  int i;
  int sz = sizeof(arr) / sizeof(arr[0]);//...
  for (i = 0; i <= sz;i++)
  {
    if (k == arr[i])
    {
      printf("找到了，下标是%d\n", i);//...
      break;
    }
    if(i==sz)
      printf("找不到\n");
  }
  return 0;
} */

//折半查找算法、二分查找算法
