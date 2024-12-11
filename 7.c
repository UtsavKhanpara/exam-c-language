#include <stdio.h>

int main()
{
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");
    if (input == NULL)
    {
        printf("Could not open input file.\n");
        return 1;
    }
    output = fopen("output.txt", "w");
    if (output == NULL)
    {
        printf("Could not open output file.\n");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF)
    {

        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 'a' + 'A';
        }
        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("Sentence capitalized and written to output.txt\n");
    return 0;
}
