#include <stdio.h>
int main()
{
    char str[100], substr[100];
    int i, j, k, count = 0;

    scanf("%s", str);
    scanf("%s", substr);

    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0;
        if (str[i] == substr[j])
        {
            k = i;
            while (str[i] == substr[j] && substr[j] != '\0')
            {
                i++;
                j++;
            }
            if (substr[j] == '\0')
            {
                count++;
            }
            if (str[k] == substr[j])
            {
                i = k;
            }
        }
    }

    printf("The substring occurs %d times in the string.\n", count + 1);
    return 0;
}
