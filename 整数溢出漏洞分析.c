#include <stdio.h>							//头文件

int main()									//程序入口
{
	FILE*fp;								//定义文件流指针
	char FileStr[20] = {0};					//定义一个数组

	int integer = 0x10;						//定义一个变量integer

	int multi = 0;							//定义一个变量multi用来存值

	printf("Welcome!\n");					//输出字符串
	printf("Please input an integer to get through：");

	scanf("%d",&multi);						//获取输入的字符串转化为整型并赋值给multi

	integer = integer * multi;				//将integer的值与multi的值相乘
	
	if((multi != 0)&&(integer == 0))		//判断multi的值与integer的值是否符合条件
	{
		printf("You've got the flag：\n");	//符合输出字符串
		if(fp = fopen("flag.txt","r"))		//判断当前文件夹是否存在flag.txt文件并读取
		{
			fgets(FileStr,48,fp);			//读取文件内容输出到控制台
			printf("%s\n",FileStr);
			fclose(fp);
		}
		else								//若不符合输出字符串
		{
			printf("File error!\n");
		}
	}	
	else									//若不符合输出字符串
	{
		printf("Good Bye!\n");
	}
	
	return 0;								//程序结束
}
