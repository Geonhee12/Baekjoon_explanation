#include <iostream>
int arr[1000100] = {0,};
void quick(int i, int j)
{
    int swap;
    int left = i, right = j;
    int pivot = arr[(i+j) /2];
    if(left >=right)
        return;
    while(left <=right)
    {
        while(arr[left] < pivot)
            left++;
        while(arr[right] > pivot)
            right--;
        if(left<=right)
        {
            swap = arr[right];
            arr[right] = arr[left];
            arr[left] = swap;
            left++;
            right--;
        }
    }
    quick(i, right);
    quick(left, j);
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i < n; i++)
        scanf("%d", &arr[i]);
    
    quick(0, n-1);
    for(int i=0; i < n; i++)
        printf("%d\n", arr[i]);
    
    return 0;
}
