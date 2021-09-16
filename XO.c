#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
    int i,j,x,y,nbp;
    int Round=1,POS=0,indice = 1;
    char XO [3][3],signe,POSCHAR[100];
    // Fill and Show XO platform
    for ( i = 0; i <= 2; i++ ) {
        for ( j = 0; j <= 2; j++ ) {
           XO[i][j]=indice+'0';
           indice ++;
           printf("%c|",XO[i][j] );
        }
        printf("\n");
    }
    // X or O and player 1 or 2
    for( Round = 1; Round <= 9; Round++ ) {
                if (Round%2==0){
            nbp=2;
            signe='X';
        }
        else {
            nbp=1;
            signe='O';
        }
        // Choose Position
                do {
                    printf("Player %d choose POS: ",nbp);
                    scanf("%s",&POSCHAR);
                    POS = (int)(POSCHAR[0]);
                }
                while (POS<49||POS>57||strlen(POSCHAR)!=1);
                POS=POS-48;
                //X and Y and Put Signe
                if (POS % 3 == 0){
                    x=(POS/3)-1;
                    y=2;
                }
                else{
                    x=(POS/3);
                    y=(POS%3)-1;
                }
        if(XO[x][y]=='O'||XO[x][y]=='X'){
            Round = Round-1;
            system("cls");
        }
        else{
             XO[x][y] = signe;
        }


                 //Print XO
                 system("cls");
        for ( i = 0; i <= 2; i++ ) {
                for ( j = 0; j <= 2; j++ ) {
                    printf("%c|",XO[i][j] );
                }
                printf("\n");
        }
        if ((XO[0][0]==XO[0][1]&&XO[0][1]==XO[0][2])||
            (XO[1][0]==XO[1][1]&&XO[1][1]==XO[1][2])||
            (XO[2][0]==XO[2][1]&&XO[2][1]==XO[2][2])||
            (XO[0][0]==XO[1][0]&&XO[1][0]==XO[2][0])||
            (XO[0][1]==XO[1][1]&&XO[1][1]==XO[2][1])||
            (XO[0][2]==XO[1][2]&&XO[1][2]==XO[2][2])||
            (XO[0][0]==XO[1][1]&&XO[1][1]==XO[2][2])||
            (XO[2][0]==XO[1][1]&&XO[1][1]==XO[0][2])){
                    printf("Player %d win ", nbp);
                    break;

        }
        }
Round++;
if (Round>9){
  printf("Draw");
}


    }
