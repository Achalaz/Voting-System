#include <stdlib.h>
#include <windows.h>

void clear(){
    system("cls");
}



#include <stdio.h>

int bar ()
{
    SetConsoleOutputCP(CP_UTF8);
     printf("\033[1;31m");
    printf("██████╗ ███████╗ ██████╗ ██╗████████╗ █████╗ ██╗\n");
    printf("██╔══██╗██╔════╝██╔════╝ ██║╚══██╔══╝██╔══██╗██║\n");
    printf("██║  ██║█████╗  ██║  ███╗██║   ██║   ███████║██║\n");
    printf("██║  ██║██╔══╝  ██║   ██║██║   ██║   ██╔══██║██║\n");
    printf("██████╔╝███████╗╚██████╔╝██║   ██║   ██║  ██║███████╗\n");
    printf("╚═════╝ ╚══════╝ ╚═════╝ ╚═╝   ╚═╝   ╚═╝  ╚═╝╚══════╝\n");
    printf("VOTEING SYSTEM\n");
    printf("\033[0m");

    return 0;
}
