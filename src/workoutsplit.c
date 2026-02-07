#include <stdio.h>
#include <stdbool.h>

void workoutsplit(int workout, bool *isRunning);
void workoutMenu(bool isRunning);

int main() {
    
    bool isRunning = false;
    int workout = 0;
    char option = '\0'; 

    printf("*** Workout Split ***\n");
    printf("Your current split is over 4 days and should be repeated. One should also consider a deload every 4-5 weeksto aid recovery and avoid plateaus.\n");
    printf("A. View Workouts\n");
    printf("B. Quit Program\n");
    scanf("%c", &option);
    
    if(option == 'A' || option == 'a'){
        isRunning = true;
        while(isRunning){
        workoutMenu(isRunning);
        
        scanf(" %d", &workout);
        
        workoutsplit(workout, &isRunning); }
        
    }
    else if(option == 'B' || option == 'b'){
        return 0;
    }
    else{
        printf("Invalid choice! Please select A or B.\n");
    }
    
    return 0;
}

void workoutsplit(int workout, bool *isRunning){     
     char goBack = '\0'; 
      switch(workout){
            case 1:
              printf("*** Chest & Back ***\n6 Exercises Total\n\nWarm Up - Focus on shoulder mobility and scapula control\n\n");
              printf("Exercise 1. Horizontal Press - 2 working sets (6-10 Reps)\n");
              printf("Exercise 2. Horizontal Row - 2 Working sets (6-10 Reps)\n");
              printf("Exercise 3. Chest Fly - 2 Working sets (8-12 Reps)\n");
              printf("Exercise 4. Vertical Pull - 2 Working sets (6-10 Reps)\n");
              printf("Exercise 5. Incline Press - 2 Working sets (6-10 Reps)\n");
              printf("Exercise 6. Lat Pullover - 2 Working sets (8-12 Reps)\n\n");
              printf("Enter 'G' to go back\n");
              scanf(" %c", &goBack);

              if(goBack == 'g' || goBack == 'G'){
                return;
              } 

              break;
            case 2:
              printf("*** Legs ***\n\n");
              printf("Warmup for 5 minutes focusing on hip and ankle mobility\n\n");
              printf("Exercise 1. Hamstring Curl - 2 working sets (6-10 Reps)\n");
              printf("Exercise 2. Calf Raise - 2 Working sets (8-12 Reps)\n");
              printf("Exercise 3. Hack Squat - 2 Working sets (6-10 Reps)\n");
              printf("Exercise 4. Romanian Deadlift - 2 Working sets (6-10 Reps)\n");
              printf("Exercise 5. Leg Extension - 2 Working sets (6-10 Reps)\n\n");
              
              printf("Enter 'G' to go back\n");
              scanf(" %c", &goBack);

              if(goBack == 'g' || goBack == 'G'){
                return;
              } 

              break;
            case 3:
              printf("*** Shoulders & Arms ***\n\n");
              printf("Warmup for 5 minutes focusing on shoulder mobility and bloodflow into arms\n\n");
              printf("Exercise 1. Shoulder Press - 2 working sets (6-10 Reps)\n");
              printf("Exercise 2. Rear Delt Fly - 2 Working sets (8-12 Reps)\n");
              printf("Exercise 3. Lateral Raise - 2 Working sets (8-12 Reps)\n");
              printf("Exercise 4. Bicep Curl - 2 Working sets (6-10 Reps)\n");
              printf("Exercise 5. Tricep Pushdowns - 2 Working sets (6-10 Reps)\n");
              printf("Exercise 6. Hammer Curl - 2 Working sets (8-12 Reps)\n");
              printf("Exercise 7. Overhead Tricep Extension/ Skullcrushers - 2 Working sets (6-10 Reps)\n\n");
              printf("Enter 'G' to go back\n");
              scanf(" %c", &goBack);

              if(goBack == 'g' || goBack == 'G'){
                return;
              } 

              break;
            case 4:
              printf("Rest Day! Go for a walk and smell some flowers or something.\n\n");
              printf("Enter 'G' to go back\n");
              scanf(" %c", &goBack);

              if(goBack == 'g' || goBack == 'G'){
                return;
              } 

              break;
            case 5:
              *isRunning = false;
              break;
            default:
              printf("Invalid choice! Please select between options 1-5.\n");
  }
}

void workoutMenu(bool isRunning){
    if (isRunning){
      printf("1. Chest & Back\n");
      printf("2. Legs\n");
      printf("3. Shoulders & Arms\n");
      printf("4. Rest Day\n");
      printf("5. Quit Program\n");
      printf("Please select a workout (1-4 or 5 to Quit): \n");}
    else{
      return ;
    }
}


