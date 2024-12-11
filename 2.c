#include <stdio.h>

void countVowels(char *sentence, int *vowelCount)
{
    while (*sentence)
    {
        char ch = tolower(*sentence); 
        if (ch == 'a')
            vowelCount[0]++;
        else if (ch == 'e')
            vowelCount[1]++;
        else if (ch == 'i')
            vowelCount[2]++;
        else if (ch == 'o')
            vowelCount[3]++;
        else if (ch == 'u')
            vowelCount[4]++;
        sentence++;
    }
}

int main()
{
    char sentence[100];
    int vowelCount[5] = {0}; 

  
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

  
    countVowels(sentence, vowelCount);

    
    printf("\nVowel Counts:\n");
    printf("A: %d\n", vowelCount[0]);
    printf("E: %d\n", vowelCount[1]);
    printf("I: %d\n", vowelCount[2]);
    printf("O: %d\n", vowelCount[3]);
    printf("U: %d\n", vowelCount[4]);

    return 0;
}
