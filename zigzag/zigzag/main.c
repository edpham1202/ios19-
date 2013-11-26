//
//  main.c
//  zigzag
//
//  Created by Long Pham on 11/26/13.
//  Copyright (c) 2013 Long Pham. All rights reserved.
//

#include <stdio.h>
int main(void)
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++) printf(" ");
        printf("*\n");
        
    }
    for (int k=4; k>1; k--)
    {
        for (int l=0; l<=k-1; l++) printf(" ");
        
        
        printf("*\n");
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++) printf(" ");
        printf("*\n");
        
    }
    for (int k=4; k>1; k--)
    {
        for (int l=0; l<=k-1; l++) printf(" ");
        
        
        printf("*\n");
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++) printf(" ");
        printf("*\n");
        
    }
    for (int k=4; k>1; k--)
    {
        for (int l=0; l<=k-1; l++) printf(" ");
        
        
        printf("*\n");
    }
}

