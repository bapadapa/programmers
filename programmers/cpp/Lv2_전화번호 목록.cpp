/*
--��ó--
���α׷��ӽ�

--���� ����--
��ȭ��ȣ ���

���� ����
��ȭ��ȣ�ο� ���� ��ȭ��ȣ ��, �� ��ȣ�� �ٸ� ��ȣ�� ���ξ��� ��찡 �ִ��� Ȯ���Ϸ� �մϴ�.
��ȭ��ȣ�� ������ ���� ���, ������ ��ȭ��ȣ�� �������� ��ȭ��ȣ�� ���λ��Դϴ�.

������ : 119
���ؿ� : 97 674 223
������ : 11 9552 4421
��ȭ��ȣ�ο� ���� ��ȭ��ȣ�� ���� �迭 phone_book �� solution �Լ��� �Ű������� �־��� ��, � ��ȣ�� �ٸ� ��ȣ�� ���ξ��� ��찡 ������ false�� �׷��� ������ true�� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���� ����
phone_book�� ���̴� 1 �̻� 1,000,000 �����Դϴ�.
�� ��ȭ��ȣ�� ���̴� 1 �̻� 20 �����Դϴ�.

����� ����
phone_book					return
[119, 97674223, 1195524421]	false
[123,456,789]				true
[12,123,1235,567,88]		false

����� �� ����
����� �� #1
�տ��� ������ ���� �����ϴ�.

����� �� #2
�� ��ȣ�� �ٸ� ��ȣ�� ���λ��� ��찡 �����Ƿ�, ���� true�Դϴ�.

����� �� #3
ù ��° ��ȭ��ȣ, ��12���� �� ��° ��ȭ��ȣ ��123���� ���λ��Դϴ�. ���� ���� false�Դϴ�.
*/

#include <iostream>

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
	bool answer = true;
	sort(phone_book.begin(), phone_book.end());
	
	for (int i = 0; i < phone_book.size() - 1; i++) {
		if (phone_book[i].length() <= phone_book[i + 1].length() && phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].length()))
			return false;
	}
	return true;
}

int main() {
	solution({ "119", "97674223", "1195524421" });

}