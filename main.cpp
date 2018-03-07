#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include"file.h"

int main(int argv, char * argc[]) {
	File file(argc[1]);
	file.uploadFrazes();
	file.go();
}