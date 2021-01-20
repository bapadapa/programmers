/*
--출처--
프로그래머스

--문제 제목 --
카펫
문제 설명
Leo는 카펫을 사러 갔다가 아래 그림과 같이 중앙에는 노란색으로 칠해져 있고 테두리 1줄은 갈색으로
칠해져 있는 격자 모양 카펫을 봤습니다.

Leo는 집으로 돌아와서 아까 본 카펫의 노란색과 갈색으로 색칠된 격자의 개수는 기억했지만,
전체 카펫의 크기는 기억하지 못했습니다.

Leo가 본 카펫에서 갈색 격자의 수 brown, 노란색 격자의 수 yellow가 매개변수로 주어질 때 카펫의 가로,
세로 크기를 순서대로 배열에 담아 return 하도록 solution 함수를 작성해주세요.

제한사항
갈색 격자의 수 brown은 8 이상 5,000 이하인 자연수입니다.
노란색 격자의 수 yellow는 1 이상 2,000,000 이하인 자연수입니다.
카펫의 가로 길이는 세로 길이와 같거나, 세로 길이보다 깁니다.
입출력 예
brown	yellow	return
10		2		[4, 3]
8		1		[3, 3]
24		24		[8, 6]
*/

#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer{ 0 ,0 };
    int area = brown + yellow;
    int sumOfHoriNVerti = brown / 2 + 2;
    int num = 3;

    //정사각형
	if (sqrt(area) == (int)sqrt(area))
		return { int(sqrt(area)),int(sqrt(area)) };

    while (answer[0] * answer[1] != area) {
        int col = sumOfHoriNVerti - num;
        int row = num;
        if (col * row == area && (col - 2) * (row - 2) == yellow) {
            answer = { col ,row };
            break;
        }            
        num++;
    }
    //sort(answer.begin(), answer.end(), greater<>());

    for (auto elem : answer) {
        cout << elem << endl;
    }
    return answer;
}


vector<int> solution(int brown, int yellow) {
	vector<int> answer;
	double area = brown + yellow;
	vector<int> divisor;

	//정사각형
	if (sqrt(area) == (int)sqrt(area))
		return { int(sqrt(area)),int(sqrt(area)) };
	
	for (int i = 3; i < area; i++) {
		if ((int)area % i == 0) {
			divisor.push_back(i);
		}
	}	
	for (int i = 0; i < divisor.size(); i++) {
		for (int j = i+1; j < divisor.size(); j++) {
				if (divisor[i] * divisor[j] == area && (divisor[i]-2) * (divisor[j]-2) == yellow ) {
					answer.push_back(divisor[i]); answer.push_back(divisor[j]);
				}					
		}
	}

	sort(answer.begin(), answer.end(), greater<>());
	
	return answer;
}

//vector<int> solution(int brown, int yellow) {
//	vector<int> answer;
//	double area = brown + yellow, col;
//	vector<int> divisor;
//
//	if (sqrt(area) == (int)sqrt(area))
//		return { int(sqrt(area)),int(sqrt(area)) };
//
//	for (int i = 3; i < area; i++) {
//		if ((int)area % i == 0) {
//			divisor.push_back(i);
//		}
//	}
//	
//	for (auto elem : divisor) {
//		double j = yellow / elem;
//		if (j * elem == area) {
//			answer.push_back(j); answer.push_back(elem);
//		}
//	}
//	
//	return answer;
//}



int main() {
	//solution(12,3);
	//solution(18, 6);
	//solution(14,6);
	//solution(66, 238);
	//solution(588, 6675);
	//solution(8, 1);

	for (auto elem : solution(385-297, 297)) {
		cout << elem << " ";
	}
}