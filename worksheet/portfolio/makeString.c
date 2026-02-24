
/*
Name: Saniha Srikanth Kakolu
Student ID: 201964405
*/
#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {
    char buffer[100];
    
   
    // define appropriate data to hold your answer
    if (argc < 2 || argc > 11) {  
        return 1; 
    } 
    // 2. Check each argument length (1–4 chars) 
    for (int i = 1; i < argc; i++) { 
        int len = strlen(argv[i]); 
        if (len < 1 || len > 5) { 
             return 1;
            } 
    }
    buffer[0]='\0';
    for (int i = 1; i < argc; i++){
        strcat(buffer, argv[i]);
        if (i < argc - 1) {
            strcat(buffer, "-");
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}