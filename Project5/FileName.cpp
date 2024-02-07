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

int StringToNumber(char* str) {
	int result = str[0] - '0';
	int size = strlen(str);
	for (int i = 1; i < size; i++) {
		result *= 10;
		result += str[i] - '0';
	}

	return result;
}

char* NumberToString(int number) {
	int size = 0, temp = number;
	while (temp != 0) {
		temp = temp / 10;
		size++;
	}
	char* strNew = new char[size + 1];
	strcpy(strNew, "");

	for (int i = size - 1; i >= 0; i--) {
		strNew[i] = number % 10 + '0';
		number /= 10;
	}
	strNew[size] = '\0';
	return strNew;
}

char* Uppercase(char* str1) {
	int size = strlen(str1);
	char* strNew = new char[size + 1];
	strcpy(strNew, "");

	for (int i = 0; i < size; i++) {
		if (str1[i] >= 'a' && str1[i] <= 'z') {
			strNew[i] = str1[i] - 32;
		}
		else if (str1[i] < 'a' || str1[i] > 'z') {
			strNew[i] = str1[i];
		}
	}

	strNew[size] = '\0';
	return strNew;

}

char* Lowercase(char* str1) {
	int size = strlen(str1);
	char* strNew = new char[size + 1];
	strcpy(strNew, "");

	for (int i = 0; i < size; i++) {
		if (str1[i] >= 'A' && str1[i] <= 'Z') {
			strNew[i] = str1[i] + 32;
		}
		else if (str1[i] < 'A' || str1[i] > 'Z') {
			strNew[i] = str1[i];
		}
	}

	strNew[size] = '\0';
	return strNew;

}

void deleteArray(char* str) {
	delete[] str;
}

int main()
{
	setlocale(LC_ALL, "rus");
	/*char str1[100], str2[100];
	fillStr(str1);
	fillStr(str2);
	int result = mystrcmp(str1, str2);
	cout << result;*/

	/*char str[100];
	fillStr(str);
	int result = StringToNumber(str);
	cout << result;*/

	/*int number;
	cout << "¬вед≥ть число: ";
	cin >> number;
	char* strNew = NumberToString(number);
	cout << strNew;
	deleteArray(strNew);*/

	/*char str1[100];
	fillStr(str1);
	char* strNew = Uppercase(str1);;
	cout << strNew;
	deleteArray(strNew);*/

	/*char str1[100];
	fillStr(str1);
	char* strNew = Lowercase(str1);;
	cout << strNew;
	deleteArray(strNew);*/

}