/*
--��ó--
���α׷��ӽ�

--���� ����--
���� ��ȣ

--���� ����--
� ������ �� ���ĺ��� ������ �Ÿ���ŭ �о �ٸ� ���ĺ����� �ٲٴ� ��ȣȭ ����� ���� ��ȣ��� �մϴ�.
���� ��� AB�� 1��ŭ �и� BC�� �ǰ�, 3��ŭ �и� DE�� �˴ϴ�.
z�� 1��ŭ �и� a�� �˴ϴ�. ���ڿ� s�� �Ÿ� n�� �Է¹޾� s�� n��ŭ �� ��ȣ���� ����� �Լ�, solution�� �ϼ��� ������.

--���� ����--
������ �ƹ��� �о �����Դϴ�.
s�� ���ĺ� �ҹ���, �빮��, �������θ� �̷���� �ֽ��ϴ�.
s�� ���̴� 8000�����Դϴ�.
n�� 1 �̻�, 25������ �ڿ����Դϴ�.

--����� ��--
s	    n	result
AB	    1	BC
z	    1	a
a B z	4	e F d
*/
#include<iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (auto elem : s) {
        if (elem == 32) 
            answer.push_back(elem);        
        else {
            for (int i = 0; i < n; i++) {                
                if (elem == 90 || elem == 122) {
                    elem -= 26;
                }
                elem += 1;
            }
            answer.push_back(elem);
        }        
    }
    return answer;
}