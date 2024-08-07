#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char word[20], kicks[20];
    char kick;
    int hit = 0, hanged = 0, try = 0;
    long long unsigned int i;

    strcpy(word,"orange");

    do{

       // printf("Debugging\n");

        for(i = 0; i < strlen(word); i++){

            int find = 0;
            
            for(int j = 0; j < try; j++){
                //printf("Debbugging loop\n");

                    if(kicks[i] == word[i]){
                       // printf("Debugging find\n");
                        find = 1;
                        break;
                    }
                
            }

            if(find){
                printf("%c ", word[i]);
            }
            else{
                printf("_ ");
            }
        }

        printf("\n");

        printf("Enter a letter? ");
        scanf(" %c", &kick);

        kicks[try] = kick;
        try++;

    }while(!hit && !hanged);

    return 0;
}