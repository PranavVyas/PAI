#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define N 10
void lower_str(char *str);
void Search_in_File(char *fname, char *str);
void search(char *str);
void Enter(int trial);
int main(void)
{
    FILE *fd;
    FILE *fwr = fopen("base.obb","a");
    FILE *fotp = fopen("otp.txt","a");
    char uname[64],pass[64],otpinput[64],otp[64],temppass[64],unamenew[64],passnew[64];
    int i =0,checktemp=1,c,points = 10,inew,ch,index = 0,otpint;
        for(c=0;c<strlen(uname);c++)
    {
        uname[c]='\0';
    }    for(c=0;c<strlen(pass);c++)
    {
        pass[c]='\0';
    }
    system("cls");
    printf("\n-------------------------------------------------------------------------------------------------------");
    printf("\n||||                                                                                               ||||");
    printf("\n||||                    Welcome to P.A.I.(Pro's Artificial Intelligence)                           ||||");
    printf("\n||||                                 Created by PRANAV VYAS                                        ||||");
    printf("\n-------------------------------------------------------------------------------------------------------");
    printf("\n Please Enter One of folloing in username to continue...");
    printf("\n Enter trial -> Trial the appilication, You can use it for 5 Times MAX");
    printf("\n                IF YOU ADD ANYTHING IN DATABASE THAT WILL BE COUNTED AS 2 USES");
    printf("\n Enter new   -> Make a new Geniune account in this Application,");
    printf("\n                You have to pay to PRANAV(Paytm : 9428338960)(Developer,Coder of this programme) for making this account");
    printf("\n Enter Your username if you already have it !!!");
    printf("\n-------------------------------------------------------------------------------------------------------");
    printf("\nPlease Enter Username : ");
    scanf("%s",uname);
    if(strcmp(uname,"trial") == 0)
    {
        Enter(6);
    }
    else if(strcmp(uname,"new") == 0)
    {
    system("cls");
    printf("\n-------------------------------------------------------------------------------------------------------");
    printf("\n||||                                                                                               ||||");
    printf("\n||||                                 Welcome to registration Page                                  ||||");
    printf("\n||||                            Registration Portal Made By Pranav Vyas                            ||||");
    printf("\n||||                                                                                               ||||");
    printf("\n-------------------------------------------------------------------------------------------------------");
    printf("\nPlease Enter Your New Username : ");
    scanf("%s",unamenew);
    printf("\nYour password must be 8 cheracters, less than or more than is not permitted\nPlease Enter your password : ");
    scanf("%s",passnew);
    while(strlen(passnew) != 8)
    {
    printf("\nYour password must be of 8 cheracters, less than or more than is not permitted\nPlease Enter your password : ");
    scanf("%s",passnew);
    }
    // Algorithm to generate OTP
    for(i=0;i<8;i++)
    {
        otpint = passnew[i];
        if(otpint > 47 && otpint < 58)
        {
            otp[i]=passnew[i] + 17;
        }
        else if(otpint > 70 && otpint < 119)
        {
            otp[i]=passnew[i] + 3;
        }
        else
        {
        otp[i] = passnew[i];
        }
    }
    otp[i] = '\0';
    //Print OTP in File
    fprintf(fotp,"\nOTP for :-> Username : %s\n            Password : %s\n            OTP: \"%s\"",unamenew,passnew,otp);
    fclose(fotp);
    printf("\nAsk Pranav(DEVELOPER and CODER) for OTP, After You paytm him he will give you password....");
    printf("Input your OTP : ");
    scanf("%s",otpinput);
    //check OTP is correct or not
    while(strcmp(otp,otpinput) != 0)
    {
        printf("\nYour OTP is Wrong . Input Again..\nInput your OTP : ");
        scanf("%s",otpinput);
    }
    printf("\nYour username is : %s ...\nPassword is : %s ...",unamenew,passnew);
    printf("\nNow you will be redirected to original page...Press any key...");
    getch();
    fprintf(fwr,"%s\n%s\n",unamenew,passnew);
    fclose(fwr);
    main();
    }
    else if(strcmp(uname,"quit") == 0)
    {
        printf("\nQuitting the Program...\nPress any key to quit the Program");
    }
    else
    {
    printf("\nPlease Enter Password : ");
    scanf("%s",pass);
    if((fd = fopen("base.obb", "r")) == '\0')
    {
		printf("Error!!!");
	}
		while(fgets(temppass, 64, fd) != '\0')
	{
		if((strstr(temppass, uname)) != '\0')
        {
			if(fgets(temppass, 9, fd) != '\0')
            {
//            printf("\ntemppass = %s,%d actual = %s,%d",temppass,strlen(temppass),pass,strlen(pass));
            if(strcmp(temppass,pass) == 0)
            {
//                printf("\n Match!!!!!!!");
                points = 0;
                break;
            }
            else
            {
 //               printf("Not Match :999");
                points = 1;
            }
            }
        }
        else
        {
            points = 1;
        }
	}
    if(points==0)
    {
    Enter(256);
    }
    else
    {
    printf("\nPlease check your username or password...\nAnd press any key to enter again");
    getch();
    main();
    }
    fclose(fd);
}
}

void Enter(int trial)
{
    int i,c,i22;
    char str[999],originalstr[999];
    for(i=0;i<trial;i++)
    {
    for(c=0;c<strlen(str);c++)
    {
        str[c]='\0';
    }
//    printf("\n After Entering one command the value is %s",str);
    //i22 = i-1;
    system("cls");
    printf("\n-------------------------------------------------------------------------------------------------------");
    printf("\n||||                                                                                               ||||");
    printf("\n||||                    Welcome to P.A.I.(Pro's Artificial Intelligence)                           ||||");
    printf("\n||||                                 Created by PRANAV VYAS                                        ||||");
    printf("\n-------------------------------------------------------------------------------------------------------");
    printf("\nYou have used this appilication for %d times...IGNOR IF YOU ARE A GENIUNE USER",i);
    printf("\nHint : Commands like who made you, who is god.....are available");
    printf("\nEnter Command to continue or type \"quit\" to quit");
    printf("\n-------------------------------------------------------------------------------------------------------");
    printf("\nPlease Enter The Command : ");
    //scanf("%s[^\n]",str);
    gets(str);
    printf("%s.",str);
	while(strlen(str)== 0){
    printf("\nGiven command is empty so Please Enter The Command Again: ");
    gets(str);
    //scanf("%s[^\n]",str);
	}
    printf("\n-------------------------------------------------------------------------------------------------------");
    if(str != '\0' && strcmp(str,"quit") == 0)
    {
        printf("\n-------------------------------------------------------------------------------------------------------");
        printf("\nQuitting the file...\nPress any key to quit the file");
        printf("\n-------------------------------------------------------------------------------------------------------");
        i=1000;
    }
    else
    {
    lower_str(str);
    search(str);
    }
    }
    if(i > trial)
    {
    printf("\nYour Trial Period Ends Here ...\nMake new account for more playing \n Thanks for using ...");
    }
   getch();

}
void search(char *str)
{
    Search_in_File("file.obb", str);
}
void Search_in_File(char *fname, char *str)
    {
	FILE *fp;
	FILE *fw = fopen("file.obb","a+");
	int choice,c;
	int find_result = 0,q=1;
	char temp[999],reply[999];
	if((fp = fopen(fname, "r")) == '\0')
    {
		printf("Error!!!");
	}
	while(fgets(temp, 999, fp) != '\0')
	{
		if((strstr(temp, str)) != '\0')
        {
			if(fgets(temp, 999, fp) != '\0')
            {
            printf("\n%s\n", temp);
            printf("\n-------------------------------------------------------------------------------------------------------");
            printf("\nPress any key for next command");
            }
            find_result++;
		}
	}

	if(find_result == 0)
        {
		printf("\nSorry,I don't have that in my data base!! \nCheck your sentence Or Enter............\n(1) for enter that command in my brain you can enter Now \n(2) for entering the command again.");
        printf("\n-------------------------------------------------------------------------------------------------------");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        printf("\n-------------------------------------------------------------------------------------------------------");
        if(choice == 1)
        {
            printf("\nEnter \"..\" After your reply is finished ,to complete!!!");
            printf("\nEnter a reply I will give to you : \n");
            scanf("%s[^\n]",reply);
            printf("\n-------------------------------------------------------------------------------------------------------");
            printf("\nQue : %s \nAns: %s",str,reply);
            printf("\n-------------------------------------------------------------------------------------------------------");
            fprintf(fw,"\n%s%s",str,reply);
            fclose(fw);
        }
        else if(choice == 2)
        {
        }
	}
	if(fp)
    {
		fclose(fp);
	}
	getch();
}
void lower_str(char *str)
{
   while(*str)
   {
      if ( *str >= 'A' && *str <= 'Z' )
      {
         *str = *str + 32;
      }
      str++;
   }
}
