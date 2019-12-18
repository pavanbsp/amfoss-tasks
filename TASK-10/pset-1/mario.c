#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int height;

    do
    {
        printf("Height: ");
        scanf("%d",&height);
    }
    while (height < 0 || height > 23);

    for (int i = 0; i < height; i++)
    {
        for (int spaces = height - i; spaces > 1; spaces--)
        {
            printf(" ");
        }
        for (int hash = 0; hash < i + 2; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}
