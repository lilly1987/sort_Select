#include <time.h>

#pragma once
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
