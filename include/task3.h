#ifndef TASK3_H
#define TASK3_H
#include <iostream>
#include <string.h>


template <typename T, size_t N> void 
map(T arr[], T(*change)(T))
{
	for (int i = 0; i < N; i++)
		arr[i] = change(arr[i]);
}

#endif