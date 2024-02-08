#include <stdio.h>
#include <string.h>

int main(void) {
    char ch[10];
    
    int check = -1;
    printf("Enter your text: ");
    scanf("%s", ch);
    
    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] == 'a') {
            check = i;
            break;
        }
    }
    
    printf("%d\n", check); 
    
    return 0;
}
