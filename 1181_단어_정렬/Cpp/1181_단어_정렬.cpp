#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b)
{
    if (a.length() != b.length())
    {
        return a.length() < b.length();
    }
    return a < b;
}

int main()
{
    int n;
    scanf("%d", &n);

    vector<string> v;
    char word[51];

    for(int i=0; i<n; i++)
    {
        scanf("%s", word);
        v.push_back(word); 
    }

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<v.size(); i++)
    {
        if (i == 0 || v[i] != v[i-1])
        {
            printf("%s\n", v[i].c_str());
        }
    }

    return 0;
}