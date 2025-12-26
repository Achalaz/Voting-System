#include <stdio.h>
#include <windows.h>
#include "Function.c"
#include "Register_voter.c"
#include<stdlib.h>

int choise;
int choise2;


int main() {
    bar();
   choise=main_menu();
    switch (choise) {
        case 1:
            clear();
            printf("Enter your name\n");
            printf("Enter your age\n");
            break;
        case 2:
            clear();
            printf("1.Voter\n ");
            printf("2.Candidate\n ");
            printf("Enter choise");
            scanf("%d",&choise2);
            switch (choise2) {
                case 1:
                    voter_Reg();
            }
    }

    return 0;
}