#include <iostream>
using namespace std;
int main()
{
    int i = 0, a, t, counting=0;
    char alp[26] = {0, };
    string words;
    cin >> t;
    for(int j = 0; j<t; j++)
    {
        cin >> words;
        while(words[i] != '\0')
        {
    
            if(i == 0)
            {
                a = words[i];
                alp[a-97] = 1;
                i++;
                continue;
            }
            a = words[i];
            if(alp[a-97] ==0)
            {
                alp[a-97] = 1;
                i++;
                continue;
            }
            else if(alp[a-97] == 1 && words[i] == words[i-1])
            {
                i++;
                continue;
            }
            else
            {
                counting++;
                break;
            }
        }
        for(int k = 0 ; k<26; k++)
            alp[k] = 0;
        i = 0;
    }
    printf("%d", t - counting);
    
    return 0;
}
