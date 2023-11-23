#include <stdio.h>

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
