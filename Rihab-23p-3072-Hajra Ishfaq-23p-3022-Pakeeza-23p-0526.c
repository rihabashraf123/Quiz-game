#include<stdio.h>
#include<conio.h> 
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void show_record() 
   {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s HAS SECURED THE HIGHEST SCORE %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

// Function to reset score
void reset_score() {
	
 system("cls");
 float sc;
 char nm[20];
 FILE *f;
 f=fopen("score.txt","w");
// fscanf(f,"%s%f",&nm,&sc);
// sc=0;
// fprintf(f,"%s,%.2f",nm,sc);
 fclose(f);
 
}

// Function to display help
void help() {
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz ...........");
    printf("\n >There are 3 questions for each department");
    printf("\n >each department questions will be different");
    printf("\n  you will first select the department");
    printf("\n >You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n  right option");

    printf("\n\n\t*********************BEST OF LUCK*********************************");}
    
}

// Function to edit score
void edit_score(float score, char playername[])
{
    system("cls");
    float sc;
    char nm[20];
    FILE *f;

    f = fopen("score.txt", "r");
    if (f == NULL) {
        // Handle the case where the file doesn't exist or cannot be opened
        printf("Error opening file!\n");
        return;
    }

    fscanf(f, "%s%f", nm, &sc);
    fclose(f);

    if (score >= sc) {
        sc = score;
        f = fopen("score.txt", "w");
        fprintf(f, "%s\n%.2f", playername, sc);
        fclose(f);
    }
}
    

int main() {
    system("color 3f");
    int countr, r, r1, count, i, n;
    int departmentChoice;
    float score;
    char choice;
    char playername[20];
    void reset_score() {
    system("cls");
    float sc;
    char nm[20];
    FILE *f;

    f = fopen("score.txt", "r");
    if (f == NULL) {
        // Handle the case where the file doesn't exist or cannot be opened
        printf("Error opening file!\n");
        return;
    }

    fscanf(f, "%s%f", nm, &sc);
    fclose(f);

    if (score >= sc) {
        sc = score;
        f = fopen("score.txt", "w");
        fprintf(f, "%s\n%.2f", playername, sc);  // Assuming 'playername' is used in the main function
        fclose(f);
    }
}

mainhome:
    system("cls");
    printf("\t\t\tC PROGRAM QUIZ GAME\n");
    printf("\n\t\t________________________________________");

    printf("\n\n\t\t\t   Welcome To The Game");
    printf("\n\t\t________________________________________");
    printf("\n\n\t\t   BEST OF LUCK !!!!!    ");
    printf("\n\t\t________________________________________");
    printf("\n\n\t\t > Press S to Start the Game");
    printf("\n\t\t > Press V to View the Highest Score  ");
    printf("\n\t\t > Press R to Reset Score");
    printf("\n\t\t > Press H for Help");
    printf("\n\t\t > Press Q to Quit");
    printf("\n\n\t\t > Enter Your Choice : ");
    choice = toupper(getch());

    if (choice == 'V') {
        show_record();
        goto mainhome;
    } else if (choice == 'H') {
        help();
        getch();
        goto mainhome;
    } else if (choice == 'R') {
        reset_score();
        getch();
        goto mainhome;
    } else if (choice == 'Q') {
        exit(1);
    } else if (choice == 'S') {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister Your Name: ");
        gets(playername);

        system("cls");
        printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------", playername);
        printf("\n\n Here Are Few Tips For You.");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> There are 3 departments to choose from");
        printf("\n >>SE , CS , AI");
        printf("\n    select one");
        printf("\n    each department will have 3 questions");
        printf("\n >> each department will have different questions");
        printf("\n    you will have to answer the questions");
        printf("\n >> You will be given 4 options and you have to press A, B, C, or D for the");
        printf("\n    right option.");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if (toupper(getch()) == 'Y') {
            goto home;
        } else {
            goto mainhome;
            system("cls");
        }

home:
        system("cls");
        count = 0;
        for (i = 1; i <= 3; i++) {
            system("cls");
            r1 = i;

            // Prompt user to select a department
            printf("Select a department:\n");
            printf("1. Artificial Intelligence (AI)\n");
            printf("2. Computer Science (CS)\n");
            printf("3. Software Engineering (SE)\n");
            printf("Enter the number corresponding to your choice: ");
            scanf("%d", &departmentChoice);

            // Check the user's choice and ask questions accordingly
            switch (departmentChoice) {
                case 1:
                    printf("\nYou selected Artificial Intelligence (AI)\n");

                    // Question 1
                    printf("1. What is machine learning?\n");
                    printf("a) A type of coffee\nb) A programming language\nc) A way for computers to learn from data\nd) None of the above\n");
                    char answer1;
                    scanf(" %c", &answer1);
                    if (answer1 == 'c') {
                        printf("Correct!\n");
                        score++;
                    } else {
                        printf("Wrong! The correct answer is 'c'.\n");
                    }

                    // Question 2
                    printf("2. Which type of neural network is commonly used for image recognition?.\n");
                    printf("a) Feedforward neural network\nb) Recurrent neural network\nc) Convolutional neural network\nd) Radial basis function network\n");
                    char answer2;
                    scanf(" %c", &answer2);
                    if (answer2 == 'c') {
                        printf("Correct!\n");
                        score++;
                    } else {
                        printf("Wrong! The correct answer is 'c'.\n");
                    }

                    // Question 3
                    printf("3. In natural language processing, what does NLP stand for?\n");
                    printf("a) New Linguistic Processing\nb) Natural Learning Process\nc) Neuro-Linguistic Programming\nd) Natural Language Processing\n");
                    char answer3;
                    scanf(" %c", &answer3);
                    if (answer3 == 'd') {
                        printf("Correct!\n");
                        score++;
                    } else {
                        printf("Wrong! The correct answer is 'd'.\n");
                    }

                    break;

                case 2:
                    printf("\nYou selected Computer Science (CS)\n");

                    // Question 1
                    printf("1. What is the purpose of an algorithm in computer science?\n");
                    printf("a) To store data in a computer\nb) To solve a problem step by step\nc) To design user interfaces\nd) To generate random numbers\n");
                    //char answer1;
                    scanf(" %c", &answer1);
                    if (answer1 == 'b') {
                        printf("Correct!\n");
                        score++;
                    } else {
                        printf("Wrong! The correct answer is 'b'.\n");
                    }

                    // Question 2
                    printf("2. What is the primary function of a compiler?\n");
                    printf("a) Convert high-level code to machine code\nb) Execute code line by line\nc) Manage computer memory\nd) Manage computer memory\n");
                    //char answer2;
                    scanf(" %c", &answer2);
                    if (answer2 == 'a') {
                        printf("Correct!\n");
                        score++;
                    } else {
                        printf("Wrong! The correct answer is 'a'.\n");
                    }

                    // Question 3
                    printf("3. What is a LAN in computer networking?\n");
                    printf("a) Local Access Network\nb) Long Area Network\nc) Large Array Network\nd) Local Area Network\n");
                    //char answer3;
                    scanf(" %c", &answer3);
                    if (answer3 == 'd') {
                        printf("Correct!\n");
                        score++;
                    } else {
                        printf("Wrong! The correct answer is 'd'.\n");
                    }

                    break;

                case 3:
                    printf("\nYou selected Software Engineering (SE)\n");

                    // Question 1
                    printf("1. What is the purpose of the requirement analysis phase in software development?\n");
                    printf("a) Write code for the software\nb) Gather and define software requirements\nc) Test the software\nd) Deploy the software to users\n");
                    //char answer1;
                    scanf(" %c", &answer1);
                    if (answer1 == 'b') {
                        printf("Correct!\n");
                        score++;
                    } else {
                        printf("Wrong! The correct answer is 'b'.\n");
                    }

                    // Question 2
                    printf("2. Why is testing an essential part of the software development process?\n");
                    printf("a) To increase development time\nb) To find and fix defects in the software\nc) To make the software run faster\nd) To design user interfaces\n");
                    //char answer2;
                    scanf(" %c", &answer2);
                    if (answer2 == 'b') {
                        printf("Correct!\n");
                        score++;
                    } else {
                        printf("Wrong! The correct answer is 'b'.\n");
                    }

                    // Question 3
                    printf("3. What is version control in software engineering used for?\n");
                    printf("a) Control the versions of software releases\nb) Test different versions of the same software\nc) Track changes to source code over time\nd) Manage software requirements\n");
                    //char answer3;
                    scanf(" %c", &answer3);
                    if (answer3 == 'c') {
                        printf("Correct!\n");
                        score++;
                    } else {
                        printf("Wrong! The correct answer is 'c'.\n");
                    }

                    break;

                default:
                    printf("\nInvalid choice. Please select a valid department.\n");
                    return 1; // Exit the program with an error code
            }
        }

        // Display the final score
        printf("\nYour final score is: %.0f out of 3\n", score);

        // Show the cash prize won
        score *= 100000;
        printf("\nYour total cash prize is: $%.2f\n", score);

        goto mainhome;
    }
}

