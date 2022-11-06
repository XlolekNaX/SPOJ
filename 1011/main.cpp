#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	

	int countWords;
	cin >> countWords;

	string word;
	string temp = "";
	vector<string> words;

	for (int i = 0; i < countWords; ++i) {

		cin >> word;

		for (int j = 0; j < word.size() / 2; ++j)
			temp += word[j];

		words.push_back(temp);
		temp = "";
	}

	for (string str : words)
		cout << str << '\n';

	return 0;
}
