#include <stdio.h>
#include <string.h>

int main(void){
    char message[100];
    int len = strlen(message);

    fgets(message, sizeof(message), stdin);

    for (int i = 0; i < len/2; i++)
    {
        char temp = message[i];
        message[i] = message[len - 1 - i];
        message[len - 1 - i] = temp;
    }
    

    printf("Message: %s", message);
}