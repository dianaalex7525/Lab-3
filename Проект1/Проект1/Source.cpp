#include<iostream>`
#include<time.h>

using namespace std;
const int n = 10;

int module(int A[])
{
	cout << "���������:";
	for (int i = 0; i<n; i++)
	{
		if (A[i]<0)
		{
			A[i] = -(A[i]);

		}
		cout << A[i] << "  ";
	}

	return 0;

}
void zero(int z)
{
	cout << "���������� ��������� � ������� ���������: " << z << endl;

}
int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	int z = 0;
	int A[n];
	srand(time(NULL));
	cout << "������: ";
	for (int i = 0; i<n; i++)
	{
		A[i] = rand() % n - ((n / 2) - 1);
		cout << A[i] << "  ";

	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (A[i] == 0)
		{
			z++;
		}
	}
	cout << "��� ������ ���� ������������� �������� ��������� �� ������ �� �������� �������� 1" << endl;
	cout << "��� �������� ���������� ��������� � ������� ��������� �������� 2" << endl;
	cout << "��� ������ �� ��������� �������� ����� ������ ������" << endl;
	cin >> a;
	switch (a)
	{
	case 1: module(A); break;
	case 2: zero(z); break;
	default: exit(0);
	}


	system("pause");
	return 0;
}
