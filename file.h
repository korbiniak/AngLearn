#ifndef FILE_H
#define FILE_H

#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<ctime>
#include<vector>
#include<fstream>
using namespace std;

class File {
	private:
	fstream file;
	vector<int> count;
	vector<string> frazes;
	int frazesCounter;

	public:
	File();
	File(char t[]);
	void uploadFrazes();
	void go();
};

#endif