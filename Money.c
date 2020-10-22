//
//  main.c
//  Git_retry
//
//  Created by Joe Ortiz on 10/22/20.
//  Copyright © 2020 Joe Ortiz. All rights reserved.
//

// C programming A modern Approach, 2nd Edition Chapter 2 Q7
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    int dollar_amount;
    
    printf("Enter dollar amount");
    scanf("%d" ,&dollar_amount);
    
    if(dollar_amount<=0)
       {
           printf("Invalid dollar amount");
           
           
       }
       
    
    int num_of_twenties;
    num_of_twenties = dollar_amount/20;
    printf("Number of $20: %d", num_of_twenties);
    printf("\n");
    
    dollar_amount = dollar_amount - (num_of_twenties*20);
    
    int num_of_tens = 10;
    
    num_of_tens = dollar_amount/10;
    
    printf("Number of $10: %d", num_of_tens);
    printf("\n");
    
    dollar_amount = dollar_amount - (num_of_tens*10);
    
    int num_of_fives = 5;
    
    num_of_fives = dollar_amount/num_of_fives;
    
    printf("Number of $5: %d ",num_of_fives);
    printf("\n");
    dollar_amount = dollar_amount - (num_of_fives*5);
    
    int num_of_ones =1;
    num_of_ones = dollar_amount/1;
    printf("Number of $1: %d",num_of_ones);
    printf("\n");
    
   
    
    
       
    
    
    
    return 0;

    
}
