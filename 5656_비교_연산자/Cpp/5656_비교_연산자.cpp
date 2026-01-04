#include <cstdio>

int main()
{
    int a;
    int b;
    char op[3];
    int case_num = 1;

    while(true)
    {
        if(scanf("%d %s %d", &a, op, &b) != 3)
        {
            break;
        }

        if(op[0] == 'E')
        {
            break;
        }

        int result = 0;

        if(op[0] == '>')
        {
            if(op[1] == '=')
            {
                result = (a >= b);
            }
            else
            {
                result = (a > b);
            }
        }
        else if(op[0] == '<')
        {
            if(op[1] == '=')
            {
                result = (a <= b);
            }
            else
            {
                result = (a < b);
            }
        }
        else if(op[0] == '=' && op[1] == '=')
        {
            result = (a == b);
        }
        else if(op[0] == '!' && op[1] == '=')
        {
            result = (a != b);
        }

        const char* result_text;
        if(result)
        {
            result_text = "true";
        }
        else
        {
            result_text = "false";
        }

        printf("Case %d: %s\n", case_num, result_text);
        case_num++;
    }
}
