#include<stdio.h>
#include<Windows.h>

BOOL MyFunction(IN char* Parameters, OUT char** Result) {

}


extern "C" BOOL __declspec(dllexport) Load(IN char* Parameters, OUT char** Result)
{
	return MyFunction(Parameters, Result);
}