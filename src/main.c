#include <stdio.h>
#include <stdlib.h>
#include "helper_functions.h"
#include "cus_functions.h"


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
