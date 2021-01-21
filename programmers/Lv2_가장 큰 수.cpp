/*

--��ó--
���α׷��ӽ�

--���� ����--
���� ū ��
���� ����
0 �Ǵ� ���� ������ �־����� ��, ������ �̾� �ٿ� ���� �� �ִ� ���� ū ���� �˾Ƴ� �ּ���.

���� ���, �־��� ������ [6, 10, 2]��� [6102, 6210, 1062, 1026, 2610, 2106]�� ���� �� �ְ�, ���� ���� ū ���� 6210�Դϴ�.

0 �Ǵ� ���� ������ ��� �迭 numbers�� �Ű������� �־��� ��, ������ ���ġ�Ͽ� ���� �� �ִ� ���� ū ���� ���ڿ��� �ٲپ�
return �ϵ��� solution �Լ��� �ۼ����ּ���.

���� ����
numbers�� ���̴� 1 �̻� 100,000 �����Դϴ�.
numbers�� ���Ҵ� 0 �̻� 1,000 �����Դϴ�.
������ �ʹ� Ŭ �� ������ ���ڿ��� �ٲپ� return �մϴ�.

����� ��
numbers				return
[6, 10, 2]			6210
[3, 30, 34, 5, 9]	9534330

*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int i, int j) {
	string x = to_string(i);
	string y = to_string(j);
	return x + y >= y + x;
}
string solution(vector<int> numbers) {
	string answer = "";
	vector<string> numString;

	sort(numbers.begin(), numbers.end(), compare);
	for (auto elem : numbers) {
		answer.append(to_string(elem));
	}
	if (!atoi(answer.c_str()))
		answer = "0";
	return answer;
}




