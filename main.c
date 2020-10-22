//
//  main.c
//  Proj1
//
//  Created by Joe Ortiz on 6/9/20.
//  Copyright © 2020 Joe Ortiz. All rights reserved.
//

#include <stdio.h>


// C programming A modern Approach, 2nd Edition Chapter 2 Q4

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter an amount:");
    
    double amount;
    
    scanf("%lf",&amount);
    
    double tax = 0.05;
    
    double add_tax = amount * tax;
    
    double display;
    
    display = add_tax+amount;
    
    printf("With tax added: $ %0.2lf\n",display);
  
    
    
    
    
    
    
    return 0;
}
