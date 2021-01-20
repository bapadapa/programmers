/*
--��ó--
���α׷��ӽ�

--���� ����--
���� ���� �� �����ϱ�

--���� ����--
������ ������ �迭, arr ���� ���� ���� ���� ������ �迭�� �����ϴ� �Լ�, solution�� �ϼ����ּ���. ��, �����Ϸ��� �迭�� �� �迭�� ��쿣 �迭�� -1�� ä�� �����ϼ���. ������� arr�� [4,3,2,1]�� ���� [4,3,2]�� ���� �ϰ�, [10]�� [-1]�� ���� �մϴ�.

--���� ����--
arr�� ���� 1 �̻��� �迭�Դϴ�.
�ε��� i, j�� ���� i �� j�̸� arr[i] �� arr[j] �Դϴ�.

--����� ��--
arr			return
[4,3,2,1]	[4,3,2]
[10]		[-1]
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if (arr.size() == 1) {
        answer.push_back(-1);
        return answer;
    }
    int min = 0;
    int check = 0 ;
    min = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (min > arr[i]) {
            min = arr[i], check = i;
        }
    }
    arr.erase(arr.begin() + check);
    return arr;

}
