#include <iostream>
int count[200020] ={0,};
struct coodination // x y 좌표 구조체
{
    int x;
    int y;
};
void quicksort_x(int start, int end, struct coodination * sort_x) // x값을 토대로 퀵 정렬
{
    
    struct coodination swap;
    int left = start;
    int right = end;
    if(left >= right)
        return;
    int pivot = sort_x[(start+end) / 2].x;

    
    while(left <= right)
    {
        while(sort_x[left].x < pivot)
            left++;
        while(sort_x[right].x > pivot)
            right--;
        if(left <= right)
        {
            swap = sort_x[left];
            sort_x[left] = sort_x[right];
            sort_x[right] = swap;
            left++;
            right--;
        }
    }
    quicksort_x(start,  right, sort_x);
    quicksort_x(left,  end, sort_x);
}
void y_sort(int start, int end, struct coodination * sort_y) // x값을 토대로  y값 퀵 정렬
{
    
    struct coodination swap;
    int left = start;
    int right = end;
    if(left >= right)
        return;
    int pivot = sort_y[(start+end) / 2].y;

    
    while(left <= right)
    {
        while(sort_y[left].y < pivot)
            left++;
        while(sort_y[right].y > pivot)
            right--;
        if(left <= right)
        {
            swap.y = sort_y[left].y;
            sort_y[left].y = sort_y[right].y;
            sort_y[right].y = swap.y;
            left++;
            right--;
        }
    }
    y_sort(start,  right, sort_y);
    y_sort(left,  end, sort_y);
}
int main()
{
    int n, sum=0;
    struct coodination data[100010];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d%d", &data[i].x, &data[i].y);
        count[(data[i].x) + 100000]++;
    }
    quicksort_x(0, n-1, data);
    for(int i=0; i<=200000; i++)
    {
        if(count[i] >= 2)
            y_sort(sum, sum+count[i]-1, data);
        sum += count[i];
    }
    for(int i=0; i<n; i++)
        printf("%d %d\n", data[i].x, data[i].y);
    return 0;
}



