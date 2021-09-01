#include <iostream>
#include <stdlib.h>
using namespace std;
struct words
{
    int len;
    char arr[51];
};
void word_sort(int i, int j, struct words *w)
{
    struct words temp;
    int left = i;
    int right = j;
    string pivot = string(w[(i+j)/2].arr);
    if(left >= right)
        return;
    while(left <= right)
    {
        while(string(w[left].arr).compare(pivot) < 0)
            left++;
        while(string(w[right].arr).compare(pivot) > 0)
            right--;
        if(left <= right)
        {
            temp = w[left];
            w[left] = w[right];
            w[right] = temp;
            left++;
            right--;
        }
    }
    word_sort(i, right, w);
    word_sort(left, j, w);
}
void quick(int i, int j, struct words *word)
{
    struct words swap;
    int left = i;
    int right = j;
    int pivot = word[(i+j) /2].len;
    if(left >= right)
        return;
    while(left <=right)
    {
        while(word[left].len < pivot)
            left++;
        while(word[right].len > pivot)
            right--;
        if(left <= right)
        {
            swap = word[left];
            word[left] = word[right];
            word[right] = swap;
            left++;
            right--;
        }
    }
    quick(i, right, word);
    quick(left, j, word);
}
int main()
{
    struct words *data;
    int n, l=0, m=0, count[51] = {0,}, counting = 0, sum=0;
    char word[51] = {0, };
    scanf("%d", &n);
    data = (struct words *)malloc(sizeof(struct words) *n);
    for(int i=0; i<n; i++)
    {
        scanf("%s", word);
        while(word[m] != '\0')
        {
            data[i].arr[m] = word[m];
            counting++;
            l++;
            m++;
            
        }
        count[counting]++;
        data[i].arr[m] = '\0';
        m=0;
        data[i].len = l;
        l = 0;
        counting =0;
    }
    quick(0, n-1, data);
    for(int i=0; i<51; i++)
    {
        if(count[i] >=2)
            word_sort(sum, sum+count[i]-1, data);
        sum += count[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i == 0)
            printf("%s\n", data[i].arr);
        else if(string(data[i].arr) != string(data[i-1].arr))
            printf("%s\n", data[i].arr);
    }
    return 0;
}
