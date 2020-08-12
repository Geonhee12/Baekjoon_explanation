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
        if(!count[i] && cnt ==0)
        {
            count[i] = true;
            list[cnt] = i;
            dfs(cnt+1);
            count[i] = false;
        }
        
        else if(!count[i] && i> list[cnt-1])
        {
            count[i] = true;
            list[cnt] = i;
            dfs(cnt+1);
            count[i] = false;
        }

    }
}

int main()
{
    scanf("%d%d", &n, &m);
    dfs(0);
    return 0;
}
