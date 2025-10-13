/*
UIN 251M031
*/
#include <stdio.h>

int main() {
    
    int num1,num2,num3;
    int choice;
    
    printf("\nEnter First Number => ");
    scanf("%d",&num1);
    
    printf("\nEnter Second Number => ");
    scanf("%d",&num2);
    
    printf("\n1.Addition  \n2. Subtraction  \n3. Multiplication  \n4. Division  \n5. Exit \nEnter Your choice => ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        
        case 1:
            num3 = num1 + num2;
            printf("The Addition of %d & %d is %d",num1,num2,num3);
            break;
        
        case 2:
            num3 = num1 - num2;
            printf("The Subtraction of %d & %d is %d",num1,num2,num3);
            break;
        
        case 3:
            num3 = num1 * num2;
            printf("The Multiplication of %d & %d is %d",num1,num2,num3);
            break;
        
        case 4:
            num3 = num1 / num2;
            printf("The Division of %d & %d is %d",num1,num2,num3);
            break;
        
        case 5:
            break;

        default :
            printf("Invalid Choice!");
            break;
        
    }
    return 0;
}
