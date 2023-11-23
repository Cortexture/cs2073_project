#include <stdio.h>
#include <stdlib.h>

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
  FILE* file = fopen("flights.txt", "w");
  file == NULL ?  exit(1) : nothing() ;
  int num_traveller = -1; do {
    printf("How many people are you travelling with?\n"); scanf("%d", &num_traveller);
    (num_traveller > 10) ? printf("Error: Group size is too large please try again\n") : nothing();
  } while(num_traveller > 10);
  char* economy = "Economy"; char* business = "Business"; 
  char* premium_economy = "(Premium) Economy"; char* first_class = "First Class";
  char* maui = "Maui, Hawaii"; char* dallas = "Dallas, Texas";
  char* paris = "Paris, France"; char* tokyo = "Tokyo, Japan";
  for (int i = 0; i <= num_traveller; i++) {
    fprintf(file, "%d, ", i);
    int ticket_choice = ticketTypes();
    switch (ticket_choice) {
      case 1: fprintf(file, "%s, ", economy);
      case 2: fprintf(file, "%s, ", business);
      case 3: fprintf(file, "%s, ", premium_economy);
      case 4: fprintf(file, "%s, ", first_class);
      default: return 1;
    }
    int destination_choice = availableDestinations();
    switch (destination_choice) {
      case 1: fprintf(file, "%s, ", maui);
      case 2: fprintf(file, "%s, ", dallas);
      case 3: fprintf(file, "%s, ", paris);
      case 4: fprintf(file, "%s, ", tokyo);
      default: return 1;
    }
    int arrival_choice = -1; do {
      arrivalDates(); printf("When would you like to arrive:\n"); scanf("%d", &arrival_choice);
      (arrival_choice > 20) ? printf("Error: Please pick a date between 1 and 20\n") : nothing();
    } while(arrival_choice > 20);
    fprintf(file, "Arriving November %d, ", arrival_choice);
    int depart_choice = -1; do {
      departureDates(); printf("When would you like to depart\n"); scanf("%d", &depart_choice);
      (depart_choice > 20) ? printf("Error: Please pick a date between 1 and 20\n") : nothing();
    } while(depart_choice > 20);
      fprintf(file, "Departing November %d, ", depart_choice);
  } fclose(file);
  return 0;
}
// write to a file like the hotel stuff, include names for jazz
