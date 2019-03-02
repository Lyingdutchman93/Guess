#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include <MMSystem.h>

using namespace std;


int main()

{   PlaySound("Sound1.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    srand (time(NULL));
    int secretNum;
    secretNum = rand() % 10 + 1;
    int guess;
    int guessCount = 0;
    int guessLimit = 7;
    int triesLeft = 7;
    bool outofGuesses = false;
    int won = 0;
    int lose = 0;
    int firstTo = 3;
    int playerScore = 0;
    int computerScore = 0;
    int index = 0;
    int answerD = 4;

    while (answerD > 3 || 0 == answerD){
    cout << "This is a guessing game.\t|\n\t\t\t\t|\n";
    cout << "(1)Easy\t\t\t\t|\n(2)Normal\t\t\t|\n(3)Hard\t\t\t\t|\n\t\t\t\t|\n________________________________|\n\n";
    cout << "Enter difficulty: ";
    cin >> answerD;
    system ("CLS");
        if (answerD > 3 || 0 == answerD){
    cout << "\nInvalid Input\n";
    system("Pause");
    system("CLS");}}



                                        if(answerD == 1){


    for (;;)
    {

        if(firstTo == won)
        {system("CLS");
         playerScore++;
         index++;
         cout << "Game Over, You win the game!\n";
         cout << "You won with " << won << " - " << lose <<"!\n";
         cout << "You have won " << playerScore << " out of " << index << " games!\n\n";
         cout << "(Play Again)"; system("pause");
         won = 0;
         lose = 0;
         system("CLS");}

         else if(firstTo == lose)
         {system("CLS");
         computerScore++;
         index++;
         cout << "Game Over, You lost the game!\n\n";
         cout << "You lost with " << lose << " - " << won <<"!\n";
         cout << "You have lost " << computerScore << " out of " << index << " games!\n\n";
         cout << "(Play Again)\t"; system("pause");
         won = 0;
         lose = 0;
         system("CLS");}

        cout << "\nFirst to " << firstTo << "!";
        cout << "\n\nYou won " << won << " round(s)\t";
        cout << "\nYou lost " << lose << " round(s)\n\n";
        cout << "You have won " << playerScore << " out of " << index << " games!\n\n";
         while(secretNum != guess && !outofGuesses) {
            if(guessCount < guessLimit){
            cout << "You have " << triesLeft << " tries left\t";
            cout << "Guess the secret number between 1 and 10: ";
            cin >> guess;
            if (guess > 10 || 0 == guess) {cout << "\nThat number is out of range!\n";
             } else {
            guessCount++;
            triesLeft--;}
              } else {
               outofGuesses = true;}

    } if(outofGuesses){
        system("CLS");
        cout << "You lost this round!\t";
        cout << "The secret number was "<< secretNum << "\n";
        cout << "\nTry Again!\n\n______________________________________________________________________________________\n";
        outofGuesses = false;
        guessCount = 0;
        guessLimit = 7;
        triesLeft = 7;
        secretNum = rand() % 10 + 1;
        lose++;



    } else {
        system("CLS");
         cout << "You win this round!" << endl;
         cout << "\nTry Again!\n\n______________________________________________________________________________________\n";
         guess = 0;
         triesLeft = 7;
         guessCount = 0;
         secretNum = rand() % 10 + 1;
         won++;


    }
    }
                                             } else if(answerD == 2){
                                               guessLimit = 7;
                                               triesLeft = 7;
                                               secretNum = rand() % 15 + 1;


    for (;;)
    {
        if(firstTo == won)
        {system("CLS");
         playerScore++;
         index++;
         cout << "Game Over, You win the game!\n";
         cout << "You won with " << won << " - " << lose <<"!\n";
         cout << "You have won " << playerScore << " out of " << index << " games!\n\n";
         cout << "(Play Again)"; system("pause");
         won = 0;
         lose = 0;
         system("CLS");}

         else if(firstTo == lose)
         {system("CLS");
         computerScore++;
         index++;
         cout << "Game Over, You lost the game!\n\n";
         cout << "You lost with " << lose << " - " << won <<"!\n";
         cout << "You have lost " << computerScore << " out of " << index << " games!\n\n";
         cout << "(Play Again)\t"; system("pause");
         won = 0;
         lose = 0;
         system("CLS");}

        cout << "\nFirst to " << firstTo << "!";
        cout << "\n\nYou won " << won << " round(s)\t";
        cout << "\nYou lost " << lose << " round(s)\n\n";
        cout << "You have won " << playerScore << " out of " << index << " games!\n\n";
         while(secretNum != guess && !outofGuesses) {
            if(guessCount < guessLimit){
            cout << "You have " << triesLeft << " tries left\t";
            cout << "Guess the secret number between 1 and 15: ";
            cin >> guess;
                if (guess > 15 || 0 == guess) {cout << "\nThat number is out of range!\n\n";
                } else {
                  guessCount++;
                  triesLeft--;}

          } else {
            outofGuesses = true;}

    } if(outofGuesses){
        system("CLS");
        cout << "You lost this round!\t";
        cout << "The secret number was "<< secretNum << "\n";
        cout << "\nTry Again!\n\n______________________________________________________________________________________\n";
        outofGuesses = false;
        guessCount = 0;
        guessLimit = 7;
        triesLeft = 7;
        secretNum = rand() % 15 + 1;
        lose++;



    } else {
        system("CLS");
         cout << "You win this round!" << endl;
         cout << "\nTry Again!\n\n______________________________________________________________________________________\n";
         guess = 0;
         triesLeft = 7;
         guessCount = 0;
         secretNum = rand() % 15 + 1;
         won++;


    }
    }
                                                } else if(answerD == 3){
                                                  guessLimit = 5;
                                                  triesLeft = 5;
                                                  secretNum = rand() % 20 + 1;


    for (;;)
    {
        if(firstTo == won)
        {system("CLS");
         playerScore++;
         index++;
         cout << "Game Over, You win the game!\n";
         cout << "You won with " << won << " - " << lose <<"!\n";
         cout << "You have won " << playerScore << " out of " << index << " games!\n\n";
         cout << "(Play Again)"; system("pause");
         won = 0;
         lose = 0;
         system("CLS");}

         else if(firstTo == lose)
         {system("CLS");
         computerScore++;
         index++;
         cout << "Game Over, You lost the game!\n\n";
         cout << "You lost with " << lose << " - " << won <<"!\n";
         cout << "You have lost " << computerScore << " out of " << index << " games!\n\n";
         cout << "(Play Again)\t"; system("pause");
         won = 0;
         lose = 0;
         system("CLS");}

        cout << "\nFirst to " << firstTo << "!";
        cout << "\n\nYou won " << won << " round(s)\t";
        cout << "\nYou lost " << lose << " round(s)\n\n";
        cout << "You have won " << playerScore << " out of " << index << " games!\n\n";
         while(secretNum != guess && !outofGuesses) {
            if(guessCount < guessLimit){
             cout << "You have " << triesLeft << " tries left\t";
            cout << "Guess the secret number between 1 and 20: ";
            cin >> guess;
                if (guess > 20 || 0 == guess) {cout << "\nThat number is out of range!\n";
                   } else {
                     guessCount++;
                     triesLeft--;}

            } else {
               outofGuesses = true;}

    } if(outofGuesses){
        system("CLS");
        cout << "You lost this round!\t";
        cout << "The secret number was "<< secretNum << "\n";
        cout << "\nTry Again!\n\n______________________________________________________________________________________\n";
        outofGuesses = false;
        guessCount = 0;
        guessLimit = 5;
        triesLeft = 5;
        secretNum = rand() % 20 + 1;
        lose++;




    } else {
        system("CLS");
         cout << "You win this round!" << endl;
         cout << "\nTry Again!\n\n______________________________________________________________________________________\n";
         guess = 0;
         triesLeft = 5;
         guessCount = 0;
         secretNum = rand() % 20 + 1;
         won++;




    }
    }
    }

    return 0;
}
