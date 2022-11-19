//
// Created by National Cyber City on 11/15/2022.
//
#include "stdio.h"
#include "stdlib.h"

int db[100];
int dbMoney[100];
int main(){
    int key=10;
    int age=0;
    int option=0;
    int userId=0;
    int userId2=0;
    int flag=0;
    int global_flag=0;
    int dbIndex=0;
    int play=0;
    int rps;
    int idUsed=0;
    int back=0;
    while ( key<=10){

        printf("Welcome to our game:\n");
        printf("Enter your age:");
        scanf("%d",&age);
        if(age>17){

            printf("you can play game!\n");
            while (true){

                printf("Press 1 to Login!\nPress 2 to Register:\nPress 3 to Complete Quit:\nPress 4 to Back:");
                scanf("%d",&option);

                while (true){
                    if(option==1){
                        printf("This is Login\n");
                        printf("Enter 0 to back\n");
                        printf("Enter your id:");

                        scanf("%d",&userId);
                        if(userId==0){
                            break;
                        }

                        for(int i=0; i<100 ; i++){

                            if(db[i] == userId){
                                flag=1;
                            }

                        }
                        if(flag==1){
                            printf("You Can play game:\n");
                            printf("press 1 to start game rock paper and scissors:\n");
                            scanf("%d",&play);
                            while (true) {
                                if (play == 1) {
                                    printf("player1 choose rock or paper or scissor\n");
                                    printf("press 1 for rock\n press 2 for paper\n press 3 for scissor:\n press 4 for exit:");
                                    scanf("%d", &rps);
                                    if (rps == 1) {
                                        printf("player1 have choose rook:\npress 4 for back:\n");
                                        printf("player2 choose rock or paper or scissor\n");
                                        printf("press 1 for rock\n press 2 for paper\n press 3 for scissor:\n press 4 for back\n");
                                        scanf("%d", &rps);
                                        if (rps == 1) {
                                            printf("player2 have choose rock:\n");
                                            printf("no one win this round\n");


                                        }
                                        if (rps == 2) {
                                            printf("player2 have choose paper:\n");
                                            printf("player2 win this round\n");

                                        }
                                        if (rps == 3) {
                                            printf("player2 have choose scissor:\n");
                                            printf("player1 win this round\n");


                                        }
                                        if (rps==4){
                                            break;
                                        }
                                    }
                                    if (rps == 2) {
                                        printf("player1 have choose paper:\n");
                                        printf("player2 choose rock or paper or scissor\n");
                                        printf("press 1 for rock\n press 2 for paper\n press 3 for scissor:\npress 4 for back:\n");
                                        scanf("%d", &rps);
                                        if (rps == 1) {
                                            printf("player2 have choose rock:\n");
                                            printf("player1 win this round\n");


                                        }
                                        if (rps == 2) {
                                            printf("player2 have choose paper:\n");
                                            printf("no one win this round\n");


                                        }
                                        if (rps == 3) {
                                            printf("player2 have choose scissor:\n");
                                            printf("player2 win this round\n");


                                        }
                                        if (rps==4){
                                            break;
                                        }

                                    }
                                    if (rps == 3) {
                                        printf("player1 have choose scissor:\n");
                                        printf("player2 choose rock or paper or scissor\n");
                                        printf("press 1 for rock\n press 2 for paper\n press 3 for scissor:\n press 4 for back:\n");
                                        scanf("%d", &rps);
                                        if (rps == 1) {
                                            printf("player2 have choose rock:\n");
                                            printf("player2 win this round\n");


                                        }
                                        if (rps == 2) {
                                            printf("player2 have choose paper:\n");
                                            printf("player1 win this round\n");


                                        }
                                        if (rps == 3) {
                                            printf("player2 have choose scissor:\n");
                                            printf("no one win this round\n");

                                        }
                                        if (rps==4){
                                            break;
                                        }

                                    }
                                    if (rps==4){
                                        exit(1);
                                    }
                                }
                            }

                        } else{
                            printf("Your id is not valid:\n");
                            break;
                        }


                    } else if(option==2){

                        if(global_flag==1){
                            global_flag=0;
                            break;

                        }
                        if (back==1){
                            back=0;
                            break;
                        }

                        printf("This is Register:\n");

                        printf("Pls Enter your id:");
                        scanf("%d",&userId);

                        for(int i=0; i<100 ; i++){
                            if(db[i]==userId){
                                flag=1;
                            }
                        }

                        while (true){
                            if(flag==1){
                                flag=0;
                                idUsed++;
                                printf("User Id Already Taken:\n");
                                if (idUsed==1){
                                    idUsed=0;
                                    back++;
                                    break;
                                }
                            } else{
                                printf("Confirm your ID: Enter: ");
                                scanf("%d",&userId2);

                                if(userId==userId2){
                                    db[dbIndex]=userId;
                                    dbIndex;
                                    printf("Registration success:\n");
                                    //registration code
                                    global_flag=1;
                                    //ဆက်ရေးရန်
                                    break;

                                } else{
                                    printf("Id not same:\n");
                                    break;
                                }
                            }
                        }

                    } else if(option==3){
                        exit(1);
                    } else if(option == 4){
                        break;
                    } else{
                        printf("Invalid Option!\n");
                    }
                }

            }

        } else{
            printf("You cannot play game!\nTry Again!\n");
        }

    }


    return 0;
}