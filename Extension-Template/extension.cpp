#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include "pch.h"
#include "starguard.h"


BOOL MyFunction(IN char* Parameters, IN int* ParameterSize, goCallback callback) {
	std::string msg{ "You must provide a command.\n\t0 = stop\n\t1 = start\n\t2 = get logs" };
	callback(msg.c_str(), msg.length());
	std::string amsg{ "123123,4213123,421312312"};
	callback(amsg.c_str(), amsg.length());
	return TRUE;
}


extern "C" BOOL __declspec(dllexport) Load(IN char* Parameters, IN int* ParameterSize, goCallback callback)
{
	return MyFunction(Parameters, ParameterSize,callback);
}
