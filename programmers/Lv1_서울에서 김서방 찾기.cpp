/*
--��ó--
���α׷��ӽ�

--���� ����--
���￡�� �輭�� ã��

--���� ����--
String�� �迭 seoul�� element�� Kim�� ��ġ x�� ã��,
�輭���� x�� �ִٴ� String�� ��ȯ�ϴ� �Լ�,solution�� �ϼ��ϼ���.
seoul�� Kim�� ���� �� ���� ��Ÿ���� �߸��� ���� �ԷµǴ� ���� �����ϴ�.

--���� ����--
seoul�� ���� 1 �̻�, 1000 ������ �迭�Դϴ�.
seoul�� ���Ҵ� ���� 1 �̻�, 20 ������ ���ڿ��Դϴ�.
Kim�� �ݵ�� seoul �ȿ� ���ԵǾ� �ֽ��ϴ�.

--����� ��--
seoul			return
[Jane, Kim]		�輭���� 1�� �ִ�
*/

#include <iostream>
#include <string>
#include <vector>

#include <algorithm>
using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    //             ���� iterator  ��iterator   ã����   begin�� ���� �������� �������.
    int pos = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
    answer = "�輭���� " + to_string(pos) + "�� �ִ�";

   /* for (int i = 0; i < seoul.size(); i++) {
        if (seoul[i] == "Kim") {
            answer = "�輭���� " + to_string(i) + "�� �ִ�";
        }
    }*/
    return answer;
}