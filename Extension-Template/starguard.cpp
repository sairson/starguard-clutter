#include "starguard.h"
#include "pch.h"
#include <string>

void StarGuardPrintln(char** result, std::string in) {
	if (*result == nullptr || *result[0] == '\0') {
		char* Temp2 = (char*)malloc(in.length() + 2);
		memset(Temp2, 0, in.length() + 2);
		memcpy(Temp2, in.c_str(), in.length() + 2);
		*result = Temp2;
		return;
	}
	else {
		std::string temp = *result;
		temp.append("\n");
		temp.append(in);
		char* Temp2 = (char*)malloc(temp.length() + 2);
		memset(Temp2, 0, temp.length() + 2);
		memcpy(Temp2, temp.c_str(), temp.length() + 2);
		*result = Temp2;
		return;
	}
}