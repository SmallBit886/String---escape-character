#define _CRT_SECURE_NO_WARNINGS 1

/***********************************************字符串+转义字符+注释**************************************************/
#include <stdio.h>

int main()
{
	//数据在计算机上的储存是二进制[ASCII编码]
	//#av$
	//a-97
	//A-65


	"abcdefg";
	char arr1[] = "abc";//数组
	//"abc"=  'a','b','c','\0'  ------------- '\0'字符串的结束标志   【转义字符】   '\n'换行
	printf("%s\n", arr1);	//abc
	"";//空字符串
	char arr2[] = { 'a','b','c','\0' };//加结束标志
	printf("%s\n", arr2);	//abc
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//3

	return 0;
}


///***********************************************转义字符**************************************************/
//
//int main()
//{
//	//printf("c:\\text\\32\\text.c");
//	printf("%c\n", 'b');	//b
//	printf("%c\n",'\'');	//'
//	printf("%s\n", "abc");	//abc
//	printf("%s\n","\"");	//"
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	printf("%c\n", '\32');//32代表两个8进制数   32=26	//
//	printf("%c\n", '\132');								//Z
//	printf("%s\n", "\x61");//61代表16进制数    61= 97	//A
//
//	printf("%zd\n", strlen("c:\text\32\text.c"));		//13
//
//
//
//	return 0;
//}