#include<stdio.h>
//int Add(int x, int y)
//{
//	int z=0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0; 
//	printf("������������������>");
//	scanf_s("%d%d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	////*for (i = 0; i < 10; i++)
//	////{
//	////	printf("%d\n", arr[i]);
//	////}
//	////printf("\n");*/
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}

//
//#define Max(x,y)(x>y?x:y)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����������������");
//	scanf_s("%d%d", &a, &b);
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//
//
//}

//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//
//	return 0;
//}
struct Stu
{
	char name[20];//��Ա����
	int age;
	double score;
};

//����һ�����������
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "����", 20, 85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����

	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}