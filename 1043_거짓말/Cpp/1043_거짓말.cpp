#include <cstdio>
#include <vector>

using namespace std;

int parent[51];

int find(int x)
{
    if(parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void a(int a, int b)
{
    a = find(a);
    b = find(b);
    if(a != b)
    {
        parent[a] = b;
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i=1; i<=n; i++)
    {
        parent[i] = i;
    }

    int numKnow;
    scanf("%d", &numKnow);

    int knows[50];
    for(int i=0; i<numKnow; i++)
    {
        scanf("%d", &knows[i]);
    }

    for(int i=1; i<numKnow; i++)
    {
        a(knows[0], knows[i]);
    }

    vector<int> parties[50];
    for(int i=0; i<m; i++)
    {
        int num;
        scanf("%d", &num);
        for(int j=0; j<num; j++)
        {
            int p;
            scanf("%d", &p);
            parties[i].push_back(p);
        }

        for(int j=1; j<num; j++)
        {
            a(parties[i][0], parties[i][j]);
        }
    }

    int knowRoot = (numKnow > 0) ? find(knows[0]) : -1;
    int count = 0;

    for(int i=0; i<m; i++)
    {
        int canLie = 1;
        for(int j=0; j<(int)parties[i].size(); j++)
        {
            if(numKnow > 0 && find(parties[i][j]) == knowRoot)
            {
                canLie = 0;
                break;
            }
        }
        if(canLie)
        {
            count++;
        }
    }

    printf("%d\n", count);
}
