#include<stdio.h>
#include<conio.h>
#include<math.h>

void addition();
int subtraction();
int multiply(int x,int y);
void division(float, float);
void modulo();
void kgtogm();
void ltoml();
void dollartorupees();
void squareroot();
void simpleinterest();
void compoundinterest();
int power();
void celiustofareheint();
void cmtom();
void foottoinch();
void miletoyard();
void militomicro();
void areaofcircle();
void areaofrectangle();
void areaofcylinder();
void areaoftriangle();
void areaofrhombus();
void areaoftrapezium();
void areaofsquare();

void addition()
{
	int a,b,c;
	printf("\nEnter the value of a and b: ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\nThe addition of %d and %d is %d",a,b,c);
}

void modulo()
{
	int a,b,c;
	printf("\nEnter the value of a and b: ");
	scanf("%d%d",&a,&b);
	c=a%b;
	printf("\nThe Modulo of %d and %d is %d",a,b,c);
}

int subtraction()
{
	int a,b,c;
	printf("\nEnter the value of a and b: ");
	scanf("%d%d",&a,&b);
	c=a-b;
	return c;
}
int multiplication(int x,int y)
{
	int ans;
	printf("\nEnter the numbers for multiplication: ");
	scanf("%d%d",&x,&y);
	ans=x*y;
	return ans;
}

void division(float x, float y)
{
	float z;
	printf("\nEnter the numbers for division: ");
	scanf("%f%f",&x,&y);
	z=x/y;
	printf("\nDivision of %f and %f is %.2f",x,y,z);

}

void simpleinterest()
{
	float principle,time,rate,SI;
	printf("\nEnter principle, time, and rate: ");
	scanf("%f%f%f",&principle,&time,&rate);
	SI=(principle*time*rate)/100;
	printf("\nSimple Interest is %f",SI);
}

void compoundinterest()
{
	float principle,time,rate,CI;
	printf("\nEnter principle, time, and rate: ");
	scanf("%f%f%f",&principle,&time,&rate);
	CI=principle*(pow((1+rate/100),time));
	printf("\nCompound Interest is %f",CI);
}
void squareroot()
{
	int n;
	printf("\nEnter the value to find square root of: ");
	scanf("%f",&n);
	printf("Square root: %f",sqrt(n));
}

int power()
{
	int base,exp;
	long double result = 1.0;
	printf("\nEnter the base and exponent: ");
	scanf("%d%d",&base,&exp);
	while(exp!=0)
	{
		result*=base;
		--exp;
	}
	return result;
}

void kgtogm()
{
	float kg,g;
	printf("\nEnter the kilogram: ");
	scanf("%f",&kg);
	g=kg*1000;
	printf("\nGram: %0.2f",g);
}

void ltoml()
{
	float l,ml;
	printf("\nEnter the litre: ");
	scanf("%f",&l);
	ml=l*1000;
	printf("\nMililitre: %0.2f",ml);
}
void dollartorupees()
{
	float dollar,rupees;
	printf("\nEnter Dollars: ");
	scanf("%f",&dollar);
	rupees=dollar*80;
	printf("\nRupees: %.02f",rupees);
}

void celiustofareheint()
{
    float celsius,fahrenheit;
    printf("\n Enter the Temparature in Celsius : ");
    scanf("%f",&celsius);
    fahrenheit = (1.8 * celsius) + 32;
    printf("\n Temperature in Fahrenheit : %f ",fahrenheit);
}
void cmtom()
{
    float centim, meter;
   printf("enter length in cm: ");
   scanf("%f", &centim);
   meter = centim / 100.0;
   printf("length in mtrs = %.4f", meter);
}
void foottoinch()
{
    int feet;
    double inch;
    printf("\nPlease enter feet: ");
    scanf("%d",&feet);
    inch = 12 * feet;
    printf ("Value in Inch is: %.2f \n", inch);
}
void miletoyard()
{
    float mile,yard;
	printf("\nEnter Miles: ");
	scanf("%f",&mile);
	yard=mile*1760;
	printf("\nYards: %.02f",yard);
}
void militomicro()
{
    float mili,micro;
	printf("\nEnter Milimetres: ");
	scanf("%f",&mili);
	micro=mili*1000;
	printf("\nMicrometres: %.02f",micro);
}

void areaofcircle()
{
    float pie = 3.14;
    float radius,area;
    printf("\nEnter radius of circle: ");
    scanf("%f",&radius);
    area = (pie* (pow(radius,2)));
    printf("\nThe area of the given circle is %f", area);
}
void areaofrectangle()
{
    float length,breadth;
    float area;
    printf("\nEnter the Length of a Rectangle : ");
    scanf("%f",&length);
    printf("\nEnter the Breadth of a Rectangle : ");
    scanf("%f",&breadth);
    area = length * breadth;
    printf("\nArea of Rectangle is : %f",area);
}
void areaofcylinder()
{
    float r, h, surfacearea;
    printf("\nEnter values of radius and height: ");
    scanf("%f%f",&r,&h);
    surfacearea = (2*22*(r + h))/7;
    printf("\nSurface Area of Cylinder is : %f",surfacearea);
}
void areaoftriangle()
{
    float b ,h, area;
    printf("\nEnter values of base and height: ");
    scanf("%f%f",&b,&h);
    area = (b*h)/2 ;
    printf("\nArea of Triangle is: %f",area);
}
void areaofrhombus()
{
    float area, side, p, q;
    printf("\nEnter the length of side and a diagonal");
    scanf("%f%f", &side, &p);
    q = sqrt((4 * side * side) - (p * p));
    area = (p * q) * 0.5;
    printf("\nArea of the Rhombus is %f", area);
}
void areaoftrapezium()
{
    float base1, base2, height, Area, Median;
    printf("\n Please Enter two bases and height of the trapezium: ");
    scanf("%f%f%f", &base1, &base2, &height);
    Area = 0.5 * (base1 + base2) * height;
    Median = 0.5 * (base1+ base2);
    printf("\n Area of a trapezium = %.2f", Area);
    printf("\n Median of a trapezium = %.2f", Median);
}
void areaofsquare()
{
    int s,area_square;
    printf("\nEnter the value of sides: ");
    scanf("%d",&s);
    area_square=s*s;
    printf("Area of the square=%d",area_square);
}