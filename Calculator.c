#include <stdio.h>  
int main()  
{  
    char opt;  
    int n1, n2;   
    float result;  
    printf ("Select an operator (+, -, *, /) to perform an operation\n");  
    scanf ("%c", &opt);
    printf ("Enter the first number: ");  
    scanf("%d", &n1);  
    printf ("Enter the second number: ");  
    scanf (" %d", &n2);
      
    if(opt=='+')  
    {  
        result=n1+n2;  
        printf("Addition of %d and %d is: %f",n1,n2,result);  
    }  
      
    else if(opt=='-')  
    {  
        result=n1-n2; 
        printf("Subtraction of %d and %d is: %f",n1,n2,result);  
    }  
     
    else if(opt=='*')  
    {  
        result=n1*n2;
        printf("Multiplication of %d and %d is: %f",n1,n2,result);  
    }  
      
    else if(opt=='/')  
    {  
        if(n2==0) 
        {  
            printf("\nCan't be divided by zero");  
            scanf("%d", &n2);        
        }  
        result=n1/n2;  
        printf("Division of %d and %d is: %.2f",n1,n2,result);  
    }  
    else
    {  
        printf("\nYou have entered wrong inputs");  
    }  
    return 0;  
}  