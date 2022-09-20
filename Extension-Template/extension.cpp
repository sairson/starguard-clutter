#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include "pch.h"
#include "starguard.h"


BOOL MyFunction(IN char* Parameters, OUT char** Result) {
	StarGuardPrintln(Result, "[+] Init a Module Extension");
	StarGuardPrintln(Result, "[+] Sleep 5 time Seconds");
	return TRUE;
}


extern "C" BOOL __declspec(dllexport) Load(IN char* Parameters, OUT char** Result)
{
	return MyFunction(Parameters, Result);
}
