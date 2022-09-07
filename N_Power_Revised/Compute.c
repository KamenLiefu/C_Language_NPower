#define _CRT_SECURE_NO_WARNINGS 1
#include "Compute.h"
int index;//要计算的数字的次方
int base;//要计算的数字的底数
unsigned long long sum,sum2=0;//定义无符号的长整型变量sum

void Menu() {//功能菜单提示
	printf("******************************************\n");
	printf("******************************************\n");
	printf("***************           ****************\n");
	printf("*************** 1.compute ****************\n");
	printf("***************           ****************\n");
	printf("***************  2.sum    ****************\n");
	printf("***************           ****************\n");
	printf("***************  0.exit   ****************\n");
	printf("***************           ****************\n");
	printf("******************************************\n");
	printf("******************************************\n");
	system("color 02");//淡绿色
}

void Union(){//公共需要使用的函数
printf("请输入要计算的底数：");
scanf("%d", &base);//从键盘上输入底数
printf("请输入要计算的N此方：");
scanf("%d", &index);//从键盘上输入指数次方
}

void Compute() {//计算操作的函数
	system("color 05");//淡紫色
	Union();
	sum = pow(base, index);//计算base的index次方
	printf("%d的%d次方结果为%llu\n", base, index, sum);//输入无符号的长整型计算结果
}
void Sum() {
	system("color 06");//淡黄色
	int i;//定义求和的个数
	Union();
	if (index == 1) {
		sum2 = base;//当指数为1时，幂指数计算的结果为底数的值
	}
	else {
		sum2 = (base * (pow(base, index) - 1))/(base-1);
	
	}
	printf("%d的%d次方求和结果为%llu\n", base, index, sum2);//输入无符号的长整型计算结果
	
}
void Function() {//主函数功能
	int input = 0;//从键盘上选择计算的模式
	do {
		Menu();
		printf("请选择你要进行的模式:");
		scanf("%d", &input);//从键盘上键入数值
		switch (input) {
		case 1:
			Compute();
			Sleep(2000);
			system("cls");
			break;

		case 2:
			Sum();
			Sleep(2000);
			system("cls");
			break;

		case 0:
			printf("退出计算程序\n");
			system("color 07");//白色
			break;
		default:
			printf("你输入的选项模式不合法\n");
			system("color 04");//红色
			break;
		}
	} while (input);

	system("pause");
}