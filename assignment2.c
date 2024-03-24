#include <stdio.h> //directive to the C pre-processor

int main (void) //the function main begins the program execution
{
    char selectionInput; //vairble to store users input for
    int num1; //declares vairable num1 holds an integer value
    char operation; //declares vairable operation holds a character 
    int num2; //declares vairable num2 holds an integer value
    int equation; //declares vairable equation holds an integer value

    //displays welcome message
    printf("Welcome to my Command-Line Calculator (CLC) \n");
    printf("Developer: Kalkidan Wubshet \n");
    printf("Version: Assignment 1 \n");
    printf("Date: October 24, 2023\n");

    while( selectionInput != 'E'){ //while loop keeps looping if user input is not E
    printf("Select one of the following items: \n B) - Binary Mathematical Operations, such as addition and subtraction. \n U) - Unary Mathematical Operations, such as square root, and log.\n A) - Advances Mathematical Operations, using variables, arrays.\n V) - Define variables and assign them values. \n E) - Exit \nYour choice:"); //displays menu for user selection
    scanf(" %c", &selectionInput); //stores user input to the vairble selectionInput, %c declares the input is a character
    
    if (selectionInput == 'B') { //if user input is equal to B, enter first number, operation then second number
        printf("Please enter the first number: "); //asks user to enter the first number
        scanf(" %d", &num1); //stores user input into vairble num1, %d shows it is storing a decimal integer
        printf("Please enter the operation ( + , - , * , / ,  , P , X , I ):"); //asks user to input an operation
        scanf(" %c", &operation); //stores user input into vairble operation, %c shows it is storing a character
        printf("Please enter the second number: "); //asks user to enter a second number
        scanf(" %d", &num2); //stores user input into vairble num2, %d shows it is storing a decimal integer

            switch (operation){ //switch/ multiple selection statement to handle such decison making
                case '+': //case for if user inputs addition character
                    equation = num1 + num2; //in equation vairable, num1 + num2 will be stored in case '+'
                    printf("The result is: %d\n\n", equation); //prints the equation, \n\n helps us move to the next line twice
                    break; //causes program control to continue with the first statement after the switch statement
                case '-': //next case is for if the user input substraction character
                    equation = num1 - num2; //in equation vairable, num1 - num2 will be stored in case'-'
                    printf("The result is: %d\n\n", equation); //prints the equation, \n\n helps us move to the next line twice
                    break;//causes program control to continue with the first statement after the switch statement
                case '*': //case for if the user inputs multipulcation character
                    equation = num1 * num2; //in equation vairble, num1 * num2 will be stored in case'-'
                    printf("The result is: %d\n\n", equation); //prints the equation, \n\n helps us move to the next line twice
                    break; //causes program control to continue with the first statement after the switch statement
                case '/': //case for if the user inputs division character
                    equation = num1 / num2; //in equation vairable, num1 / num2 will be stored in case '/'
                    printf("The result is: %d\n\n", equation); //prints the equation, \n\n helps us move to the next line twice
                    break; //causes program control to continue with the first statement after the switch statement
                case '%':
                    equation = num1 % num2;
                    printf("The result is: %d\n\n", equation);
                    break;
            }

    }
    else if (selectionInput == 'U'){ //if users input is equal to U
        printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n"); //prints a message showing the program has lack of knowledge in this catagory
        printf("Please select your option ( B , U , A , V , E ):\n\n"); //prompt to the user to choose another option
    }
    else if (selectionInput == 'A'){ //if users input is equal to A
        printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n"); //prints a message showing the program has lack of knowledge in this catagory
        printf("Please select your option ( B , U , A , V , E ):\n\n"); //prompt to the user to choose another option
    }
    else if (selectionInput == 'V'){ //if users input is equal to V
        printf("Sorry, at this time I don't have enough knowledge to serve you in this category.\n"); //prints a message showing the program has lack of knowledge in this catagory
        printf("Please select your option ( B , U , A , V , E ):\n\n"); //prompt to the user to choose another option
    }
    else { //if the users input is equal to E
        printf("Thanks for using my Simple Calculator. Hope to see you soon again, Goodbye!\n"); //prints goodbye message
    }
    }
    return 0; //stops the function
} //end brace 