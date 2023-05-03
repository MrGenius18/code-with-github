/*
Name: Bhautik Gondaliya
Date of Creation: 9th Feb 2023
Subject: To Create student application
Description: In student application we can add,display,search,update the marks and 
             also delete the marks of the student if required. 
             Currently This code will scan 10 details of students and can be modified if required more than 10 students.
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 10

struct Student
{
    int sid;
    char name[30];
    float fees,maths,comp,eng,total,per;
    char grade;
    int flag;
}s[SIZE];

//declaration of the functions

void scanStudentDetails();
void displayStudentDetails();
void calculateMarkSheet(int i);
int search(int id);
void update(int id);
void displayParticular(int index);
void del(int id);
//declaration of the functions end


void main()
{
    int choice,id,index=-1;
    while(1)
    {
        clrscr();
        printf("Enter the Choice\n");
        printf("\t1) Create Students\n");
        printf("\t2) Display Students\n");
        printf("\t3) Search\n");
        printf("\t4) Update\n");
        printf("\t5) Delete\n");
        printf("\t6) Exit\n");
        printf("Enter the choice in numerical value: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:scanStudentDetails();
            break;
            case 2: displayStudentDetails();
            break;
            case 3: printf("\nEnter the ID you wanna search: ");
                    scanf("%d",&id);
                    index=search(id);
                    if(index>=0)
                    {
                        displayParticular(index);
                    }
                    else
                    {
                        printf("\nThe record not found");
                    }
                    getch();
            break;
            case 4: printf("\nEnter the ID you wanna Update: ");
                    scanf("%d",&id);
                    update(id);
            break;
            case 5: printf("\nEnter the ID you wanna Delete: ");
                    scanf("%d",&id);
                    del(id);
                    displayStudentDetails();
                    getch();
            break;
            case 6: exit(0);
            default: printf("\nInvalid Choice");
        } //End of Switch
        getch();
    } //end of while
} //end of main




//Scan Students Details Method
void scanStudentDetails()
{
    FILE *fp;
    float temp,i;
    fp=fopen("student.txt","w");
    for(i=0;i<SIZE;i++)
    {
        printf("\nEnter the sid: ");
        scanf("%d",&s[i].sid);
        printf("\nEnter the name: ");
        scanf("%s",&s[i].name);
        printf("\nEnter the fees: ");
        scanf("%f",&temp);
        s[i].fees=temp;
        printf("\nEnter the comp, eng, maths: ");
        scanf("%f",&temp);
        s[i].comp=temp;
        scanf("%f",&temp);
        s[i].eng=temp;
        scanf("%f",&temp);
        s[i].maths=temp;
        calculateMarkSheet(i);
        s[i].flag=1;
	fwrite(&s[i],sizeof(s[i]),1,fp);
    }
    fclose(fp);
}


//Calculate Marks of Student Method
void calculateMarkSheet(int i)
{
    s[i].total=s[i].maths+s[i].eng+s[i].comp;
    s[i].per=s[i].total/3;
    if(s[i].per>=90)
    {
	s[i].grade='A';
    }
    else
    {
        s[i].grade='B';
    }
}


//Display Student Details Method
void displayStudentDetails()
{
    FILE *fp;
    int i;
    fp=fopen("student.txt","r");
    printf("\nsid\tname\tfees\tcomp\tmaths\ttotal\tper\tgrade\n");
    for(i=0;i<SIZE;i++)
    {
        if(s[i].flag==1)
        {
            printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c",s[i].sid,
        s[i].name,s[i].fees,s[i].comp,s[i].maths,s[i].total,s[i].per,s[i].grade);
        }
    }
    fclose(fp);
}


//Searching Method to Search Particular Student's Details Using ID value
int search(int id)
{
    int i;
    int found=-1;
    for(i=0;i<SIZE;i++)
    {
        if(s[i].sid==id)
        {
            found=i;
            return found;
        }
    }
    return found;
}


//Display Details of Particular
void displayParticular(int index)
{
    clrscr();
    if(s[index].flag==1)
    {
	printf("\nsid\tname\tfees\tcomp\tmaths\ttotal\tper\tgrade\n");
	printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c",s[index].sid,
	s[index].name,s[index].fees,s[index].comp,s[index].maths,s[index].total,s[index].per,s[index].grade);
    }
}


//Update Method for updating name,fees,marks.
void update(int id)
{
    int index=-1,choice,choice1;
    float temp;
    index=search(id);
    if(index>=0)
    {
        printf("\nWhat Do You Want To Update?");
        printf("\n\t1) Update Name");
        printf("\n\t2) Update Marks");
        printf("\n\t3) Update Fees");
        printf("\nEnter your choice in numerical form: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: displayParticular(index);
                    printf("\nPlease Enter the new name: ");
                    scanf("%s",s[index].name);
                    printf("\nRecord has been updated: ");
                    displayParticular(index);
                    getch();
            break;
            case 2: printf("\nWhich subject's marks do you want to update?");
                    printf("\n\t1) English");
                    printf("\n\t2) Maths");
                    printf("\n\t3) Computer");
                    printf("\n\t4) All Marks");
                    printf("\nEnter your choice in numerical form: ");
                    scanf("%d",&choice1);
                    switch(choice1)
                    {
                        case 1:clrscr();
                            displayParticular(index);
                            printf("\nEnter the new English Marks: ");
                            scanf("%f",&temp);
                            s[index].eng=temp;
                            printf("\nThe updated marks are: ");
                            calculateMarkSheet(index);
                            displayParticular(index);
                            getch();
                        break;
                        case 2:clrscr();
                            displayParticular(index);
                            printf("\nEnter the new Maths Marks: ");
                            scanf("%f",&temp);
                            s[index].maths=temp;
                            printf("\nThe updated marks are: ");
                            calculateMarkSheet(index);
                            displayParticular(index);
                            getch();
                        break;
                        case 3:clrscr();
                            displayParticular(index);
                            printf("\nEnter the new Computer Marks: ");
                            scanf("%f",&temp);
                            s[index].comp=temp;
                            printf("\nThe updated marks are: ");
                            calculateMarkSheet(index);
                            displayParticular(index);
                            getch();
                        break;
                        case 4:clrscr();
                            displayParticular(index);
                            printf("\nEnter the new English Marks: ");
                            scanf("%f",&temp);
                            s[index].eng=temp;
                            printf("\nEnter the new Maths Marks: ");
                            scanf("%f",&temp);
			    s[index].maths=temp;
                            printf("\nEnter the new Computer Marks: ");
                            scanf("%f",&temp);
                            s[index].comp=temp;
                            printf("\nThe updated marks are: ");
                            calculateMarkSheet(index);
                            displayParticular(index);
                            getch();
                        break;
                    }
                    break;
            case 3:clrscr();
                displayParticular(index);
                printf("\nEnter the fees you want to update: ");
                scanf("%f",&temp);
                s[index].fees=temp;
                printf("\nThe updated fees is: \n");
                displayParticular(index);
                getch();
            break;
        }
    }
    else
    {
        printf("\nThe record to be updated not found");
    }
}


//Delete Method For deleting particular student using ID
void del(int id)
{
    int index=-1;
    index=search(id);
    if(index>=0)
    {
        s[index].flag=-1;
    }
    else
    {
        printf("\nThe data you want to delete not found\n");
    }
}