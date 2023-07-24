/*
�ٸ��� ������ Ʈ��
���� ����
Ʈ�� ���� �밡 ���� ���������� �� ���� �ٸ��� ������ ������ �ǳʷ� �մϴ�. ��� Ʈ���� �ٸ��� �ǳʷ��� �ּ� �� �ʰ� �ɸ�����
�˾Ƴ��� �մϴ�. Ʈ���� 1�ʿ� 1��ŭ �����̸�, �ٸ� ���̴� bridge_length�̰� �ٸ��� ���� weight���� �ߵ��ϴ�.
�� Ʈ���� �ٸ��� ������ ������ ���� ���, �� Ʈ���� ���Դ� ������� �ʽ��ϴ�.

���� ���, ���̰� 2�̰� 10kg ���Ը� �ߵ�� �ٸ��� �ֽ��ϴ�. ���԰� [7, 4, 5, 6]kg�� Ʈ���� ������� �ִ� �ð� �ȿ� �ٸ��� �ǳʷ���
������ ���� �ǳʾ� �մϴ�.

��� �ð�	�ٸ��� ���� Ʈ��	�ٸ��� �ǳʴ� Ʈ��	��� Ʈ��
0	        []	                []	                [7,4,5,6]
1~2	        []	                [7]	                [4,5,6]
3	        [7]	                [4]	                [5,6]
4	        [7]	                [4,5]	            [6]
5	        [7,4]	            [5]	                [6]
6~7	        [7,4,5]	            [6]	                []
8	        [7,4,5,6]	        []	                []
����, ��� Ʈ���� �ٸ��� �������� �ּ� 8�ʰ� �ɸ��ϴ�.

solution �Լ��� �Ű������� �ٸ� ���� bridge_length, �ٸ��� �ߵ� �� �ִ� ���� weight, Ʈ���� ���� truck_weights�� �־����ϴ�. �̶� ��� Ʈ���� �ٸ��� �ǳʷ��� �ּ� �� �ʰ� �ɸ����� return �ϵ��� solution �Լ��� �ϼ��ϼ���.

���� ����
bridge_length�� 1 �̻� 10,000 �����Դϴ�.
weight�� 1 �̻� 10,000 �����Դϴ�.
truck_weights�� ���̴� 1 �̻� 10,000 �����Դϴ�.
��� Ʈ���� ���Դ� 1 �̻� weight �����Դϴ�.
����� ��
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

	//�ð��� Ȯ�ο�
	vector<pair<int, int>> passingWeight;

	//Ʈ�� ������..
	int truckCnt = size(truck_weights);
	int  truck_passed = 0;

	//�ʱⰪ �������ֱ�.
	int time = 1;
	int curWeight = truck_weights[0];
	passingWeight.push_back(make_pair(truck_weights[0], time++));
	truck_weights.erase(truck_weights.begin());

	
	while (truck_passed < truckCnt) {		
			
		//���Ը� �ߵ� �� ������
		if (!truck_weights.empty() && truck_weights[0] + curWeight <= weight) {
			//���ÿ� ����ϰ� ��������� ��찡 �־� ����ó����.
			if (passingWeight.back().second == time) {
				time++;
				continue;
			}

			curWeight += truck_weights[0];
			passingWeight.push_back(make_pair(truck_weights[0], time));
			truck_weights.erase(truck_weights.begin());
			
		}

		//Ʈ���� ���� �����ϸ�
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
