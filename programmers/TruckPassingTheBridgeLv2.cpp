/*
다리를 지나는 트럭
문제 설명
트럭 여러 대가 강을 가로지르는 일 차선 다리를 정해진 순으로 건너려 합니다. 모든 트럭이 다리를 건너려면 최소 몇 초가 걸리는지
알아내야 합니다. 트럭은 1초에 1만큼 움직이며, 다리 길이는 bridge_length이고 다리는 무게 weight까지 견딥니다.
※ 트럭이 다리에 완전히 오르지 않은 경우, 이 트럭의 무게는 고려하지 않습니다.

예를 들어, 길이가 2이고 10kg 무게를 견디는 다리가 있습니다. 무게가 [7, 4, 5, 6]kg인 트럭이 순서대로 최단 시간 안에 다리를 건너려면
다음과 같이 건너야 합니다.

경과 시간	다리를 지난 트럭	다리를 건너는 트럭	대기 트럭
0	        []	                []	                [7,4,5,6]
1~2	        []	                [7]	                [4,5,6]
3	        [7]	                [4]	                [5,6]
4	        [7]	                [4,5]	            [6]
5	        [7,4]	            [5]	                [6]
6~7	        [7,4,5]	            [6]	                []
8	        [7,4,5,6]	        []	                []
따라서, 모든 트럭이 다리를 지나려면 최소 8초가 걸립니다.

solution 함수의 매개변수로 다리 길이 bridge_length, 다리가 견딜 수 있는 무게 weight, 트럭별 무게 truck_weights가 주어집니다. 이때 모든 트럭이 다리를 건너려면 최소 몇 초가 걸리는지 return 하도록 solution 함수를 완성하세요.

제한 조건
bridge_length는 1 이상 10,000 이하입니다.
weight는 1 이상 10,000 이하입니다.
truck_weights의 길이는 1 이상 10,000 이하입니다.
모든 트럭의 무게는 1 이상 weight 이하입니다.
입출력 예
bridge_length	weight	truck_weights	                return
2	            10	    [7,4,5,6]	                    8
100	            100	    [10]	                        101
100	            100	    [10,10,10,10,10,10,10,10,10,10]	110
*/

#include<iostream>

#include <string>
#include <vector>

using namespace std;
//int solution(int bridge_length, int weight, vector<int> truck_weights) {
//    int answer = 0;
//    int i = 0;
//    int weightSum = 0;
//
//    weightSum += truck_weights[0];
//    if (size(truck_weights) != 1)
//        answer++;
//    for (int i = 0; i < size(truck_weights); i++) {
//        if (i != size(truck_weights) - 1 && weightSum + truck_weights[i + 1] < weight) {
//            answer++;
//            weightSum += truck_weights[i + 1];
//        }
//        else {
//            answer += bridge_length + 1;
//            weightSum -= truck_weights[0];
//            truck_weights.erase(truck_weights.begin());
//        }
//    }
//
//    return answer;
//}

int solution(int bridge_length, int weight, vector<int> truck_weights) {

	//시간초 확인용
	vector<pair<int, int>> passingWeight;

	//트럭 갯수들..
	int truckCnt = size(truck_weights);
	int  truck_passed = 0;

	//초기값 설정해주기.
	int time = 1;
	int curWeight = truck_weights[0];
	passingWeight.push_back(make_pair(truck_weights[0], time++));
	truck_weights.erase(truck_weights.begin());

	
	while (truck_passed < truckCnt) {		
			
		//무게를 견딜 수 있으면
		if (!truck_weights.empty() && truck_weights[0] + curWeight <= weight) {
			//동시에 출발하게 만들어지는 경우가 있어 예외처리함.
			if (passingWeight.back().second == time) {
				time++;
				continue;
			}

			curWeight += truck_weights[0];
			passingWeight.push_back(make_pair(truck_weights[0], time));
			truck_weights.erase(truck_weights.begin());
			
		}

		//트럭이 끝에 도착하면
		if (!passingWeight.empty() && passingWeight[0].second + bridge_length == time) {			
			curWeight -= passingWeight[0].first;
			passingWeight.erase(passingWeight.begin());
			truck_passed++;			
			continue;							
		}
		time++;		
	}

	return time;
}




int main() {
	//cout << solution(2, 10, { 7,4,5,6 });
	//cout << endl;
	//solution(100, 100, { 10 });
	//cout << endl;
	//cout << solution(100, 100, { 10,10,10,10,10,10,10,10,10,10 });
	//cout << endl;
	//cout << solution(100, 100, { 10,10,10,10,10,10,10,10,10,10,10 });
	cout << solution(5,5, { 2,2,2,2,1,1,1,1,1 });
	//cout << solution(5, 5, { 1,1,1,1,1,2,2,2,2 });
}