#include <stdio.h>
#include <string.h>


typedef struct {
    char title[100];
    char genre[50];
    char language[50];
} Movie;

int main() {
    int n, i;


    printf("Enter the number of movies: ");
    scanf("%d", &n);

    Movie movies[n];

    // Input 
    for (i = 0; i < n; i++) {
        printf("Enter details for Movie %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", movies[i].title);
        printf("Genre: ");
        scanf(" %[^\n]", movies[i].genre);
        printf("Language: ");
        scanf(" %[^\n]", movies[i].language);
    }


    printf("\nMovie Details:\n");
    for (i = 0; i < n; i++) {
        printf("Movie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Language: %s\n\n", movies[i].language);
    }

}



