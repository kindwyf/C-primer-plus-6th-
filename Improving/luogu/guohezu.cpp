#include <iostream>
using namespace std;

int main() {
	int m, n, x, y;
	cin >> m >> n >> x >> y;
	// ��ֹ-2��ʱ������Խ��
	m += 2;
	n += 2;
	x += 2;
	y += 2;
	long long f[25][25] = {0}; // ���ܻ��кܶ���·��
	int v[25][25] = {0};
	f[2][2] = 1;
	// �����в����ߵ�λ�ñ�ע����
	v[x][y] = 1;
	v[x - 1][y + 2] = 1;
	v[x + 1][y + 2] = 1;
	v[x - 1][y - 2] = 1;
	v[x + 1][y - 2] = 1;
	v[x + 2][y + 1] = 1;
	v[x - 2][y + 1] = 1;
	v[x + 2][y - 1] = 1;
	v[x - 2][y - 1] = 1;
	for (int i = 2; i <= m; i++) {
		for (int j = 2; j <= n; j++) {
			if ((i != 2 || j != 2) && !v[i][j]) {
				f[i][j] = f[i - 1][j] + f[i][j - 1];
			}
		}
	}
	cout << f[m][n] << endl;
	return 0;
}