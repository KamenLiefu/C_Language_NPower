#define _CRT_SECURE_NO_WARNINGS 1
#include "Compute.h"
int index;//Ҫ��������ֵĴη�
int base;//Ҫ��������ֵĵ���
unsigned long long sum,sum2=0;//�����޷��ŵĳ����ͱ���sum

void Menu() {//���ܲ˵���ʾ
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
	system("color 02");//����ɫ
}

void Union(){//������Ҫʹ�õĺ���
printf("������Ҫ����ĵ�����");
scanf("%d", &base);//�Ӽ������������
printf("������Ҫ�����N�˷���");
scanf("%d", &index);//�Ӽ���������ָ���η�
}

void Compute() {//��������ĺ���
	system("color 05");//����ɫ
	Union();
	sum = pow(base, index);//����base��index�η�
	printf("%d��%d�η����Ϊ%llu\n", base, index, sum);//�����޷��ŵĳ����ͼ�����
}
void Sum() {
	system("color 06");//����ɫ
	int i;//������͵ĸ���
	Union();
	if (index == 1) {
		sum2 = base;//��ָ��Ϊ1ʱ����ָ������Ľ��Ϊ������ֵ
	}
	else {
		sum2 = (base * (pow(base, index) - 1))/(base-1);
	
	}
	printf("%d��%d�η���ͽ��Ϊ%llu\n", base, index, sum2);//�����޷��ŵĳ����ͼ�����
	
}
void Function() {//����������
	int input = 0;//�Ӽ�����ѡ������ģʽ
	do {
		Menu();
		printf("��ѡ����Ҫ���е�ģʽ:");
		scanf("%d", &input);//�Ӽ����ϼ�����ֵ
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
			printf("�˳��������\n");
			system("color 07");//��ɫ
			break;
		default:
			printf("�������ѡ��ģʽ���Ϸ�\n");
			system("color 04");//��ɫ
			break;
		}
	} while (input);

	system("pause");
}