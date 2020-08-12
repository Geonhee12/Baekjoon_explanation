#include <iostream>
int list[9];
int count[9]= {0,};
int n, m;
void dfs(int cnt)
{
    if(cnt == m)
    {
        for(int i=0; i<m; i++)
            printf("%d ", list[i]);
        
        printf("\n");
        return;
    }
    for(int i=1; i<=n; i++)
    {
            list[cnt] = i;
            dfs(cnt+1);
    }
}

int main()
{
    scanf("%d%d", &n, &m);
    dfs(0);
    return 0;
}
