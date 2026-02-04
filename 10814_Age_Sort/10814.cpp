#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Member
{
  int age;
  string name;
  int join_order;
};

bool cmp(const Member &a, const Member &b)
{
  if (a.age != b.age)
    return a.age < b.age;
  return a.join_order < b.join_order;
}

int main()
{
  int n;
  cin >> n;
  vector<Member> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i].age >> v[i].name;
    v[i].join_order = i;
  }

  sort(v.begin(), v.end(), cmp);

  for (int i = 0; i < n; i++)
  {
    cout << v[i].age << " " << v[i].name << "\n";
  }
}
