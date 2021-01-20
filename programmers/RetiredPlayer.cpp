#include<iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main() {
	string answer;
	
	vector<string> participant = { "marina", "josipa", "nikola", "vinko", "filipa"};
	vector<string> completion = { "josipa", "filipa", "marina", "nikola" };


	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());

	for (int i = 0; i < completion.size(); ++i) {
		if (participant[i] != participant[i]) {
			cout << "Retire = " << participant[i] << endl;
			break;
		}
	}
	cout << "Retire = " << participant[participant.size()-1] << endl;

	cout << "Retire = " << participant[0] << endl;
	
	cout << "위는 정렬 아래는 unorder_map" <<endl;


	unordered_map <string, int > strMap;
	
	for (auto elem : completion) {
		if (strMap.end() == strMap.find(elem)) {
			strMap.insert(make_pair(elem, 1));
		}
		else
		{
			strMap[elem]++;
		}
	}
	
	for (auto elem : participant) {
		if (strMap.end() == strMap.find(elem)) {
			answer = elem;
				break;
		}
		else
		{
			strMap[elem]--;
			if (strMap[elem] < 0) {
				answer = elem;
				break;
			}
		}
	}
	cout << answer;



	//int order=0;

	//for (string name : completion) {
	//	auto it = find(participant.begin(), participant.end(), name);
	//	if (it != participant.end())
	//		participant.erase(it);
	//}



}