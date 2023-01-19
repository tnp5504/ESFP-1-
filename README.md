# ESFP-1-
Student Placement
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

int homepage()
{
	system("cls");
	printf("\nCOMPANIES WE HAVE :-");
	printf("\nAMAZON                        ADANI                            TECH MAHINDRA");
	printf("\nAPPLE                         NIKE                             EMIRATES");
	printf("\nTATA                          HP                               RED HAT");
	printf("\nMICROSOFT                     DELL                             LAMBORGHINI");
	printf("\nIBM                           WILDCRAFT                        YOUTUBE");
	printf("\nINFOSYS                       INTEL                            SPOTIFY");
	printf("\nLENSKART                      ASUS                             T-SERIES");
	printf("\nCOCA-COLA                     WIPRO						     ");
	printf("\nJAGUAR                        SBI                              WALMART");
	printf("\nPUMA                          ICICI                            UBER EATS");
	printf("\nDECATHLON                     JIO                              CRED");
	printf("\nSKODA                         AIRTEL                           PATEK PHILIPPE");
	printf("\nGOOGLE                        LEXSUS                           FLIPKART");
	printf("\nORACLE                        AUDI                             UNILEVER");
	printf("\nSAMSUNG                       MERCEDES BENZ                    HDFC BANK");
	printf("\nNASA                          BMW                              VISTARA");
	printf("\nISRO							");
	printf("\nSPACE X                       MSI");
	printf("\nNETFLIX                       SONY");
	printf("\nboAt                          H&M");
	printf("\nTESLA                         RELIANCE");
}


int certificate()
{
	system("cls");
	char x[10],y[10],z[10],f[20];
	int n,t,g;
	
	printf("\nENTER YOUR FIRST NAME :\n");
    fflush(stdin);
	gets(x);
	printf("\nENTER YOUR MIDDLE NAME:\n");
	gets(y);
	printf("\nENTER YOUR LAST NAME:\n");
	
	gets(z);
    printf("\nENTER YOUR SERVICE(BRANCH YOU WERE WORKING):\n");
    fflush(stdin);
    scanf("%s",&f);
    printf("\nENTER YOUR DATE :");
   	fflush(stdin);
   	scanf("%d %d %d",&n,&t,&g);
   	
   	printf("\n                                                   CERTIFICATE :");
	printf("\n                                                   -------------");
	
	printf("\n========================================================================================================================");
	printf("\n                                                                                                      DATE :%d/%d/%d",n,t,g);
	printf("\n                                          SERVICE CERTIFICATE FOR GOVRNMENT EMPLOYEE");
	printf("\n                                                   SERVICE CERTIFICATE");
	printf("\n                                                 PALANPUR PANCHAYAT STAFF");
	
	printf("\n\n\n                                     THIS IS TO CERTIFY Mr/Mrs. '%s %s %s'",x,y,z);
	printf("\n\n                                    HAS BEEN WORKING AS EMPLOYEE WITH US AS '%s'",f);
	printf("\n\n                            WITH PERFACTION IT WAS A GREAT PLEASURE WORKING WITH HIM FOR HIS EMPLOYMENT");
	printf("\n\n                               DURATION AND HE PROVED HIMSELF AS ONE OF THE MOST IMPORTANT");
	printf("\n\n                               ASSETS OF THE ORGANIZATION. WE WISH HIM A GOOD LIFE AND BETTER");
	printf("\n\n                                             OPPORTUNITIES OF EMPLOYMENT.");
	printf("\n\n========================================================================================================================");
	printf("\n");
   	
}
	
int main()
{
	char *uid="ADMIN",*psd="12345";
	char uname[5],pass[5],a[10],d[10],e[10],x[10],y[10],z[10],f[20],ee[10],dd[10],bb[10];
	int len1,len2,c,b,n,t,g,K,aa,cc,ff,gg;
	char cont = 'y';
	
	int choice;
	printf("========================================================================================================================");
	printf("\n                                                  GANPAT UNIVERSITY                                                   ");
	printf("\n                                                MADE BY : PATEL TIRTH                                                ");
	printf("\n                                             ROLL NO. : CSE 02  BATCH : 15                                             ");
	printf("\n                                              PROJECT - STUDENT PLACEMENT                                     ");
	printf("\n                                                ACADEMIC year 2022-23                                                 \n");
	printf("\n========================================================================================================================");
	printf("\n");
	
	while(cont == 'y')
    {
	printf("\nPRESS <1> TO LOGIN... ");
	printf("\nPRESS <2> TO SING UP... ");
    printf("\nPRESS <3> APPLY FOR JOB'S'... ");
    printf("\nPRESS <4> TO OPEN COMPANIES LIST... ");
	printf("\nPRESS <5> ABOUT US... ");
	printf("\nPRESS <6> NEWS & UPDATE... ");
	printf("\nPRESS <7> CHANGE YOUR LOGIN DETAILS... ");
	printf("\nENTER YOUR CHOICE :");
    scanf("%d",&choice);
    
    switch(choice)
    {
    case 1:
    printf("\n         ---------------------------------------------------------------------------------------------------       ");
	printf("\n");
	printf("\n                                                 ENTER LOGIN DETAILS :                                                 ");
	printf("\n                                                 --------------------- ");
	printf("\nENTER YOUR ID:");
	scanf("%s",uname);
	printf("\nENTER YOUR PASSWORD:");
	scanf("%s",pass);
	
	len1=strcmp(uid,uname);
	len2=strcmp(psd,pass);
	
	if(len1==len2)
	{
		homepage();
	}
	else
	{
		printf("YOU HAVE ENTERED WRONG USERNAME OR PASSWORD");
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
    	printf("\nENTER YOUR MOBILE NUMBER :");
    	fflush(stdin);
    	scanf("%d",&c);
    	printf("\nENTER PASSWORD :");
    	fflush(stdin);
    	scanf("%d",&K);
    	printf("\n------------------------------------------------------------------------------------------------------------------------");
		break;
		
	case 3:
		system("cls");
		
		printf("\n         ---------------------------------------------------------------------------------------------------       ");
		printf("\n");
	    printf("\n                                           APPLY HERE !! : ");
		printf("\n                                           ----------------------------------- ");
		printf("\n");
    	printf("\n - ENTER YOUR AGE : ");
    	scanf("%d",&aa);
		printf("\n");
    	printf("\n - ENTER YOUR QUALIFIACTION : ");
    	scanf("%s",&bb);
		printf("\n");
    	printf("\n - ENTER YOUR WORK EXPERIENCE : ");
    	scanf("%d",&cc);
		printf("\n");
    	printf("\n - ENTER YOUR E-MAIL : ");
    	scanf("%s",&dd);
		printf("\n");
    	printf("\n - CURRENTLY WORKING FOR : ");
    	scanf("%s",&ee);
		printf("\n");
    	printf("\n - EXPECTED SALARY : ");
    	scanf("%d",&ff);
		printf("\n");
    	printf("\n - SUBMITED SUCCESSFULLY...");
		printf("\n");
    	printf("\n------------------------------------------------------------------------------------------------------------------------");
		break;
		case 4:
			
			system("cls");
	printf("\nCOMPANIES WE HAVE :-");
	printf("\nAMAZON                        ADANI                            TECH MAHINDRA");
	printf("\nAPPLE                         NIKE                             EMIRATES");
	printf("\nTATA                          HP                               RED HAT");
	printf("\nMICROSOFT                     DELL                             LAMBORGHINI");
	printf("\nIBM                           WILDCRAFT                        YOUTUBE");
	printf("\nINFOSYS                       INTEL                            SPOTIFY");
	printf("\nLENSKART                      ASUS                             T-SERIES");
	printf("\nCOCA-COLA                     WIPRO						     ");
	printf("\nJAGUAR                        SBI                              WALMART");
	printf("\nPUMA                          ICICI                            UBER EATS");
	printf("\nDECATHLON                     JIO                              CRED");
	printf("\nSKODA                         AIRTEL                           PATEK PHILIPPE");
	printf("\nGOOGLE                        LEXSUS                           FLIPKART");
	printf("\nORACLE                        AUDI                             UNILEVER");
	printf("\nSAMSUNG                       MERCEDES BENZ                    HDFC BANK");
	printf("\nNASA                          BMW                              VISTARA");
	printf("\nISRO							");
	printf("\nSPACE X                       MSI");
	printf("\nNETFLIX                       SONY");
	printf("\nboAt                          H&M");
	printf("\nTESLA                         RELIANCE");
	break;	
		case 5:
		printf("\n# OUR KEY FEATURE :-");
		printf("\n- YOU CAN APPLY FOR JOB EASILY FROM THIS WEBSITE.");
		printf("\n- A USER FREINDLY WEBSITE.");
		printf("\n- FREE FOR EVERY ONE.");
		printf("\n- 95 PERCENT GUARANTEE TO GET JOB IN 1 WEEK.");
		printf("\n");
		printf("\n");
		printf("\n# CONTACT US :-");
		printf("\n- E-MAIL : tirth554patel@gmail.com");
		printf("\n- INSTAGRAM : _hire_up_");
		printf("\n- OUR WEBSITE : https://hireup.000webhostapp.com/");
		break;
		
		case 6:
		printf("\n NEWS & UPDATES :-");
		printf("\n - APPLICATION FOR APPLE WILL RESTART SOON...");
		printf("\n - APPLICATION FOR AMAZON WILL RESTART SOON...");
		printf("\n - APPLICATION FOR SKODA WILL RESTART SOON...");
		printf("\n - APPLICATION FOR NETFLIX WILL RESTART SOON...");
		printf("\n");
		printf("\n");
		printf("\n - APPLICATION FOR PUMA WILL CLOSE ON 29/01/2023.");
		printf("\n - APPLICATION FOR ADANI WILL CLOSE ON 06/02/2023.");
		printf("\n");
		printf("\n");
		printf("\n - APPLICATION FOR TESLA IS CLOSED.");
		printf("\n - APPLICATION FOR SAMSUNG IS CLOSED.");
		printf("\n");
		printf("\n");
		printf("\n - FOR MORE UPDATES GO TO OUR WEBSITE....");
		printf("\n - https://hireup.000webhostapp.com/");
		printf("\n");
		printf("\n");
		printf("\n ----LAST UPDATED ON 10/01/2023----");
		printf("\n");
		printf("\n");
		break;
		
		case 7:
		printf("\n         ---------------------------------------------------------------------------------------------------       ");
	    printf("\n\nENTER YOUR ID:");
	    scanf("%s",uname);
	    printf("\nENTER YOUR PASSWORD:");
	    scanf("%s",pass);
	
	len1=strcmp(uid,uname);
	len2=strcmp(psd,pass);
	
	if(len1==len2)
	{
   	certificate();
	}
	else
	{
		printf("YOU HAVE ENTERED WRONG USERNAME OR PASSWORD");
	} 
	    }
		printf("\n\nIF YOU WANT TO CONTINUE PRESS 'y' ELSE PRESS 'n' : [y/n]:\t");
		fflush(stdin);
		scanf("%s",&cont);
	}
	printf("\n\n                                     ~~~~~~~~~~  THANKS FOR VISITING  ~~~~~~~~~~\n\n");
	
	return 0;
}
