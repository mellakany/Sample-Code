#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[] ) {
    char str[10]; 
    
    
    if( argc == 2 ) {
        printf("\nMy Sleep for %s seconds\n", argv[1]);
        strcpy(str, argv[1]);
        int i = atoi(str);
        sleep(i);
        return 0;

    }else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");

    }else {
      printf("One argument expected.\n");
    }
    

}