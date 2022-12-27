#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int homepage()
{
	char fname[10];
	char mname[10];
	char lname[10];
	char branch[30];
	char mail[30];
	printf("\nENTER YOUR NAME :");
	fflush(stdin);
	scanf("%s %s %s",&fname,&mname,&lname);
	printf("\nENTER YOUR MAIL:");
	fflush(stdin);
	scanf("%s",&mail);
	printf("\nENTER YOUR BRANCH:");
	fflush(stdin);
	scanf("%s",&branch);
	
	printf("\n YOUR NAME IS %s %s %s",fname,mname,lname);
	printf("\n YOUR MAIL IS %s",mail);
	printf("\n YOUR BRANCH IS %s",branch);
}
int main()
{
	char *uid="tnp",*psd="12345";
	char uname[5],pass[5],a[10],d[10],e[10];
	int len1,len2,c,b;
	
	int choice;
	printf("\n************************************************************************************************************************");
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	printf("\n                                                STUDENT PLACEMENT APP");
	printf("\n                                                MADE BY : PATEL TIRTH");
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	printf("\n************************************************************************************************************************");
	
	printf("                                                 # LOGIN / SINGUP PAGE #");
	printf("\n                                              ~ PRESS <1> FOR LOGIN. ~");
	printf("\n                                              ~ PRESS <2> FOR SINGUP. ~");
    printf("\n                                                ~ PRESS <3> ABOUT. ~");
	printf("\n                                                ~ ENTER YOUR CHOICE :");
    scanf("%d",&choice);
    
    switch(choice)
    {
    case 1:
    printf("\n         ---------------------------------------------------------------------------------------------------       ");
	printf("\n");
	printf("\n                                                 ENTER LOGIN DETAILS :                                                 ");
	printf("\n                                                 --------------------- ");
	tnp:
	printf("\nENTER YOUR e-Mail ID : ");
	scanf("%s",uname);
	printf("\nENTER YOUR PASSWORD : ");
	scanf("%s",pass);
	
	len1=strcmp(uid,uname);
	len2=strcmp(psd,pass);
	
	if(len1==len2)
	{
		homepage();
	}
	else
	{
		printf("YOU HAVE ENTERED WRONG USERNAME OR PASSWORD\nEnter it again\n");
		goto tnp;
	}
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	break;
	
	case 2:
		printf("\n         ---------------------------------------------------------------------------------------------------       ");
		printf("\n");
	    printf("\n                                                 ENTER  YOUR  DETAILS :");
	    printf("\n                                                ----------------------- ");
		printf("\nENTER YOUR NAME :");
    	fflush(stdin);
    	scanf("%s %s %s",&a,&d,&e);
    	printf("\nENTER YOUR DOB :");
    	fflush(stdin);
    	scanf("%d",&b);
    	printf("\nENTER YOUR MOBOLE NUMBER :");
    	fflush(stdin);
    	scanf("%d",&c);
    	printf("\n------------------------------------------------------------------------------------------------------------------------");
		break;
		
	case 3:
		printf("\n         ---------------------------------------------------------------------------------------------------       ");
		printf("\n");
	    printf("\n                                             ABOUT US & STUDENT PLACEMENT APP : ");
		printf("\n                                            ---------------------------------- ");
		printf("\n");
    	printf("\n - You Can Get Placment Easily From This App.");
    	printf("\n - This App Is More Helpfull For Freshers or Students.");
    	printf("\n - You Can Apply For Internships Aswell Or For Part Time Job's.");
    	printf("\n - Made By - Patel Tirth (tnp).");
    	printf("\n - Batch - 15.");
    	printf("\n - 1st Sem.");
    	printf("\n - Branch - CSE");
    	printf("\n");
    	printf("\n------------------------------------------------------------------------------------------------------------------------");
		break;
	}
	
	return 0;
}
