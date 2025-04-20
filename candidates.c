#include <stdio.h>
#include <stdlib.h>

int method1(){
    int age;
    float height;    
    char name[50];
    char gender;
    char introduction[100];

    printf("==================== Method 1 (scanf: input seperately) ====================\n");

    printf("Enter age: ");
    scanf("%d", &age);
    getchar();  // Remove newline characters remaining in the input buffer

    printf("Enter height: ");
    scanf("%f", &height); // This is not valid for scanf
    getchar();  // Remove newline characters remaining in the input buffer

    printf("Enter name: ");
    scanf("%s", name);
    getchar();  // Remove newline characters remaining in the input buffer

    printf("Enter gender: ");
    scanf("%c", &gender);
    getchar();  // Remove newline characters remaining in the input buffer

    printf("Enter introduction: ");
    scanf("%s", introduction);
    getchar();  // Remove newline characters remaining in the input buffer

    printf("[RESULT] Age: %d, Height: %.2f, Name: %s, Gender:%c, Intoduction:%s\n\n", 
        age, height, name, gender, introduction);

    return 0;
}