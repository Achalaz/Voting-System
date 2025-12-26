#include<stdio.h>
#include<string.h>
int voter_Reg() {
    char name[50];
    char pw[12];
    int age;
    char Nic[12];
    FILE *fp;
    printf("-----Voter Registration-----\n");
    printf("Please Enter the following details : \n");
    printf("Enter Your NIC Number: \n");
    scanf("%s",Nic);
    if(strlen(Nic)!=12){
        printf("Invalid NIC Number\n");
        return voter_Reg();
    }
    
    printf("Enter Your Uername: \n");
    scanf("%s",name);
    printf("Enter password : \n");
    scanf("%s",pw);
    printf("Enter Age :\n");
    scanf("%d",&age);
    if(age>=18){
        fp=fopen("Data/voter.txt","a");
        if(fp==NULL){
            printf("Can not open file");
        }
        fprintf(fp,"%s,%s,%s\n",name,pw,Nic);
    }else{
        printf("You are not eligible");
    }
    fclose(fp);


    }
    


