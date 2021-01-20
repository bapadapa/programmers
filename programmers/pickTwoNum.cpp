#include<iostream>
#include <string>
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	vector<int> answer;
	vector<int> number = { 2, 1, 3, 4, 1 };
	int cnt = 0;
	for (int i = 0; i < number.size() -1; i++) {
		for (int j = i + 1; j < number.size(); j++) {
			answer.push_back(number[i] + number[j]);
		}
	}

	sort(answer.begin(), answer.end());

	for (int i = 0; i < answer.size() - 1; i++) {
		if (answer[i] == answer[i + 1])
			answer.erase(answer.begin() + i--);
	}

	



}