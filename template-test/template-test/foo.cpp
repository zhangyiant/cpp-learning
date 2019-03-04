#include "pch.h"
#include "foo.h"
#include <iostream>

using std::cout;
using std::endl;

template <typename T> void foo(T a)
{
	cout << a << endl;
}

template void foo<int>(int a);
template void foo<double>(double a);