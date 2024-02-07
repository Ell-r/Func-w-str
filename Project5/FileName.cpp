#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

void fillStr(char str[]) {
	cout << "¬вед≥ть р€док: ";
	cin >> str;
}

int mystrcmp(const char* str1, const char* str2) {
	int size1 = 0, size2 = 0;
	for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
		if (str1[i] != str2[i]) {
			if (str1[i] > str2[i]) {
				return 1;
			}
			else if (str1[i] < str2[i]) {
				return -1;
			}
		}
	}

	if (strlen(str1) == strlen(str2)) {
		return 0;
	}

	else if (strlen(str1) > strlen(str2)) {
		return 1;
	}

	else if (strlen(str1) < strlen(str2)) {
		return -1;
	}

}

int main()
{
	setlocale(LC_ALL, "rus");
	/*char str1[100], str2[100];
	fillStr(str1);
	fillStr(str2);
	int result = mystrcmp(str1, str2);
	cout << result;*/

}