//
//  main.c
//  Tax
//
//  Created by Joe Ortiz on 10/23/20.
//  Copyright © 2020 Joe Ortiz. All rights reserved.
//C programming A modern Approach, 2nd Edition by K.N. King Chpater 5 Q5
//Write a program that takes ask the user to enter the tax amount and then displays it

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter amount");
    int amount;
    scanf("%d",&amount);
    
    if(amount<750)
    {
        printf("Amount of tax: one percent of income");
        
    }
    
    if(amount>750 && amount<=2250)
       {
           printf("Amount of tax: $7.50 of income plus two percent of amount over 750 ");
           
       }
    
    if(amount>2250 && amount<=3750)
    {
        printf("Amount of tax: $37.50 of income plus three percent of amount over 2,250");
        
    }
    
    if(amount>3750 && amount<=5250)
    {
        printf("Amount of tax: $82.50 of income plus four percent of amount over 3,750");
        
    }

    if(amount>5250 && amount<=7000)
    {
        printf("Amount of tax: $142.50 of income plus five percent of amount over 5,250");
        
    }
    
    if(amount>7000)
    {
        printf("Amount of tax: $230.00 of income plus six percent of amount over 7,000");
        
    }


    
    
    
    return 0;
}
