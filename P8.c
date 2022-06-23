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
} */

//上面两个例子都有计算数组右侧下标，纯数组可以用sizeof(arr)/sizeof(arr[0])-1
//如果用字符串给数组赋值，这时候可以用sizeof(arr)/sizeof(arr[0])-2，因为数组内部是字符串+'\0';
//也可以用strlen(arr)-1;
// sizeof计算的是分配空间的实际字节数；
// strlen计算的是空间中字符的个数，不包括'\0'
// sizeof是运算符；strlen是函数，只能以char*(字符串)做参数。想要得到结果，必须包含'\0'
// sizeof编译的时候就将结果计算出来了，是类型所占空间的字节数，数组名做参数时，是整个数组的大小。
// strlen是运算的时候才开始计算结果，是计算的结果，不是类型所占内存的大小，数组名退化为指针。
// strlen参数必须是字符型指针（char*）。当数组名作为参数传入时，实际上数组就退化成指针了。
//数组做sizeof的参数不退化，传递给strlen就退化为指针了。
// sizeof 不能计算动态分配空间的大小。
// sizeof后如果是类型必须加括弧，如果是变量名可以不加括弧。这是因为sizeof是个操作符不是个函数
//数组作为参数传给函数时传的是指针而不是数组，传递的是数组的首地址，
// fun(char[8])
//     fun(char[])
//         都等价于 fun(char *)

// exg1
/* #include <stdio.h>
#include <string.h>
int main()
{
  char str[20] = "hello world";
  char *s = (char *)malloc(20);
  strcpy(s, str);
  printf("strlen(str)=%d\n", strlen(str));
  printf("sizeof(str)\n", sizeof(str));
  printf("strlen(s)=%d\n", strlen(s));
  printf("sizeof(s)\n", sizeof(s));//计算的是指针大小
} */

// exg2
/* #include <stdio.h>
#include <string.h>

int main()
{
  char str1[] = "0123456789";
  int a = sizeof(str1); // a=11
  int b = strlen(str1); // b=10
  int i = sizeof(*str1);
  printf("%d\t%d\t%d\n", a, b, i);

  char str2[20] = "0123456789";
  int c = sizeof(str2);
  int d = strlen(str2);
  printf("%d\t%d\n", c, d);

  char *str3 = "0123456789";
  int e = sizeof(str3);//str3是字符指针，
  int f = strlen(str3);
  int g = sizeof(*str3);//第一个字符所占空间
  printf("%d\t%d\t%d\n", e, f, g);

  int h = sizeof(char);
  printf("%d\n", h);

  int str4[20] = "0123456789"; //执行不下去，变量类型都不一样
  int j = sizeof(str4); //
  // int k = strlen(str4);//错误
  int l = sizeof(*str4); //
  printf("%d\t%d\n", j, l);

  return 0;
} */

//登录三次
/* #include <stdio.h>
#include <string.h>
int main()
{
  int i = 0;
  for (i = 0; i < 3;i++)
  {
    char password[20] = {0};
    printf("input password:\n");
    scanf("%s", password);
    if(strcmp(password,"123456")==0)//==不能用来比较两个字符串是否相等。
    {
      printf("correct!\n");
      break;
    }
    else
      printf("bad password!\n");
  }
  if(i==3)
    printf("incorrect!\n");
  return 0;
} */
