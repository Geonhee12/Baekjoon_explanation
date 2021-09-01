#include <iostream>
#include <cmath>
int sort[500050] ={0,};
int main()
{
    int n, k, sum=0, fre=0, count =0, sort_num=0, mid, wide=0;
    double avr=0;
    int num[8010] ={0,}, checking_num=0, checking_2 = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) // 값 입력 및 빈도 체크
    {
        scanf("%d", &k);
        num[k+4000]++;
        sum += k;
    }
    avr = double(sum) / double(n); // 평균 구하기
    avr = round(avr);
    for(int i=0; i<8001; i++) // 최빈값_설정
    {
        if(i==0)
            fre = num[i];
        else if(num[i] > fre)
            fre = num[i];

    }
    for(int i=0; i<8001; i++) // 최빈값 탐색
    {
        if(fre == num[i])
        {
            count++;
            checking_num++;
            if(count == 2 || count == 1)
                checking_2 = i- 4000;
        }
    }
    
    fre = checking_2;

    for(int i=0; i<8001; i++) // 0, 카운팅 정렬
    {
        while(num[i] != 0)
        {
                sort[sort_num] = i-4000;
                sort_num++;
                num[i]--;
        }
    }
    mid = sort[(sort_num-1)/2]; // 중앙값
    wide = sort[(sort_num-1)] - sort[0]; //범위
    printf("%d\n%d\n%d\n%d", int(avr), mid, fre, wide);
    
    return 0;
}
