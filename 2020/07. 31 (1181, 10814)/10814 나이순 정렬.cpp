#include <iostream>
#include <stdlib.h>
using namespace std;
struct human
{
    int age;
    char name[101];
    int order;
};
void quick(int i, int j, struct human *person) // 나이순 정렬
{
    struct human temp;
    int left = i;
    int right = j;
    int pivot = person[(i+j)/ 2].age;
    int pivot_order = person[(i+j) /2].order;
    if(left >= right)
        return;
    while(left <= right)
    {
        while(person[left].age < pivot || (person[left].age == pivot && person[left].order < pivot_order))
            left++;
        while(person[right].age > pivot || (person[right].age == pivot && person[right].order > pivot_order))
            right--;
        if(left <= right)
        {
            temp = person[left];
            person[left] = person[right];
            person[right] = temp;
            left++;
            right--;
        }
    }
    quick(i, right, person);
    quick(left, j, person);
}
/* void quick_order(int i, int j, struct human *person_o) // 가입순 정렬
{
    struct human temp;
    int left = i;
    int right = j;
    int pivot = person_o[(i+j)/ 2].order;
    if(left >= right)
        return;
    while(left <= right)
    {
        while(person_o[left].order < pivot)
            left++;
        while(person_o[right].order > pivot)
            right--;
        if(left <= right)
        {
            temp = person_o[left];
            person_o[left] = person_o[right];
            person_o[right] = temp;
            left++;
            right--;
        }
    }
    quick(i, right, person_o);
    quick(left, j, person_o);
}
*/
int main()
{
    int n, count[201] = {0, }, counting;
    struct human *data;
    scanf("%d", &n);
    data = (struct human*)malloc(sizeof(struct human) * n);
    for(int i=0; i<n; i++)
    {
        scanf("%d%s", &data[i].age, data[i].name);
        data[i].order = i;
        counting = data[i].age;
        count[counting]++;
    }
    quick(0, n-1, data); // 나이순 정렬 후
/*    for(int i=0; i<201; i++)
    {
        if(count[i] >= 2)
            quick_order(sum, sum+count[i]-1, data); // 나이가 겹치면 가입순 정렬
        sum += count[i];
    }
 */
    for(int i=0; i<n; i++)
        printf("%d %s\n", data[i].age, data[i].name);
    
    free(data);
    return 0;
}
