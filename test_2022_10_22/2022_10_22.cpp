//#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//void swap(int i, int j)
//{
//	int tmp = 0;
//	tmp = i;
//	i = j;
//	j = tmp;
//}
//
//
//int main()
//{
//	int i = 0, j = 0;
//	cout << "请输入要交换的数" << endl;
//	cin >>i >> j;
//	swap(i, j);
//	cout << "交换后的值为:" << i <<"  " << j;
//	return 0;
//}
//#include <iostream>
//
//using std::cout;
//
//using std::cin;
//
//int swap(int* i, int* j)
//{
//	int tmp;
//	tmp = *i;
//	*i = *j;
//	*j = tmp;
//	return 0;
//}
//
//int main() {
//
//	int m, n;
//
//	cin >> m >> n;
//
//	swap(m, n);
//
//	cout << m << " " << n;
//
//	return 0;
//
//}


//冒泡排序
//文件读写
//


//class Test
//{
//	int x, y;
//public:
//	void init(int i, int j)
//	{
//		x = i;
//		y = j;
//	}
//	void print()
//	{
//		cout <<"测试结果:" << x << "-" << y << "=" << x - y + 30;
//	}
//};
//int main()
//{
//	Test a;
//	a.init(2019, 100);
//	a.print();
//	return 0;
//}
//其执行结果为:
//测试结果: 2019 - 100 = 1949
//#include<string>
//
//class School
//{
//
//public:
//	int	school(long int n, char* s)
//	{
//		Number = n;
//		strcpy(name, s);
//	}
//protected:
//	long int Number;
//	char name[10];
//};
//class Student :public School
//{
//public:
//	void student(long int n, char* s, char* s1, double t)
//	{
//		 strcpy(Class_Num, s1);
//		 Total = t;
//	}
//		void Display()
//	{
//			cout << Number << " " << name << " " << Class_Num << " " << Total;
//	}
//protected:
//	char Class_Num[20];
//	double Total;
//};
//int main()
//{
//	Student student;
//
//	
//	student.student(2020150601, "张小蒙", "四班", 678);
//
//	student.Display();
//	return 0;
//}


//template<typename T>
//void bubblesort(T arr[], int n)
//{
//	bool done = 0;
//	for (int i = 1; i < n && !done; i++)
//	{
//		done = 1;
//		for (int j = 1; j <= n - 1; j++)
//			if (arr[j - 1] > arr[j])
//			{
//				T temp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = temp;;
//				done = 0;
//			}
//	}
//}
//
//
//int main()
//{
//	int const len = 20;
//	int i = 0, n = 0, a[len];
//	cout << "被排序元素的个数 n =";
//	cin >> n;
//	cout << "输入" << n << "个元素";
//	for (i = 0; i < n; i++)
//		cin >> a[i];
//	bubblesort(a, n);
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	return 0;
//}



//#include<fstream>
//#include<iostream>
//using namespace std;
//int main()
//{
//	ifstream fin;
//	ofstream fout;
//	fin.open("score.txt", ios::in);
//	fout.open("othersocre.txt", ios::out);
//	if (!fin.is_open() || !fout.is_open())
//	{
//		cout << "打开文件失败" << endl;
//		return 0;
//	}
//	string name;
//	int score;
//	char class_num;
//	while (!fin.eof())
//	{
//		fin >> name >> class_num >> score;
//		fout << class_num << " " << name << " " << score << endl;
//	}
//	fin.close();
//	fout.close();
//	return 0;
//}



//template<typename T>
//void f(T arr[], int n)
//{
//	int i = 0;
//	int sz = n / 2;
//	for (i = 0; i < sz; i++)
//	{
//		T t;
//		t = arr[i];
//		arr[i] = arr[n - 1 - i];
//		arr[n - 1 - i] = t;
//	}
//	for (i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//		cout << endl;
//	}
//}
//int main()
//{
//	int a[6] = { 1,2,3,4,5,6 };
//	double b[3] = { 1.2,3.4,5.6 };
//	f(a, 6);
//	f(b, 3);
//	return 0;
//}


