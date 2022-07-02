/*
	File: Lab3.cc (in Array)
	Author: Geun-Hyung Kim
*/
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	char grades[]= {'A', 'B', 'C', 'D', 'F'};      // 문자 배열 
	char name[] = {'P', 'e', 't', 'e', 'r', '\0'}; // 문자열 배열

	cout << grades[0] << endl; // 출력 1
	cout << name[0] << endl;   // 출력 2

	cout << name[5] << endl;   // 출력 3
	cout << grades[5] << endl; // 출력 4


	cout << name << endl;      // 출력 5
	cout << grades << endl;    // 출려 6

	return 0;
}