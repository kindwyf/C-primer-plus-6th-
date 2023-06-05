#include <iostream>
using namespace std;

int main() {
	int m, n, x, y;
	cin >> m >> n >> x >> y;
	// 防止-2的时候数组越界
	m += 2;
	n += 2;
	x += 2;
	y += 2;
	long long f[25][25] = {0}; // 可能会有很多条路径
	int v[25][25] = {0};
	f[2][2] = 1;
	// 将所有不能走的位置标注出来
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