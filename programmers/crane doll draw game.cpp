#include<iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<vector<int>> board;
	vector<int> moves;

	//test case
	board = { {0, 0, 0, 0, 0},{0, 0, 1, 0, 3},{0, 2, 5, 0, 1},{4, 2, 4, 4, 2},{3, 5, 1, 3, 1} };
	moves = { 1, 5, 3, 5, 1, 2, 1, 4 };
	//____________________문제 시작

	int answer = 0;
	vector<int>  box;

	for (int i = 0; i < moves.size(); i++) {
		for (int j = 0; j < board.size(); j++) {
			if (board[j][moves[i] - 1] == 0 || board[j][moves[i] - 1] == NULL) {
				continue;
			}
			//선택한 인형 바구니에 넣음.
			//비교하여 성공시 2점 추가.
			if (!box.empty() && board[j][moves[i] - 1] == box.back()) {
				box.pop_back();
				answer += 2;
			}
			//비교하여 다를시 바구니에 값 삽입.
			else
			{
				box.push_back(board[j][moves[i] - 1]);
			}
			board[j][moves[i] - 1] = 0;
			break;
		}

	}

	cout << answer;
}