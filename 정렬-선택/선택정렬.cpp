#include <iostream> //std
#include <string> //getline
#include <time.h>
#include "배열출력.h"
#include "배열회전.h"
#include "배열할당.h"
#include "선택정렬.h"

using namespace std;

int main(int argc, char* argv[]) {

	unsigned int c;//r:행,c:열

	do
	{

		// 단순히 모양 출력용으로 cout 반복으로 쓰는건 성능상 좋지 않음
		// 수학적으로 쓸일이 있다면 모를까
		// 변수에 미리 처리후 한번만 출력하는게 젤 좋음

		// 입력 받기
		cout << "숫자만 입력." << endl;
		cout << "0 입력시 종료" << endl;
		cout << "배열 갯수:";
		cin >> c;
		if (c == 0)
		{
			break;
		}

		int *arr = new int[c];//원본
		int *arr1 = new int[c];//복사본1
		int *arr2 = new int[c];//복사본2

		arr_rnd(arr, c,100000);

		copy(arr, arr + c, arr1);
		copy(arr, arr + c, arr2);

		clock_t begin, end,t1,t2;//시간 측정용

		begin = clock();
		sort_Select(arr1,c);
		end = clock();          // 시간설정

		arr_out(arr1,c);

		t1 = end - begin;

		begin = clock();
		sort_Select2(arr2,c);
		end = clock();          // 시간설정
		
		arr_out(arr2,c);

		t2 = end - begin;

		cout << "수행시간 : " <<t1 << endl;
		cout << "수행시간 : " << t2 << endl;

//		cout << fixed;
//		cout.precision(9);
//		cout << "수행시간 : " << (end - begin)  << endl;
//				
//		cout << scientific;
//		cout.precision(9);
//		cout << "수행시간 : " << (end - begin)  << endl;
//		
//		cout << defaultfloat;
//		cout.precision(9);
//		cout << "수행시간 : " << (end - begin)  << endl;
		

	} while (true);
}