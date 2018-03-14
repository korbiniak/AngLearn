#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include"file.h"

int main(int argc, char * argv[]) {
	File file(argv[1]);
	file.uploadFrazes();
	file.go();
}