#include <stdio.h>

int main() {
    char res[20];

    printf("Will you be my valintine?");
    scanf("%s", &res);

    if(res[0] == 'y' && res[1] == 'e' && res[2] == 's') {
        printf("yes i will!\n");
    }
    else if(res[0] == 'n' && res[1] == 'o') {
        printf("Your dead to me!\n");
     
    }
    else {
        printf("why\n");
    }

    return 0;
}
