// GolubovychZahLab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	ifstream in_file_1;
	ifstream in_file_2;

	in_file_1.open("studens1.txt");
	in_file_2.open("studens2.txt");

	ofstream out_file;
	out_file.open("group1.txt");

	string surname, group;

	cout << "Students of group \"GR-1\":" << endl;

	while (!in_file_1.eof()) {
		string line;
		in_file_1 >> line;

		int delimiter_pos = line.find('=>');

		surname = line.substr(0, delimiter_pos - 1);
		group = line.substr(delimiter_pos + 1, line.length() - delimiter_pos);

		if (group == "GR-1") {
			cout << surname << endl;
			out_file << line << endl;
		}
	}

	while (!in_file_2.eof()) {
		string line;
		in_file_2 >> line;

		int delimiter_pos = line.find('=>');

		surname = line.substr(0, delimiter_pos - 1);
		group = line.substr(delimiter_pos + 1, line.length() - delimiter_pos);

		if (group == "GR-1") {
			cout << surname << endl;
			out_file << line << endl;
		}
	}

	in_file_1.close();
	in_file_2.close();
	out_file.close();

	system("pause");
	
    return 0;
}

