#include <stdio.h>

// Constants for maximum values
#define MAX_DESTINATIONS 5
#define MAX_DATES 7
#define MAX_TICKET_TYPES 3

// Function to display available destinations
void displayDestinations() {
    printf("Available Destinations:\n");
    printf("1. New York\n");
    printf("2. Los Angeles\n");
    printf("3. Chicago\n");
    printf("4. Miami\n");
    printf("5. Las Vegas\n");
}

// Function to display available dates
void displayDates() {
    printf("Available Dates:\n");
    printf("1. 2023-10-15\n");
    printf("2. 2023-10-16\n");
    printf("3. 2023-10-17\n");
    printf("4. 2023-10-18\n");
    printf("5. 2023-10-19\n");
    printf("6. 2023-10-20\n");
    printf("7. 2023-10-21\n");
}

// Function to display available ticket types
void displayTicketTypes() {
    printf("Available Ticket Types:\n");
    printf("1. Economy Class\n");
    printf("2. Business Class\n");
    printf("3. First Class\n");
}

int main() {
    int destinationChoice, dateChoice, ticketChoice, priceProtectionChoice, quitChoice;
    
    printf("Welcome to the Airline Booking System\n");

    do {
        displayDestinations();
        printf("Select your destination (1-%d): ", MAX_DESTINATIONS);
        scanf("%d", &destinationChoice);

        if (destinationChoice < 1 || destinationChoice > MAX_DESTINATIONS) {
            printf("Invalid destination selection.\n");
            continue;
        }

        displayDates();
        printf("Select your date (1-%d): ", MAX_DATES);
        scanf("%d", &dateChoice);

        if (dateChoice < 1 || dateChoice > MAX_DATES) {
            printf("Invalid date selection.\n");
            continue;
        }

        displayTicketTypes();
        printf("Select your ticket type (1-%d): ", MAX_TICKET_TYPES);
        scanf("%d", &ticketChoice);

        if (ticketChoice < 1 || ticketChoice > MAX_TICKET_TYPES) {
            printf("Invalid ticket type selection.\n");
            continue;
        }

        printf("Would you like to add price protection? (1 for Yes, 0 for No): ");
        scanf("%d", &priceProtectionChoice);

        printf("\nBooking details:\n");
        switch (destinationChoice) {
            case 1: printf("Destination: New York\n"); break;
            case 2: printf("Destination: Los Angeles\n"); break;
            case 3: printf("Destination: Chicago\n"); break;
            case 4: printf("Destination: Miami\n"); break;
            case 5: printf("Destination: Las Vegas\n"); break;
        }
        
        switch (dateChoice) {
            case 1: printf("Date: 2023-10-15\n"); break;
            case 2: printf("Date: 2023-10-16\n"); break;
            case 3: printf("Date: 2023-10-17\n"); break;
            case 4: printf("Date: 2023-10-18\n"); break;
            case 5: printf("Date: 2023-10-19\n"); break;
            case 6: printf("Date: 2023-10-20\n"); break;
            case 7: printf("Date: 2023-10-21\n"); break;
        }

        switch (ticketChoice) {
            case 1: printf("Ticket Type: Economy Class\n"); break;
            case 2: printf("Ticket Type: Business Class\n"); break;
            case 3: printf("Ticket Type: First Class\n"); break;
        }

        if (priceProtectionChoice == 1) {
            printf("Price Protection: Yes\n");
        } else {
            printf("Price Protection: No\n");
        }

        printf("Your ticket has been booked. Thank you for choosing our airline!\n");

        printf("Do you want to book another ticket? (1 for Yes, 0 to Quit): ");
        scanf("%d", &quitChoice);
    } while (quitChoice != 0);

    return 0;
}


