#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,m,temp;
	int count = 0;
	int sum = 0;
	scanf("%d", &n);
	temp = n;
	m = n;
	while (n)
	{
		n = n / 10;
		count++;
	}
	int a = count;
	while (count--)
	{
		sum += pow(m%10, a);
		m = m / 10;
	}
	if (sum == temp)
		printf("%d是一个水仙花数\n", temp);
	else
		printf("%d不是一个水仙花数\n", temp);
}
//#include<stdio.h>
//int main()
//{
//	int x, y;
//	int i;
//	int sum=0, temp = 0;
//	scanf("%d %d", &x, &y);
//	for (i = 0; i < y; i++)
//	{
//		temp = temp * 10 + x;
//		sum += temp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void reverse(char arr[])
//{
//	char temp = arr[0];
//	int s = strlen(arr);
//	arr[0] = arr[s - 1];
//	arr[s - 1] = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse(arr + 1);
//	arr[s - 1] = temp;
//}
//int main()
//{
//	char arr[] = "uoy evol i";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//void reverse(char* p,int s)
//{
//	for (int i = 0; i < s / 2; i++)
//	{
//		char temp = *(p + i);
//		*(p + i) = *(p + s - i-1);
//		*(p + s - i-1) = temp;
//	}
//	for (int j = 0; j < s; j++)
//	{
//		printf("%c", *(p + j));
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int s = strlen(arr);
//	reverse(&arr,s);
//	return 0;
//}

//#include<stdio.h>
//void Print(int*	p)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	Print(&arr);
//	return 0;
//}




//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	x = x ^ y;
//	y = x ^ y;
//	x = x ^ y;
//	printf("%d %d", x, y);
//}
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	x = x + y;
//	y = x - y;
//	x = x - y;
//	printf("%d %d", x, y);
//	return 0;
//}




//void get_odd_bit(n)
//{
//	printf("odd:");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		int x = n >> i & 1;
//		printf("%d ", x);
//	}
//	printf("\n");
//}
//void get_even_bit(n)
//{
//	printf("even:");
//	for (int i = 31; i > 0; i -= 2)
//	{
//		int x = n >> i & 1;
//		printf("%d ", x);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	get_odd_bit(n);
//	get_even_bit(n);
//	return 0;
//}



//int How_diff_bit(m, n)
//{
//	int count = 0;
//	int temp = m ^ n;
//	while (temp)
//	{
//		temp = temp & (temp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m,n;
//	scanf("%d %d",&m ,&n);
//	How_diff_bit(m, n);
//	int count = How_diff_bit(m, n);
//	printf("%d\n", count);
//	return 0;
//}




//int get_one_count(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int get_one_count(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int get_one_count(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	get_one_count(n);
//	int count = get_one_count(n);
//	printf("count = %d\n", count);
//	return 0;
//}