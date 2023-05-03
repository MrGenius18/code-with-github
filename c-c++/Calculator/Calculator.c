/*
Author: Bhautik Gondaliya
Date of Creation: 8th Feb 2023
Subject: Create a calculator with 24 Functionality
functions are written in Cal.h file.
*/

#include<Cal.h>

void main()
{
	int choice,ans,x,y,result;
		clrscr();
		printf("Enter your Choice:\n");
		printf("1) Addition\n");
		printf("2) Subtraction\n");
		printf("3) Multiplication\n");
		printf("4) Division\n");
		printf("5) Modulo\n");
		printf("6) Simple Interest\n");
		printf("7) Compound Interest\n");
		printf("8) Square Root\n");
		printf("9) Power\n");
		printf("10) KG to Gram\n");
		printf("11) Litre to ML\n");
		printf("12) Dollar to Rupees\n");
		printf("13) Celius to Fareheint\n");
		printf("14) Centimeter to Meter\n");
		printf("15) Foot to Inch\n");
		printf("16) Mile to Yard\n");
		printf("17) Milimeter to Micrometer\n");
		printf("18) Area of Circle\n");
		printf("19) Area of Rectangle\n");
		printf("20) Area of Cylinder\n");
		printf("21) Area of Triangle\n");
		printf("22) Area of Rhombus\n");
		printf("23) Area of Trapezium\n");
		printf("24) Area of Square\n");


		printf("\nEnter nmuber of your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: addition();
			break;
			case 2:ans=subtraction();
			printf("\n The subtract function has return %d value.",ans);
			break;
			case 3:ans=multiplication(x,y);
			printf("\nThe multiplication has return %d value",ans);
			break;
			case 4:division(x,y);
			break;
			case 5:modulo();
			break;
			case 6:simpleinterest();
			break;
			case 7:compoundinterest();
			break;
			case 8:squareroot();
			break;
			case 9:result=power();
			printf("\nPower: %d",result);
			break;
			case 10:kgtogm();
			break;
			case 11:ltoml();
			break;
			case 12:dollartorupees();
			break;
			case 13:celiustofareheint();
			break;
			case 14:cmtom();
			break;
			case 15:foottoinch();
			break;
			case 16: miletoyard();
			break;
			case 17: militomicro();
			break;
			case 18:areaofcircle();
			break;
			case 19:areaofrectangle();
			break;
			case 20:areaofcylinder();
			break;
			case 21:areaoftriangle();
			break;
			case 22:areaofrhombus();
			break;
			case 23:areaoftrapezium();
			break;
			case 24:areaofsquare();
			break;
			case 25:exit(0);
			break;
		} //End of Switch
		getch();
} //End of main