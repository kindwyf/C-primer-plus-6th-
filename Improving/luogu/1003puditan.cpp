#include <iostream>
#include <cstring>
using namespace std;
#define N 10000

struct node
{
  int a, b, g, k;
} ditan[N];

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> ditan[i].a >> ditan[i].b >> ditan[i].g >> ditan[i].k;
  }
  int x, y;
  cin >> x >> y;
  int m = -1;
  for (int i = 0; i < n; i++)
  {
    if (x >= ditan[i].a && x <= ditan[i].a + ditan[i].g && y >= ditan[i].b && y <= ditan[i].b + ditan[i].k)
      m = i + 1;
  }
  cout << m;
  return 0;
}