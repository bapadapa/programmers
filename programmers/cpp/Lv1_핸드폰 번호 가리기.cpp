/*
--��ó--
���α׷��ӽ�

--���� ����--
�ڵ��� ��ȣ ������
���� ����
���α׷��ӽ� ������� �������� ��ȣ�� ���� �������� ���� �� ������ ��ȭ��ȣ�� �Ϻθ� �����ϴ�.
��ȭ��ȣ�� ���ڿ� phone_number�� �־����� ��, ��ȭ��ȣ�� �� 4�ڸ��� ������ ������ ���ڸ� ���� *���� ���� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ����ּ���.

���� ����
s�� ���� 4 �̻�, 20������ ���ڿ��Դϴ�.
����� ��

phone_number	return
01033334444	*******4444
027778888	*******8888
*/
#include <iostream>
#include <string>
#include <vector>
#include <string>
using namespace std;

string solution(string phone_number) {
    string answer = "";
    string str ;
    for (int i = 0; i < phone_number.size()-4; i++)
        str.push_back('*');
    return phone_number.replace(phone_number.begin(), phone_number.end()-4, str);
}