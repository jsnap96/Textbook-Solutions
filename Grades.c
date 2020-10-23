//
//  main.c
//  Grading
//
//  Created by Joe Ortiz on 10/23/20.
//  Copyright © 2020 Joe Ortiz. All rights reserved.
//C programming A modern Approach, 2nd Edition by K.N. King Chpater 5 Q10
//Write a program that takes an Integer grade and returns the letter grade

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter grade");
    int grade;
    scanf("%d", &grade);
    
    
    switch(grade/10)
    {
        case 10:
            printf("Grade is A");
            break;
            
        case 9:
        printf("Grade is A");
        break;
            
        case 8:
        printf("Grade is B");
        break;
            
        case 7:
        printf("Grade is C");
        break;
            
        case 6:
        printf("Grade is D");
        break;
            
        default:
            printf("Grade is F");
            
            
            
            
    }
    
    
    return 0;
}
