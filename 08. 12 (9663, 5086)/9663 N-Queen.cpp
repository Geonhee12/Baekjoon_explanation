#include <iostream>
int *col, p_arr[100] = {0, }, m_arr[100]= {0, };
int n, count=0;

void queen(int cnt)
{
    if(cnt >= n)
    {
        count++;
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(!col[i] && !p_arr[i+cnt] && !m_arr[n+cnt-i])
        {
            col[i] = true;
            p_arr[i+cnt] = true;
            m_arr[n+cnt-i] = true;
            queen(cnt+1);
            col[i] = false;
            p_arr[i+cnt] = false;
            m_arr[n+cnt-i] = false;
        }
    }
}

int main()
{
    scanf("%d", &n);
    col = (int *)malloc(sizeof(int *) * n);
    for(int i=0; i<n; i++)
        col[i] = 0;
    queen(0);
    printf("%d", count);
    free(col);
    return 0;
}
