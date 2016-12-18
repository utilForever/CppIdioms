/*************************************************************************
> File Name: 01 - Variadic Argument Macro.cpp
> Project Name: CppIdioms
> Author: Chan-Ho Chris Ohk
> Definition: A macro can be declared to accept a variable number of arguments much as a function can.
> Created Time: 2016/12/18
> Copyright (c) 2016, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

#ifdef _DEBUG
#define TRACE1(msg, x)  printf(msg, x)
#define TRACE(...)      printf(__VA_ARGS__)
#else
#define TRACE1(msg, x)  
#define TRACE(...)
#endif

int main()
{
	int x = 10, y = 20;

	TRACE("x = %d\n", x);
	TRACE("x = %d, y = %d\n", x, y);
}
