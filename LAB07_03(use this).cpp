#include <stdio.h>
#include <string.h>
#include <ctype.h>

char words[15];
int member , i ;
int main() {
    int check1 = 1;
    int check2 = 1;
    int check3 = 1;
    int check4 = 1;
    const char *keywords[] = {"auto", "double", "int", "struct", "break", "else", "long", "switch", "case", "enum", "register", "typedef", "char", "extern", "return", "union", "const", "float", "short", "unsigned", "continue", "for", "signed", "void", "default", "goto", "sizeof", "volatile", "do", "if", "static", "while"};
    member = sizeof(keywords) / sizeof(keywords[0]);
    printf("Enter name:");
    gets(words);
    for (i = 0; i < member; i++) {
        if (strcmp(keywords[i], words) == 0){
            check1--;
            printf("Eror Rule 1\n");
            break;
        }
    }
    
    if (words[0] == '_' || isalpha(words[0]) != 0)
        check2 = check2;
    else{
        check2--;
        printf("Eror Rule 2\n");}
    
    for (int i = 0; words[i] != '\0'; i++) {
        if(isalnum(words[i])==0){
            if(words[i] == '_'){
                continue;
            } else{
                check3--;
                printf("Eror Rule 3\n");
                break;
            }
        }
    }
    if (strchr(words, ' ') != NULL){
        check4--;
        printf("Eror Rule 4\n");
    }
    
    if (check1 && check2  && check3 && check4){
        printf("ok\n");
    }
}
