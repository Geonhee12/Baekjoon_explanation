#include <iostream>

using namespace std;
int check_num = 0;

void checking(string words)
{
    int i = 0;
    while(words[i] != '\0')
    {
        if(words[i] == 'c')
        {
            if(words[i+1] == '=' || words[i+1] == '-')
            {
                check_num++;
                i += 2;
                continue;
            }
            else
            {
                check_num++;
                i++;
                continue;
            }
            
        }
        else if(words[i] == 'd')
        {
            if(words[i+1] == 'z' && words[i+2] == '=')
            {
                check_num++;
                i+= 3;
                continue;
            }
            else if(words[i+1] == '-')
            {
                check_num++;
                i+= 2;
                continue;
            }
            else
            {
                check_num++;
                i++;
                continue;
            }
        }
        else if(words[i] == 'l')
        {
            if(words[i+1] == 'j')
            {
                check_num++;
                i+=2;
                continue;
            }
            else
            {
                check_num++;
                i++;
                continue;
            }
        }
        else if(words[i] == 'n')
        {
            if(words[i+1] == 'j')
            {
                check_num++;
                i+=2;
                continue;
            }
            else
            {
                check_num++;
                i++;
                continue;
            }
        }
        else if(words[i] == 's')
        {
            if(words[i+1] == '=')
            {
                check_num++;
                i+=2;
                continue;
            }
            else
            {
                check_num++;
                i++;
                continue;
            }
        }
        else if(words[i] == 'z')
        {
            if(words[i+1] == '=')
            {
                check_num++;
                i+=2;
                continue;
            }
            else
            {
                check_num++;
                i++;
                continue;
            }
        }
        else
        {
            check_num++;
            i++;
            continue;
        }
    }
    
}
int main()
{
    string words;
    cin >> words;
    checking(words);
    cout << check_num;
    
    return 0;
}
