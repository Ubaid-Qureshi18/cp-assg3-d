/*
  Roll No.:41
  Student Name: Quests 
  Program Title:
  
  Task Given By:
    - Roll No. of Assignee:25
    - Assignee Name:Fahad shaikh
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORKOUTS 100
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int duration; // in minutes
    int calories; // calories burned
} Workout;

typedef struct {
    Workout workouts[MAX_WORKOUTS];
    int count;
} WorkoutTracker;

void logWorkout(WorkoutTracker *tracker) {
    if (tracker->count >= MAX_WORKOUTS) {
        printf("Workout log is full!\n");
        return;
    }

    Workout newWorkout;
    printf("Enter workout name: ");
    scanf("%s", newWorkout.name);
    printf("Enter duration (in minutes): ");
    scanf("%d", &newWorkout.duration);
    printf("Enter calories burned: ");
    scanf("%d", &newWorkout.calories);

    tracker->workouts[tracker->count] = newWorkout;
    tracker->count++;
    printf("Workout logged successfully!\n");
}

void viewWorkouts(const WorkoutTracker *tracker) {
    if (tracker->count == 0) {
        printf("No workouts logged yet.\n");
        return;
    }

    printf("\n--- Workout Log ---\n");
    for (int i = 0; i < tracker->count; i++) {
        printf("Workout %d: %s, Duration: %d min, Calories: %d\n",
               i + 1, tracker->workouts[i].name,
               tracker->workouts[i].duration,
               tracker->workouts[i].calories);
    }
}

void viewStatistics(const WorkoutTracker *tracker) {
    if (tracker->count == 0) {
        printf("No workouts logged yet.\n");
        return;
    }

    int totalDuration = 0;
    int totalCalories = 0;

    for (int i = 0; i < tracker->count; i++) {
        totalDuration += tracker->workouts[i].duration;
        totalCalories += tracker->workouts[i].calories;
    }

    printf("\n--- Workout Statistics ---\n");
    printf("Total Workouts: %d\n", tracker->count);
    printf("Total Duration: %d minutes\n", totalDuration);
    printf("Total Calories Burned: %d\n", totalCalories);
}

int main() {
    WorkoutTracker tracker;
    tracker.count = 0;
    int choice;

    do {
        printf("\n--- Workout Tracker Menu ---\n");
        printf("1. Log a Workout\n");
        printf("2. View Workouts\n");
        printf("3. View Statistics\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                logWorkout(&tracker);
                break;
            case 2:
                viewWorkouts(&tracker);
                break;
            case 3:
                viewStatistics(&tracker);
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
/*--- Workout Tracker Menu ---
1. Log a Workout
2. View Workouts
3. View Statistics
4. Exit
Enter your choice: 1
Enter workout name: pushups
Enter duration (in minutes): 15
Enter calories burned: 200
Workout logged successfully!

--- Workout Tracker Menu ---
1. Log a Workout
2. View Workouts
3. View Statistics
4. Exit
Enter your choice: 2

--- Workout Log ---
Workout 1: pushups, Duration: 15 min, Calories: 200

--- Workout Tracker Menu ---
1. Log a Workout
2. View Workouts
3. View Statistics
4. Exit
Enter your choice: 3

--- Workout Statistics ---
Total Workouts: 1
Total Duration: 15 minutes
Total Calories Burned: 200

--- Workout Tracker Menu ---
1. Log a Workout
2. View Workouts
3. View Statistics
4. Exit
Enter your choice: 4
Exiting the program. Goodbye!

[Process completed - press Enter]*/