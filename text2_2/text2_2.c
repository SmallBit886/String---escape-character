#define _CRT_SECURE_NO_WARNINGS 1

/***********************************************�ַ���+ת���ַ�+ע��**************************************************/
#include <stdio.h>

int main()
{
	//�����ڼ�����ϵĴ����Ƕ�����[ASCII����]
	//#av$
	//a-97
	//A-65


	"abcdefg";
	char arr1[] = "abc";//����
	//"abc"=  'a','b','c','\0'  ------------- '\0'�ַ����Ľ�����־   ��ת���ַ���   '\n'����
	printf("%s\n", arr1);	//abc
	"";//���ַ���
	char arr2[] = { 'a','b','c','\0' };//�ӽ�����־
	printf("%s\n", arr2);	//abc
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//3

	return 0;
}


///***********************************************ת���ַ�**************************************************/
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
//	printf("%c\n", '\32');//32��������8������   32=26	//
//	printf("%c\n", '\132');								//Z
//	printf("%s\n", "\x61");//61����16������    61= 97	//A
//
//	printf("%zd\n", strlen("c:\text\32\text.c"));		//13
//
//
//
//	return 0;
//}