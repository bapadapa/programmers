/*
--��ó--
���α׷��ӽ�

--���� ����--
��ųƮ��

--���� ����--
���� ��ų�̶� � ��ų�� ���� ���� ���� ����� �ϴ� ��ų�� ���մϴ�.

���� ��� ���� ��ų ������ ����ũ �� ����Ʈ�� ��Ʈ �� ����϶�, ����� ������ ���� ����Ʈ�� ��Ʈ�� ����� �ϰ�,
����Ʈ�� ��Ʈ�� ������ ���� ����ũ�� ����� �մϴ�.

�� ������ ���� �ٸ� ��ų(���� ��)�� ������ ������� ��� �� �ֽ��ϴ�.
���� ����ũ �� ���� �� ����Ʈ�� ��Ʈ �� ����� ���� ��ųƮ���� ����������, 
	   ��� �� ����ũ�� ����Ʈ�� ��Ʈ �� ����ũ �� ���� �� ����� ���� ��ųƮ���� �Ұ����մϴ�.

���� ��ų ���� skill�� �������� ���� ��ųƮ��1�� ���� �迭 skill_trees�� �Ű������� �־��� ��,
������ ��ųƮ�� ������ return �ϴ� solution �Լ��� �ۼ����ּ���.

--���� ����--
��ų�� ���ĺ� �빮�ڷ� ǥ���ϸ�, ��� ���ڿ��� ���ĺ� �빮�ڷθ� �̷���� �ֽ��ϴ�.
��ų ������ ��ųƮ���� ���ڿ��� ǥ���մϴ�.
���� ���, C �� B �� D ��� CBD�� ǥ���մϴ�
���� ��ų ���� skill�� ���̴� 1 �̻� 26 �����̸�, ��ų�� �ߺ��� �־����� �ʽ��ϴ�.
skill_trees�� ���� 1 �̻� 20 ������ �迭�Դϴ�.
skill_trees�� ���Ҵ� ��ų�� ��Ÿ���� ���ڿ��Դϴ�.
skill_trees�� ���Ҵ� ���̰� 2 �̻� 26 ������ ���ڿ��̸�, ��ų�� �ߺ��� �־����� �ʽ��ϴ�.

--����� ��--
skill	skill_trees							return
"CBD"	["BACDE", "CBADF", "AECB", "BDA"]	2

--����� �� ����--
BACDE: B ��ų�� ���� ���� C ��ų�� ���� ����� �մϴ�. �Ұ����� ��ųƮ���ϴ�.
CBADF: ������ ��ųƮ���Դϴ�.
AECB: ������ ��ųƮ���Դϴ�.
BDA: B ��ų�� ���� ���� C ��ų�� ���� ����� �մϴ�. �Ұ����� ��ųƮ���Դϴ�.

*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;  

    for (auto teckTree : skill_trees) {        
        int preSkill = 0;
        bool _isPossible = true;
        vector< pair<char,int>> trees;
        for (int i = 0; i < skill.length(); i++) {
            for (int j = 0; j < teckTree.length(); j++) {
                if (teckTree[j] == skill[i]) {
                    trees.push_back(make_pair(skill[i],j));
                }
            }
            
        }
        sort(trees.begin(), trees.end(), cmp);
        
        for (int i = 0; i < trees.size(); i++) {
            if (trees[i].first != skill[i]) {
                _isPossible = false;
                break;
            }
        }
        if (_isPossible) {
            answer++;
        }            
    }
    return answer;
}

int main() {
    cout <<endl<< solution("CBD", { "BACDE", "CBADF", "AECB", "BDA" });
}