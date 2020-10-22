//
//  main.c
//  Phone_Number
//
//  Created by Joe Ortiz on 10/22/20.
//  Copyright © 2020 Joe Ortiz. All rights reserved.
// C programming A modern Approach, 2nd Edition by K.N. King Chpater 3 Q1
//Write a program that asks the user to enter a two digit number and then flip it 

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a two digit number:");
    int first;
    
    scanf("%d", &first);
    
    int flip = first%10;
    int second =first/10;
    
    
    printf("The reversal is %d%d " ,flip, second);
    
    
            
       
    
    
    
    
    
    return 0;
}
