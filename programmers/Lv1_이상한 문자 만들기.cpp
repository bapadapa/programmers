/*
--��ó--
���α׷��ӽ�

--���� ����--
�̻��� ���� �����

--���� ����--
���ڿ� s�� �� �� �̻��� �ܾ�� �����Ǿ� �ֽ��ϴ�.
�� �ܾ�� �ϳ� �̻��� ���鹮�ڷ� ���еǾ� �ֽ��ϴ�.
�� �ܾ��� ¦����° ���ĺ��� �빮�ڷ�,
Ȧ����° ���ĺ��� �ҹ��ڷ� �ٲ� ���ڿ��� �����ϴ� �Լ�,
solution�� �ϼ��ϼ���.

--���� ����--
���ڿ� ��ü�� ¦/Ȧ�� �ε����� �ƴ϶�,
�ܾ�(������ ����)���� ¦/Ȧ�� �ε����� �Ǵ��ؾ��մϴ�.
ù ��° ���ڴ� 0��° �ε����� ���� ¦����° ���ĺ����� ó���ؾ� �մϴ�.

--����� ��--
s					return
try hello world		TrY HeLlO WoRlD

--����� �� ����--
try hello world�� �� �ܾ� try, hello, world�� �����Ǿ� �ֽ��ϴ�.
�� �ܾ��� ¦����° ���ڸ� �빮�ڷ�,
Ȧ����° ���ڸ� �ҹ��ڷ� �ٲٸ� TrY, HeLlO, WoRlD�Դϴ�.
���� TrY HeLlO WoRlD �� �����մϴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";    
    bool flag = true;
    for (auto elem : s) {
        if (elem == ' ') {
            answer += " ";
            flag = true;
        }
        else {
            if (flag) {
                answer += toupper(elem);
                flag = false;
            }
            else
            {
                answer += tolower(elem);
                flag = true;
            }
        }
    }

    return answer;
}