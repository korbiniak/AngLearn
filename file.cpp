#include "file.h"

File::File() {
	string name;
	cout << "Podaj nazwe pliku ze slowkami (dodaj koncowke .txt): ";
	cin >> name;
	file.open(name, ios::in);
	if(!file.good()) {
		cout << "Cos nie dziala ziom\n";
	}
}

File::File(char t[]) {
	file.open(t, ios::in);
	if(!file.good()) {
		cout << "Cos nie dziala ziom\n";
	}
}

void File::uploadFrazes() {
	frazesCounter = 0;
	string buff = "";
	while(getline(file, buff)) {
		frazesCounter++;
		frazes.push_back(buff);
	}
	count.resize(frazesCounter);
}

void File::go() {
	int cnt = 0;
	int in = 0;
	srand(time(NULL));
	while(cnt < 2 * frazesCounter) {
		do {
			in = random() % frazesCounter;
		}while(count[in] == 2);
		string question = frazes[in];
		string lang1, lang2;
		int i = 0;
		while(question.substr(i, 3) != " - ")
			i++;
		lang1 = question.substr(0, i);
		lang2 = question.substr(i + 2);
		cout << lang1;
		char c;
		string blank;
		getline(cin, blank);
		getline(cin, blank);
		cout << "\e[32mPoprawna odpowiedz:\e[0m " << lang2 << "\n";
		cin >> c;
		if(c == 'p') {
			count[in]++;
			cnt++;
		}
		else {
			cnt -= count[in];
			count[in] = 0;
		}
	}
}
