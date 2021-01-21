/*

--��ó--
���α׷��ӽ�

--���� ����--
īī�������� �÷�����

���� ����
īī�� ������ �÷�����
���ǻ��� �������� ����ġ�� �׿����� �÷����Ͽ� �� ��ȭ�� �׷��޶�� ��Ź�Ͽ� ���� ���� �׸��� �޾Ҵ�.
���� ���� �׸��� ���̵� ������ �÷����Ͽ� �ְ� �;��� ����ġ�� ������ ������ ��ĥ�ϱⰡ ��ٷο� ��������ٴ� ����� �߰��ϰ� �׸��� ���̵��� ������ ���� �����Ͽ���. (�����̶� �����¿�� ����� ���� ������ ������ �ǹ��Ѵ�.)

�׸��� �� ���� ������ �ִ����� ���� ū ������ ���̴� ������ ����ϴ� ���α׷��� �ۼ��غ���.

���� �׸��� �� 12�� �������� �̷���� ������, ���� ���� ������ ����ġ�� �󱼸����� ���̴� 120�̴�.

�Է� ����
�Է��� �׸��� ũ�⸦ ��Ÿ���� m�� n, �׸��� �׸��� ��Ÿ���� m �� n ũ���� 2���� �迭 picture�� �־�����.
���������� �Ʒ��� ����.
	1 <= m, n <= 100
	picture�� ���Ҵ� 0 �̻� 2^31 - 1 ������ ������ ���̴�.
	picture�� ���� �� ���� 0�� ���� ��ĥ���� �ʴ� ������ ���Ѵ�.

��� ����
���� Ÿ���� ���Ұ� �� ���� ���� �迭�̴�. �׸��� �� ���� ������ �ִ����� ���� ū ������ �� ĭ���� �̷���� �ִ����� �����Ѵ�.

���� �����
m	n	picture							answer
6	4	[[1, 1, 1, 0], [1, 2, 2, 0], 	[4, 5]
		[1, 0, 0, 1], [0, 0, 0, 1],
		[0, 0, 0, 3], [0, 0, 0, 3]]
*/

#include<iostream>

#include <vector>

using namespace std;

int checkColor(int color , pair<int, int> dim, int x, int y, vector<vector<int>> &picture) {
	int sum = 1;
	// ������ �Ѿ �� �ֱ⶧���� colorüũ�� �ǵڷ�..
	if ( x >= dim.first || y >= dim.second || x <0 || y < 0 || picture[x][y] != color )
		return 0;

	else {
		picture[x][y] = 0;

		sum += checkColor(color, dim, x+1, y, picture);
		sum += checkColor(color, dim, x, y + 1, picture);
		sum += checkColor(color, dim, x - 1, y, picture);		
		sum += checkColor(color, dim, x, y-1, picture);
	}
	return sum;
}

// ���� ������ ������ ��� �Լ� ���� �ʱ�ȭ �ڵ带 �� �ۼ����ּ���.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
	int number_of_area = 0;
	int max_size_of_one_area = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (picture[i][j] == 0)
				continue;
			else {
				int sum = checkColor(picture[i][j], make_pair(m,n), i, j, picture);
				number_of_area++;
				if (sum > max_size_of_one_area)
					max_size_of_one_area = sum;
			}
		}
	}

	vector<int> answer(2);
	answer[0] = number_of_area;
	answer[1] = max_size_of_one_area;
	return answer;
}