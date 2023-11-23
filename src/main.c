#include <stdio.h>

void nothing(void) {}
int ticketTypes(void) {
  char ticket[4][20]= {"1: Economy","2: Business","3: (Premium)Economy","4: First class"};
  int ticket_type = -1;
  printf("The following list is of all ticket types, please enter the number:\n");
  do {
    for (int i = 0; i < 4; i++) {
      printf("%s\n", ticket[i]); scanf("%d", &ticket_type);
    }
  } while (scanf("%d", &ticket_type) != 1 && ticket_type >= 1 && ticket_type <= 4);
  return ticket_type;
}
int availableDestinations(void) {
  printf("The following list is all available destinations:\n");
  char destinations[4][20]= {"1: Maui,Hawaii","2: Dallas,Texas","3: Paris,France","4: Tokyo,Japan"};
  int destination_choice = -1;
  do {
    for (int i = 0; i < 4; i++) {
      printf("%s\n", destinations[i]); scanf("%d", &destination_choice);
    }
  } while (scanf("%d", &destination_choice) != 1 && destination_choice >= 1 && destination_choice <= 4);
  return destination_choice;
}
void arrivalDates(void) {
  printf("The following list is avalible arrival dates:\n");
  int dates[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  for (int i=0; i<20;i++){
     printf("%d\n", dates[i]);
  }
}
void departureDates(void) {
  printf("The folliwng is a list of all departure dates:\n");    
  int dates[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  for (int i=0; i<20;i++){
     printf("%d\n", dates[i]);
  }
}

int main(void) {
int numTravellers; do {
  printf("How many people are you travelling with?\n"); scanf("%d", &numTravellers);
  (numTravellers > 10) ? printf("Error: Group size is too large please try again\n") : nothing();
} while(numTravellers > 10);
int ticketChoice = ticketTypes();
int destinationChoice = availableDestinations();
int arrivalChoice = -1; do {
  arrivalDates(); printf("When would you like to arrive:\n"); scanf("%d", &arrivalChoice);
  (arrivalChoice > 20) ? printf("Error: Please pick a date between 1 and 20\n") : nothing();
} while(arrivalChoice > 20);
 printf("When would you like to arrive\n"); scanf("%d", &arrivalChoice);
while(arrivalChoice > 20) {
  printf("Error: Please pick a date between 1 and 20.\n\n"); scanf("%d", &arrivalChoice);
}
int departChoice;
departureDates(); printf("When would you like to depart\n"); scanf("%d", &departChoice);
while(departChoice > 20) {
  printf("Error: Please pick a date between 1 and 20.\n"); scanf("%d", &departChoice);
}
return 0;
}
// write to a file like the hotel stuff, include names for jazz
