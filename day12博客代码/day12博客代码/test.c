#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void my_reverse(char* pb,char* pe)
//{
//	while(pb < pe)
//	{
//		char t = *pb;
//		*pb = *pe;
//		*pe = t;
//		pb++;
//		pe--;
//	}
//}
//void reverse(char* cur)
//{
//	char* ret = cur;
//	char* pb = cur;
//	char* pe = cur;
//	while(*pe != '\0')
//	{
//		pe++;
//	}
//	pe--;
//	my_reverse(pb,pe);		
//	 while (*cur)
//    {	
//		
//		char* end = NULL;		
//        char* start = cur;		
//        while ((*cur != ' ') && (*cur != '\0'))
//        {
//            cur++;
//        }
//        //找到空格
//		end = cur-1;
//        my_reverse(start,end);//逆序单个单词
//        if (*cur == ' ')
//            cur++;
//    }
//	  printf("%s",ret);
//	
//    
//}
//int main()
//{
//	char arr[] = "i am a student.";
//	reverse(arr);	
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int a = 0;
//	int n = 0;
//	printf("请输入你要转换的数字\n");
//	scanf("%d",&n);	
//	for(i = 0; i < 32; i++)
//	{
//		a = ((n>>i)&1);
//		sum = sum + a * pow(2,31-i);
// 	}
//	printf("%u",sum);
//	return 0;
//}
//
//#include<stdio.h>
//int print(unsigned int n)
//{
//	int value = 0;
//	int i = 0;
//	int m = 0;
//	for(i = 0; i < 32; i++)
//	{
//		value = value<<1;
//		m = (n>>i)&1;
//		value = m^value;
//	}
//	return value;
//}
//int main()
//{
//	int input = 0;
//	printf("请输入你想转换的数字\n");
//	scanf("%d",&input);
//	print(input);
//	printf("%u",print(input));
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 7;
//	int aver = 0;
//	aver = (a & b)+((a ^ b)>>1);
//	printf("%d",aver);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	int arr[5] = {1,2,3,2,1};
//	for(i = 0; i < 5; i++)
//	{
//		ret^=arr[i];
//
//	}
//	printf("%d\n",ret);
//	return 0;
//}



