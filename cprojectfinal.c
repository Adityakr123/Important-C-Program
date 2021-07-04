void transdeposit(void)
{   
    int run=1;
    system("cls");
    float add_amount=0;
    char finalaccnumber[20];
    //strcpy(upd.accountno,check.accountno);
    printf("Enter the account number to which you want to transfer money");
    scanf("%s",finalaccnumber);
    int choice,test=0;
    FILE *old,*newrec;
    old=fopen("record.txt","r");
    newrec=fopen("new.txt","w");

    while  ( fscanf(old,"%s %s %s %s %s %s %s %s %s %s %s %f",add.accountno,add.password,add.name,add.emailid,add.phonenumber,add.residence,add.dob,add.Aadharnum,add.string,add.sec_answer,add.tp,&add.amount)!=EOF)
    {
        if (strcmp(finalaccnumber,add.accountno)==0)
        {   
            test=1;
            printf("%s",add.residence);
            printf("\nEnter the amount you want to deposit\n");
            scanf("%f",&trans.transferamount);
            upd.amount=add.amount+add_amount;
            
            fprintf(newrec,"%s %s %s %s %s %s %s %s %s %s %s %f\n",add.accountno,add.password,add.name,add.emailid,add.phonenumber,add.residence,add.dob,add.Aadharnum,add.string,add.sec_answer,add.tp,upd.amount);  
            system("cls");
            //printf("Changes saved!");
            //printf("Your account balance : %f",upd.amount);
            
        }
        else
        {
            fprintf(newrec,"%s %s %s %s %s %s %s %s %s %s %s %f\n",add.accountno,add.password,add.name,add.emailid,add.phonenumber,add.residence,add.dob,add.Aadharnum,add.string,add.sec_answer,add.tp,add.amount);
        }
    }
    if (run==1)
    {
        fclose(old);
        fclose(newrec);
        remove("record.txt");
        rename("new.txt","record.txt");
    }



    if(test==0)
    {   
        system("cls");
        edit_invalid:
        printf("\nRecord not found!!\n");
        printf("\nEnter 0 to try again,1 to return to main menu ");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            loginmainscreen();
        else if(main_exit==0)
            deposit();
        else
            {
                printf("\nInvalid!\a");
                goto edit_invalid;
            }
        }
    else
    {
        transwithdraw();
    }
}

void transwithdraw(void)
{   
    int run=1;
    system("cls");
    float sub_amount=0;
    strcpy(upd.accountno,check.accountno);
    int choice,test=0;
    FILE *old,*newrec;
    old=fopen("record.txt","r");
    newrec=fopen("new.txt","w");

    while  ( fscanf(old,"%s %s %s %s %s %s %s %s %s %s %s %f",add.accountno,add.password,add.name,add.emailid,add.phonenumber,add.residence,add.dob,add.Aadharnum,add.string,add.sec_answer,add.tp,&add.amount)!=EOF)
    {
        if (strcmp(upd.accountno,add.accountno)==0)
        {   
            test=1;
            //printf("\nEnter the amount you want to withdraw\n");
            //scanf("%f",&sub_amount);
            upd.amount=add.amount-trans.transferamount;
            fprintf(newrec,"%s %s %s %s %s %s %s %s %s %s %s %f\n",add.accountno,add.password,add.name,add.emailid,add.phonenumber,add.residence,add.dob,add.Aadharnum,add.string,add.sec_answer,add.tp,upd.amount);  
            system("cls");
            printf("Changes saved!");
            printf("Your account balance : %f",upd.amount);
        }
        else
        {
            fprintf(newrec,"%s %s %s %s %s %s %s %s %s %s %s %f\n",add.accountno,add.password,add.name,add.emailid,add.phonenumber,add.residence,add.dob,add.Aadharnum,add.string,add.sec_answer,add.tp,add.amount);
        }
    }
    if (run==1)
    {
        fclose(old);
        fclose(newrec);
        remove("record.txt");
        rename("new.txt","record.txt");
    }
    if(test==0)
    {   
        system("cls");
        edit_invalid:
        printf("\nRecord not found!!\n");
        printf("\nEnter 0 to try again,1 to return to main menu ");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            loginmainscreen();
        else if(main_exit==0)
            deposit();
        else
            {
                printf("\nInvalid!\a");
                goto edit_invalid;
            }
    }        
    else
    {

        printf("\n\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
          loginmainscreen();

    }


}