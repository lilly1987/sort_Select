#include <iostream> //std
#include <string> //getline
#include <time.h>
#include "�迭���.h"
#include "�迭ȸ��.h"
#include "�迭�Ҵ�.h"
#include "��������.h"

using namespace std;

int main(int argc, char* argv[]) {

	unsigned int c;//r:��,c:��

	do
	{

		// �ܼ��� ��� ��¿����� cout �ݺ����� ���°� ���ɻ� ���� ����
		// ���������� ������ �ִٸ� �𸦱�
		// ������ �̸� ó���� �ѹ��� ����ϴ°� �� ����

		// �Է� �ޱ�
		cout << "���ڸ� �Է�." << endl;
		cout << "0 �Է½� ����" << endl;
		cout << "�迭 ����:";
		cin >> c;
		if (c == 0)
		{
			break;
		}

		int *arr = new int[c];//����
		int *arr1 = new int[c];//���纻1
		int *arr2 = new int[c];//���纻2

		arr_rnd(arr, c,100000);

		copy(arr, arr + c, arr1);
		copy(arr, arr + c, arr2);

		clock_t begin, end,t1,t2;//�ð� ������

		begin = clock();
		sort_Select(arr1,c);
		end = clock();          // �ð�����

		arr_out(arr1,c);

		t1 = end - begin;

		begin = clock();
		sort_Select2(arr2,c);
		end = clock();          // �ð�����
		
		arr_out(arr2,c);

		t2 = end - begin;

		cout << "����ð� : " <<t1 << endl;
		cout << "����ð� : " << t2 << endl;

//		cout << fixed;
//		cout.precision(9);
//		cout << "����ð� : " << (end - begin)  << endl;
//				
//		cout << scientific;
//		cout.precision(9);
//		cout << "����ð� : " << (end - begin)  << endl;
//		
//		cout << defaultfloat;
//		cout.precision(9);
//		cout << "����ð� : " << (end - begin)  << endl;
		

	} while (true);
}