#include<stdio.h>
#include<string.h>
int voter_Reg() {
    char name[50];
    char pw[12];
    int age;
    FILE *fp;
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
        fprintf(fp,"%s %s\n",name,pw);
    }else{
        printf("You are not eligible");
    }
    fclose(fp);


    }
    


