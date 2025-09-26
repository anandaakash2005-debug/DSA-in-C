#include <stdio.h>
#include <ctype.h>

#define NUM_QUESTIONS 3 


typedef struct {
    char question[100];
    char options[4][50];
    char answer;
} QuizQuestion;


void run_quiz(QuizQuestion quiz[]) {
    int score = 0;
    char user_answer;

    printf("\nWellcome to the Quiz!\n");

    for (int i = 0; i < NUM_QUESTIONS; i++) {
        printf("\nQuestion %d: %s\n", i + 1, quiz[i].question);

        
        for (int j = 0; j < 4; j++) {
            printf("%s\n", quiz[i].options[j]);
        }

        
        printf("Enter your answer (A, B, C, or D): ");
        scanf(" %c", &user_answer);
        user_answer = toupper(user_answer);  

 if (user_answer == quiz[i].answer) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer was %c.\n", quiz[i].answer);
        }
    }

    
    printf("\nQuiz c0ompleted! Your final score is %d/%d.\n", score, NUM_QUESTIONS);
}


int main() {
    
    QuizQuestion quiz[NUM_QUESTIONS] = {
        {"What is the capital of India?", {"A. Berlin", "B. Madrid", "C. New Delhi", "D. Rome"}, 'C'},
        {"Which planet is known as the Red Planet?", {"A. Earth", "B. Mars", "C. Jupiter", "D. Venus"}, 'B'},
        {"What is the largest mammal?", {"A. Elephant", "B. Blue Whale", "C. Giraffe", "D. Gorilla"}, 'B'}
    };

    
    run_quiz(quiz);

    return 0;
}
