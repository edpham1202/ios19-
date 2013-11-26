//
//  main.c
//  tree
//
//  Created by Long Pham on 11/26/13.
//  Copyright (c) 2013 Long Pham. All rights reserved.
//

#include <stdio.h>



int main() {
    int rows, star, spaces;
    int number_of_stars = 8;
    
    int number_of_rows = number_of_stars;
    
    for (rows=1; rows <= number_of_rows; rows++) {
        for (spaces=1; spaces <= number_of_stars; spaces++) {
            printf(" ");
        }
        for (star=1; star <= rows; star++) {
            printf(".");
            printf(" ");
        }
        printf("\n");
        number_of_stars = number_of_stars - 1
        ;
    }
    printf("\n       ..."
           "\n       ..."
           "\n       ..."
           );
}


