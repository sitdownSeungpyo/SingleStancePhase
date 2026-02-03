#include <cmath>
#include <cstdio>
#include <queue>
#include <vector>


using namespace std;

struct Compare {
  bool operator()(int a, int b) {
    if (abs(a) == abs(b))
      return a > b;
    return abs(a) > abs(b);
  }
};

int main()
{
  int n;
  scanf("%d", &n);

  priority_queue<int, vector<int>, Compare> pq;

  while (n--)
  {
    int x;
    scanf("%d", &x);
    if (x == 0)
    {
      if (pq.empty())
        printf("0\n");
      else
      {
        printf("%d\n", pq.top());
        pq.pop();
      }
    }
    else
    {
      pq.push(x);
    }
  }
}
