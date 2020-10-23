//
//  main.c
//  If_blocks
//
//  Created by Joe Ortiz on 10/22/20.
//  Copyright © 2020 Joe Ortiz. All rights reserved.
//C programming A modern Approach, 2nd Edition by K.N. King Chpater 5 Q1
//Write a program that counts the number of digits in a number 

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a number:");
    int num;
    scanf("%d",&num);
    
    if(num>=100)
    {
        printf("The number has 3 digits");
    
    }
    
    
       if(num>=10 && num<=99)
       {
           printf("The number has 2 digits");
       
       }
    
    if(num>=0 && num<=9)
          {
              printf("The number has 1 digit");
          
          }
          
       
    
    
    
    
    return 0;
}
