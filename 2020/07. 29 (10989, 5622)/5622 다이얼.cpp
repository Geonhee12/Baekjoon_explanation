#include <iostream>

using namespace std;
int main()
{
    char num[32] = {0,};
    int i=0, time=0;
    scanf("%s", num);
    while(num[i] != '\0')
    {
        num[i] -= 64;
        if(1<= num[i] && num[i]<=3)
            time += 3;
        else if(4<= num[i] && num[i]<=6)
            time += 4;
        else if(7<= num[i] && num[i]<=9)
            time += 5;
        else if(10<= num[i] && num[i]<=12)
            time += 6;
        else if(13<= num[i] && num[i]<=15)
            time += 7;
        else if(16<= num[i] && num[i]<=19)
            time += 8;
        else if(20<= num[i] && num[i]<=22)
            time += 9;
        else if(23<= num[i] && num[i]<=26)
            time += 10;
        i++;
    }
    printf("%d", time);
    
    return 0;
}
