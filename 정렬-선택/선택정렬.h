#include <time.h>

#pragma once
// 뒤커서를 옮긴후 숫자가 다를때마다 swap이 일어남
void sort_Select(int *&arr,const unsigned int length) {
	int t;
	for (unsigned int i = 0; i < length-1; i++)
	{
		for (unsigned int j = i+1; j < length; j++)
		{
			if (arr[i]>arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
}

// https://ko.wikipedia.org/wiki/%EC%84%A0%ED%83%9D_%EC%A0%95%EB%A0%AC
// 앞커서가 옮길때마다 swap 이 한번만 일어남
void sort_Select2(int *&list,const unsigned int n) {
	int i, j, indexMin, temp;

	for (i = 0; i < n - 1; i++)
	{
		indexMin = i;
		for (j = i + 1; j < n; j++)
		{
			if (list[j] < list[indexMin])
			{
				indexMin = j;
			}
		}
		temp = list[indexMin];
		list[indexMin] = list[i];
		list[i] = temp;
	}
}
