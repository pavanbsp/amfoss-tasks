#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


 int main()
 {
    {   
        char text[100];
	int k;

	printf("plaintext:");
        scanf("%s",text);

	printf("key: ");
	scanf("%d", &k);
	
        printf("cipher text: ");
        for (int i = 0, n = strlen(text); i < n; i++)
            {
                if islower(text[i])
                    printf("%c", (((text[i] + k) - 97) % 26) + 97);
                else if isupper(text[i])
                    printf("%c", (((text[i] + k) - 65) % 26) + 65);
                else
                    printf("%c", text[i]);
            }
            printf("\n");
            return 0;
    }
 }
