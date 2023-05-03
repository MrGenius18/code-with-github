/*
Author: Bhautik Gondaliya
Date of Creation: 7th Feb 2023
Subject: Array operations
*/

#include<stdio.h>
#include<conio.h>
#define SIZE 3
#define SIZE2D 3
void main()
{
	//initialize arrays and variables
	int a1[SIZE],b1[SIZE],ans1[SIZE],
	a2[SIZE2D][SIZE2D],b2[SIZE2D][SIZE2D],ans2[SIZE2D][SIZE2D];
	int t[9],k,d,i,j,arrtypechoice,arrselectoperation,sortD,count=0,temp,exchange=1;
	clrscr();

	//Asking for Array Type to user
	printf("Which type of array do want to print?\n\t1) One Dimension\n\t2) Two Dimension");
	printf("\nPlease enter the number: ");
	scanf("%d",&arrtypechoice);
	switch(arrtypechoice)
	{
		//Operations,Scanning and Printing of One Dimension Array
		//Scanning first 1D Array
		case 1:printf("\nPlease Enter values of 2 1D arrays: \n");
		for(i=0;i<SIZE;i++)
		{
			printf("\nPlease Enter the value of a1[%d]: ",i);
			scanf("%d",&a1[i]);
		}
		//Printing first 1D Array
		printf("\nYour first 1D Array is: ");
		for(i=0;i<SIZE;i++)
		{
			printf("%d\t",a1[i]);
		}
		//Scanning second 1D Array
		for(i=0;i<SIZE;i++)
		{
			printf("\nPlease Enter the value of b1[%d]: ",i);
			scanf("%d",&b1[i]);
		}
		//Printing second 1D Array
		printf("\nYour second 1D Array is: ");
		for(i=0;i<SIZE;i++)
		{
			printf("%d\t",b1[i]);
		}
		printf("\n\nWhat operations do you want to perform?");
		printf("\n\t1) -> Addition");
		printf("\n\t2) -> Subtraction");
		printf("\n\t3) -> Division");
		printf("\n\t4) -> Multiplication");
		printf("\n\t5) -> Sorting");
		printf("\n\nPlease Enter the number you want to perform: ");
		scanf("%d",&arrselectoperation);
		switch(arrselectoperation)
		{
			case 1: printf("\n\nAddition of 2 1D Arrays is: ");
				for(i=0;i<SIZE;i++)
				{
					ans1[i]=a1[i]+b1[i];
				}
				for(i=0;i<SIZE;i++)
				{
					printf("/t%d",ans1[i]);
				}
				break;
			case 2: printf("\n\nSubtraction of 2 1D Arrays is: ");
				for(i=0;i<SIZE;i++)
				{
					ans1[i]=a1[i]-b1[i];
				}
				for(i=0;i<SIZE;i++)
				{
					printf("/t%d",ans1[i]);
				}
				break;
			case 3: printf("\n\nDivision of 2 1D Arrays is: ");
				for(i=0;i<SIZE;i++)
				{
					ans1[i]=a1[i]/b1[i];
				}
				for(i=0;i<SIZE;i++)
				{
					printf("/t%d",ans1[i]);
				}
				break;
			case 4: printf("\n\nMultiplication of 2 1D Arrays is: ");
				for(i=0;i<SIZE;i++)
				{
					ans1[i]=a1[i]*b1[i];
				}
				for(i=0;i<SIZE;i++)
				{
					printf("/t%d",ans1[i]);
				}
				break;
			case 5: printf("\n\nWhich arrays sorting do you want 1st one or 2nd one?");
			printf("\nPlease Enter the number: ");
			scanf("%d",&sortD);
			if(sortD==1)
			{
				for(i=0;i<SIZE && exchange==1;i++)
				{
					exchange=0;
					for(j=0;j<SIZE-1;j++)
					{
						if(a1[j]>a1[j+1])
						{
							exchange=1;
							temp=a1[j];
							a1[j]=a1[j+1];
							a1[j+1]=temp;
						}
						count++;
					}
				}
				printf("\nSorted Array is:\n");
				for(i=0;i<SIZE;i++)
				{
					printf("\t%d",a1[i]);
				}
				printf("\n\nThe number of iteration are: %d",count);
				getch();
			}
			if(sortD==2)
			{
				for(i=0;i<SIZE && exchange==1;i++)
				{
					exchange=0;
					for(j=0;j<SIZE-1;j++)
					{
						if(b1[j]>b1[j+1])
						{
							exchange=1;
							temp=b1[j];
							b1[j]=b1[j+1];
							b1[j+1]=temp;
						}
						count++;
					}
				}
				printf("\nSorted Array is:\n");
				for(i=0;i<SIZE;i++)
				{
					printf("\t%d",b1[i]);
				}
				printf("\n\nThe number of iteration are: %d",count);
				getch();
			}
			break;
		}
		break;




		//Scanning First 2D Array
		case 2:printf("\nPlease Enter values of 2 2D arrays: \n");
		for(i=0;i<SIZE2D;i++)
		{
			for(j=0;j<SIZE2D;j++)
			{
				printf("\nPlease Enter the value of a2[%d][%d]: ",i,j);
				scanf("%d",&a2[i][j]);
			}
		}
		//Printing first 2D Array
		printf("\nYour first 2D Array is: \n");
		for(i=0;i<SIZE2D;i++)
		{
			for(j=0;j<SIZE2D;j++)
			{
				printf("%d ",a2[i][j]);
			}
			printf("\n");
		}
		//Scanning second 2D Array
		for(i=0;i<SIZE2D;i++)
		{
			for(j=0;j<SIZE2D;j++)
			{
				printf("\nPlease Enter the value of b2[%d][%d]: ",i,j);
				scanf("%d",&b2[i][j]);
			}
		}
		//Printing second 2D Array
		printf("\nYour second 2D Array is: ");
		for(i=0;i<SIZE2D;i++)
		{
			for(j=0;j<SIZE2D;j++)
			{
				printf("%d ",b2[i][j]);
			}
			printf("\n");
		}
		printf("\n\nWhat operations do you want to perform?");
		printf("\n\t1) -> Addition");
		printf("\n\t2) -> Subtraction");
		printf("\n\t3) -> Division");
		printf("\n\t4) -> Multiplication");
		printf("\n\t5) -> Sorting");
		printf("\n\nPlease Enter the number you want to perform: ");
		scanf("%d",&arrselectoperation);
		switch(arrselectoperation)
		{
			case 1: printf("\n\nAddition of 2 2D Arrays is: ");
				for(i=0;i<SIZE2D;i++)
				{
					for(j=0;j<SIZE2D;j++)
					{
						ans2[i][j]=a2[i][j]+b2[i][j];
					}
				}
				for(i=0;i<SIZE2D;i++)
				{
					for(j=0;j<SIZE2D;j++)
					{
						printf("%d ",ans2[i][j]);
					}
					printf("\n");
				}
				break;
			case 2: printf("\n\nSubtraction of 2 2D Arrays is: ");
				for(i=0;i<SIZE2D;i++)
				{
					for(j=0;j<SIZE2D;j++)
					{
						ans2[i][j]=a2[i][j]-b2[i][j];
					}
				}
				for(i=0;i<SIZE2D;i++)
				{
					for(j=0;j<SIZE2D;j++)
					{
						printf("%d ",ans2[i][j]);
					}
					printf("\n");
				}
				break;
			case 3: printf("\n\nDivision of 2 2D Arrays is: ");
				for(i=0;i<SIZE2D;i++)
				{
					for(j=0;j<SIZE2D;j++)
					{
						ans2[i][j]=a2[i][j]/b2[i][j];
					}
				}
				for(i=0;i<SIZE2D;i++)
				{
					for(j=0;j<SIZE2D;j++)
					{
						printf("%d ",ans2[i][j]);
					}
					printf("\n");
				}
				break;
			case 4: printf("\n\nMultiplication of 2 2D Arrays is: ");
				for(i=0;i<SIZE2D;i++)
				{
					for(j=0;j<SIZE2D;j++)
					{
						ans2[i][j]=a2[i][j]*b2[i][j];
					}
				}
				for(i=0;i<SIZE2D;i++)
				{
					for(j=0;j<SIZE2D;j++)
					{
						printf("%d ",ans2[i][j]);
					}
					printf("\n");
				}
				break;
			case 5:printf("\n\nWhich arrays sorting do you want 1st one or 2nd one?");
			printf("\nPlease Enter the number: ");
			scanf("%d",&sortD);
			if(sortD==1)
			{
			       k=0;
			       for(i=0;i<SIZE2D;i++)
			       {
					for(j=0;j<SIZE2D;j++)
					{
						t[k]=a2[i][j];
						k++;
					}
			       }

			       for(i=0;i<(SIZE2D*SIZE2D) && exchange==1;i++)
				{
					exchange=0;
					for(j=0;j<(SIZE2D*SIZE2D)-1;j++)
					{
						if(t[j]>t[j+1])
						{
							exchange=1;
							temp=t[j];
							t[j]=t[j+1];
							t[j+1]=temp;
						}
						count++;
					}
				}
				
				k=0;
				for(i=0;i<SIZE2D;i++)
			    {
    					for(j=0;j<SIZE2D;j++)
    					{
    						ans2[i][j]=t[k];
    						k++;
    					}
			     }

			     printf("\nSorted Array is:\n");
			     for(i=0;i<SIZE2D;i++)
			     {
			         for(j=0;j<SIZE2D;j++)
			         {
			             printf("%d ",ans2[i][j]);
					 }
					 printf("\n");
			     }
			}
			if(sortD==2)
			{
				k=0;
			       for(i=0;i<SIZE2D;i++)
			       {
					for(j=0;j<SIZE2D;j++)
					{
						t[k]=b2[i][j];
						k++;
					}
			       }

			       for(i=0;i<(SIZE2D*SIZE2D) && exchange==1;i++)
				{
					exchange=0;
					for(j=0;j<(SIZE2D*SIZE2D)-1;j++)
					{
						if(t[j]>t[j+1])
						{
							exchange=1;
							temp=t[j];
							t[j]=t[j+1];
							t[j+1]=temp;
						}
						count++;
					}
				}
				
				k=0;
				for(i=0;i<SIZE2D;i++)
			    {
    					for(j=0;j<SIZE2D;j++)
    					{
    						ans2[i][j]=t[k];
    						k++;
    					}
			     }

			     printf("\nSorted Array is:\n");
			     for(i=0;i<SIZE2D;i++)
			     {
			         for(j=0;j<SIZE2D;j++)
			         {
			             printf("%d ",ans2[i][j]);
					 }
					 printf("\n");
			     }
			}
			break;
		}
		break;
		case 3:exit(0);
		break;
	}
	getch();
}