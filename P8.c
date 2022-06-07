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
// break，终止循环
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

// 1.n的阶乘
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
/* #include <stdio.h>
int main()
{
  int k = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sz = sizeof(arr) / sizeof(arr[0]);
  int left = 0;
  int right = sz - 1;
  while (left <= right)
  {
    int mid = (left + right) / 2;
    if (arr[mid] > k)
      right = mid - 1;
    else if (arr[mid] < k)
      left = mid + 1;
    else
    {
      printf("找到了，下标是：%d\n", mid);
      break;
    }
  }
  while (left>right)
  {
    printf("找不到\n");
  }
  return 0;
} */

//演示多个字符从两端移动，向中间汇聚
/* #include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
  char arr1[] = "welcome to bit!!!!!!";
  char arr2[] = "####################";
  int left = 0;
  // int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
  int right = strlen(arr1) - 1;
  while (left <= right)
  {
    arr2[left] = arr1[left];
    arr2[right] = arr1[right];
    printf("%s\n", arr2);
    Sleep(1000);   //#include <windows.h>
    system("cls"); //#include <stdlib.h>
    left++;
    right--;
  }
  return 0;
}
 */
//登录三次
#include <stdio.h>
int main()
{
  int i = 0;
  for (i = 0; i < 3;i++)
  {
    int i = 0;
    char password[20] = {0};
    printf("input password:\n");
    scanf("%s", password);
    if(strcmp(password,"123456")==0)//==不能用来比较两个字符串是否相等。
    {
      printf("correct!\n");
      break;
    }
  }
  if(i==3)
    printf("incorrect!\n");
  return 0;
}
