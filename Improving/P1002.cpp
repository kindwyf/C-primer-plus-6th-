#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int horse_x;
  int horse_y;
  int target_x;
  int target_y;
  cin >> target_x >> target_y >> horse_x >> horse_y;
  horse_x += 2;
  horse_y += 2;
  target_x += 2;
  target_y += 2;
  int map[target_x][target_y] = {0};
  int f[target_x][target_y] = {0};

  f[2][2] = 1;
  map[horse_x + 2][horse_y + 1] = 1;
  map[horse_x + 2][horse_y - 1] = 1;
  map[horse_x - 2][horse_y + 1] = 1;
  map[horse_x - 2][horse_y - 1] = 1;
  map[horse_x + 1][horse_y + 2] = 1;
  map[horse_x + 1][horse_y - 2] = 1;
  map[horse_x - 1][horse_y + 2] = 1;
  map[horse_x - 1][horse_y - 2] = 1;
  for (int i = 2; i < target_x; i++)
  {
    for (int j = 2; j < target_y; j++)
    {
      cout << map[i][j] << " ";
    }
    cout << endl;
  }
  // 判断马的位置，根据不同位置设置地图控制点

  return 0;
}
