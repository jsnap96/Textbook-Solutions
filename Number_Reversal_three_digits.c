//
//  main.c
//  Phone_Number
//
//  Created by Joe Ortiz on 10/22/20.
//  Copyright © 2020 Joe Ortiz. All rights reserved.
// C programming A modern Approach, 2nd Edition by K.N. King Chpater 4 Q2
//Ask the user to enter a three digit number and then flip it 

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a three digit number:");
    int first;
    
    scanf("%d", &first);
    
    int flip;
    flip = first%100;
    int division;
    division = first/100; //5
    int division_one;
    
    division_one= first%100; //43
    
    int three;
    
    three = division_one/10;  //4
    
    int four = division_one%10;  //3
    
    
    
    
    printf("The reversal is %d%d%d " , four,three,division);
    
    
            
       
    
    
    
    
    
    return 0;
}
