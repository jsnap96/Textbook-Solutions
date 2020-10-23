//
//  main.c
//  Storm
//
//  Created by Joe Ortiz on 10/22/20.
//  Copyright © 2020 Joe Ortiz. All rights reserved.
// C programming A modern Approach, 2nd Edition by K.N. King Chpater 5 Q4
//Write a program that asks the user to enter a wind speed(int knots), then displays the correct description

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int speed;
    
    printf("Enter the wind speed");
    scanf("%d",&speed);
    
    
    if(speed>=1 && speed<=3)
    {
        printf("Calm");
    }
    
    if(speed>=4 && speed<=27)
    {
        printf("Light Air");
    }
    
    if(speed>=28 && speed<=47)
    {
        printf("Gale");
    }
    
    if(speed>=48 && speed<=63)
    {
        printf("Storm");
    }
    
    
    if(speed>63)
    {
        printf("Hurricane");
    }
    
    return 0;
}
