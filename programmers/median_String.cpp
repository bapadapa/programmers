#include<iostream>
#include<string>
using namespace std;


int main(int argc, char* argv) {

	string s = "abcdef";
	string answer = "";

	cout << answer.length() << endl;
	//È¦¼ö
	if (s.length() == 1) {
		answer = s[0];
	}
	else if (s.length() % 2 == 1) {
		answer = s[s.length()/2];
	}
	else {
		answer = s.substr((s.length() / 2)-1, 2);
	}

	cout << answer.length() <<endl;


	cout << answer;

}