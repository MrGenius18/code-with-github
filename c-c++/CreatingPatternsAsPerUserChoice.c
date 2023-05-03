/*
Author: Bhautik Gondaliya
Date of Creation: 6th Feb 2023
Subject: Creating patterns as per user choice using 3 different loops
*/

#include <stdio.h>
#include<conio.h>
void main() 
{
    //initialization of variables
    int choice,i,j,k,l,n,a,rows,triangles;
    char ch;
    
    clrscr();
    
    printf("1) For Loop\n2) While Loop\n3) Do While Loop");
    printf("\nEnter the number of your choice from above: ");
    scanf("%d",&choice);
    
    //start of switch case
    switch(choice)
    {
        //Case 1 -> For Loop
        case 1:printf("\nIn For-Loop do you want \n\t1) Normal Pattern or\n\t2) Reverse Pattern?\nEnter the number 1 or 2: ");
        scanf("%d",&n);
        
        //Normal Pattern Creation (For Loop)
        if(n==1)
        {
            printf("Do you want it\n\t1) Vertically or \n\t2) Horizontally?\nEnter the number 1 or 2: ");
            scanf("%d",&a);
          
            //Vertical Pattern Creation (For Loop)
            if(a==1)
            {
                printf("\nEnter the number of triangles: ");
                scanf("%d",&triangles);
                printf("\nEnter the number of Rows: ");
                scanf("%d",&rows);
                printf("\nEnter the character you want to print in pattern: ");
                scanf(" %c",&ch);
                
                for(k=1;k<=triangles;k++)
                {
                    for(i=1;i<=rows;i++)
                    {
                        for(j=1;j<=i;j++)
                        {
                            printf("%c",ch);
                        }
                        printf("\n");
                    }
                    printf("\n");
                }
            }
          
            //Horizontal Pattern Creation (For Loop)
            else if(a==2)
            {
                printf("\nCurrently 3 triangles will be formed");
                printf("\nEnter the number of Rows: ");
                scanf("%d",&rows);
                printf("\nEnter the character you want to print in pattern: ");
                scanf(" %c",&ch);
                
                for(i=1;i<=rows;i++)  //main loop
                {
                    for(j=1;j<=i;j++) //first loop
                    {
                        printf("%c",ch);
                    }
                    printf("\t");
                    for(k=1;k<=i;k++) //second loop
                    {
                        printf("%c",ch);
                     }
                    printf("\t");
                    for(l=1;l<=i;l++) //third loop
                    {
                        printf("%c",ch);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("\nPlease Select number 1 or 2");
            }
        }
        
        //Reverse Pattern Creation
        if(n==2)
        {
            printf("Do you want it\n\t1) Vertically or \n\t2) Horizontally?\nEnter the number 1 or 2: ");
            scanf("%d",&a);
          
            //Vertical Pattern Creation (For Loop)
            if(a==1)
            {
                printf("\nEnter the number of triangles: ");
                scanf("%d",&triangles);
                printf("\nEnter the number of Rows: ");
                scanf("%d",&rows);
                printf("\nEnter the character you want to print in pattern: ");
                scanf(" %c",&ch);
                
                for(k=1;k<=triangles;k++)
                {
                    for(i=rows;i>=1;i--)
                    {
                        for(j=1;j<=i;j++)
                        {
                            printf("%c",ch);
                        }
                        printf("\n");
                    }
                    printf("\n");
                }
            }
          
            //Horizontal Pattern Creation (For Loop)
            else if(a==2)
            {
                printf("\nCurrently 3 triangles will be formed");
                printf("\nEnter the number of Rows: ");
                scanf("%d",&rows);
                printf("\nEnter the character you want to print in pattern: ");
                scanf(" %c",&ch);
                
                for(i=rows;i>=1;i--)  //main loop
                {
                    for(j=1;j<=i;j++) //first loop
                    {
                        printf("%c",ch);
                    }
                    printf("\t");
                    for(k=1;k<=i;k++) //second loop
                    {
                        printf("%c",ch);
                     }
                    printf("\t");
                    for(l=1;l<=i;l++) //third loop
                    {
                        printf("%c",ch);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("\nPlease Select number 1 or 2");
            }
        }
        break;
        
        //Case 2 -> While Loop
        case 2:printf("\nIn While-Loop do you want \n\t1) Normal Pattern or\n\t2) Reverse Pattern?\nEnter the number 1 or 2: ");
        scanf("%d",&n);
        
        //Normal Pattern Creation
        if(n==1)
        {
            printf("Do you want it\n\t1) Vertically or \n\t2) Horizontally?\nEnter the number 1 or 2: ");
            scanf("%d",&a);
            
            //Vertical Pattern Creation (While Loop)
            if(a==1)
            {
                printf("\nEnter the number of triangles: ");
                scanf("%d",&triangles);
                printf("\nEnter the number of Rows: ");
                scanf("%d",&rows);
                printf("\nEnter the character you want to print in pattern: ");
                scanf(" %c",&ch);
                
                k=1;
                while(k<=triangles)
                {
                    i=1;
                    while(i<=rows)
                    {
                        j=1;
                        while(j<=i)
                        {
                            printf("%c",ch);
                            j++;
                        }
                        printf("\n");
                        i++;
                    }
                    printf("\n");
                    k++;
                }
            }
          
            //Horizontal Pattern Creation (While Loop)
            else if(a==2)
            {
                printf("\nCurrently 3 triangles will be formed");
                printf("\nEnter the number of Rows: ");
                scanf("%d",&rows);
                printf("\nEnter the character you want to print in pattern: ");
                scanf(" %c",&ch);
                
                i=1;
                while(i<=rows)  //main loop
                {
                    j=1;
                    while(j<=i) //first loop
                    {
                        printf("%c",ch);
                        j++;
                    }
                    printf("\t");
                    k=1;
                    while(k<=i) //second loop
                    {
                        printf("%c",ch);
                        k++;
                     }
                    printf("\t");
                    l=1;
                    while(l<=i) //third loop
                    {
                        printf("%c",ch);
                        l++;
                    }
                    printf("\n");
                    i++;
                }
            }
            else
            {
                printf("\nPlease Select number 1 or 2");
            }
        }
        
        //Reverse Pattern Creation (While Loop)
        if(n==2)
        {
            printf("Do you want it\n\t1) Vertically or \n\t2) Horizontally?\nEnter the number 1 or 2: ");
            scanf("%d",&a);
          
            //Vertical Pattern Creation (While Loop)
            if(a==1)
            {
                printf("\nEnter the number of triangles: ");
                scanf("%d",&triangles);
                printf("\nEnter the number of Rows: ");
                scanf("%d",&rows);
                printf("\nEnter the character you want to print in pattern: ");
                scanf(" %c",&ch);
                
                k=1; 
                while(k<=triangles)
                {
                    i=rows;
                    while(i>=1)
                    {
                        j=1;
                        while(j<=i)
                        {
                            printf("%c",ch);
                            j++;
                        }
                        i--;
                        printf("\n");
                    }
                    k++;
                    printf("\n");
                }
            }
          
            //Horizontal Pattern Creation (While Loop)
            else if(a==2)
            {
                printf("\nCurrently 3 triangles will be formed");
                printf("\nEnter the number of Rows: ");
                scanf("%d",&rows);
                printf("\nEnter the character you want to print in pattern: ");
                scanf(" %c",&ch);
                
                i=rows;
                while(i>=1)  //main loop
                {
                    j=1;
                    while(j<=i) //first loop
                    {
                        printf("%c",ch);
                        j++;
                    }
                    printf("\t");
                    k=1;
                    while(k<=i) //second loop
                    {
                        printf("%c",ch);
                        k++;
                     }
                    printf("\t");
                    l=1;
                    while(l<=i) //third loop
                    {
                        printf("%c",ch);
                        l++;
                    }
                    i--;
                    printf("\n");
                }
            }
            else
            {
                printf("\nPlease Select number 1 or 2");
            }
        }
        break;
        
        //Case 3 -> Do While Loop
        case 3:printf("\nIn Do-While-Loop do you want \n\t1) Normal Pattern or\n\t2) Reverse Pattern?\nEnter the number 1 or 2: ");
        scanf("%d",&n);
        
        //Normal Pattern Creation (Do While Loop)
        if(n==1)
        {
            printf("Do you want it\n\t1) Vertically or \n\t2) Horizontally?\nEnter the number 1 or 2: ");
            scanf("%d",&a);
            
            //Vertical Pattern Creation (Do While Loop)
            if(a==1)
            {
                printf("\nEnter the number of triangles: ");
                scanf("%d",&triangles);
                printf("\nEnter the number of Rows: ");
                scanf("%d",&rows);
                printf("\nEnter the character you want to print in pattern: ");
                scanf(" %c",&ch);
                
                k=1;
                do{
                    i=1;
                    do{
                        j=1;
                        do{
                            printf("%c",ch);
                            j++;
                        }while(j<=i);
                        printf("\n");
                        i++;
                    }while(i<=rows);
                    printf("\n");
                    k++;
                }while(k<=triangles);
            }
          
            //Horizontal Patter Creation (Do While Loop)
            else if(a==2)
            {
                printf("\nCurrently 3 triangles will be formed");
                printf("\nEnter the number of Rows: ");
                scanf("%d",&rows);
                printf("\nEnter the character you want to print in pattern: ");
                scanf(" %c",&ch);
                
                i=1;
                  //main loop
                do{
                    j=1;
                     //first loop
                    do{
                        printf("%c",ch);
                        j++;
                    }while(j<=i);
                    printf("\t");
                    k=1;
                     //second loop
                    do{
                        printf("%c",ch);
                        k++;
                     }while(k<=i);
                    printf("\t");
                    l=1;
                     //third loop
                    do{
                        printf("%c",ch);
                        l++;
                    }while(l<=i);
                    printf("\n");
                    i++;
                }while(i<=rows);
            }
            else
            {
                printf("\nPlease Select number 1 or 2");
            }
        }
        
        //Reverse Pattern Creation (Do While Loop)
        if(n==2)
        {
            printf("Do you want it\n\t1) Vertically or \n\t2) Horizontally?\nEnter the number 1 or 2: ");
            scanf("%d",&a);
          
            //Vertical Pattern Creation (Do While Loop)
            if(a==1)
            {
                printf("\nEnter the number of triangles: ");
                scanf("%d",&triangles);
                printf("\nEnter the number of Rows: ");
                scanf("%d",&rows);
                printf("\nEnter the character you want to print in pattern: ");
                scanf(" %c",&ch);
                
                k=1;
                do{
                    i=rows;
                    do{
                        j=1;
                        do{
                            printf("%c",ch);
                            j++;
                        }while(j<=i);
                        i--;
                        printf("\n");
                    }while(i>=1);
                    k++;
                    printf("\n");
                }while(k<=triangles);
            }
          
            //Horizontal Pattern Creation (DO While Loop)
            else if(a==2)
            {
                printf("\nCurrently 3 triangles will be formed");
                printf("\nEnter the number of Rows: ");
                scanf("%d",&rows);
                printf("\nEnter the character you want to print in pattern: ");
                scanf(" %c",&ch);
                
                i=rows;
                  //main loop
                do{
                    j=1;
                     //first loop
                    do{
                        printf("%c",ch);
                        j++;
                    }while(j<=i);
                    printf("\t");
                    k=1;
                     //second loop
                    do{
                        printf("%c",ch);
                        k++;
                     }while(k<=i);
                    printf("\t");
                    l=1;
                     //third loop
                    do{
                        printf("%c",ch);
                        l++;
                    }while(l<=i);
                    i--;
                    printf("\n");
                }while(i>=1);
            }
            else
            {
                printf("\nPlease Select number 1 or 2");
            }
        }
        break;
    } //End of Switch Case
    getch();
} //End of Main