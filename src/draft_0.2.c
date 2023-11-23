/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



   //customer side Code
   //pt. 1 declare variables
    
    
    
    char ticketTypes(){
        char ticket[4][20]= {"1: Economy","2: Business","3: (Premium)Economy","4: First class"};
       
       printf("The following list is of all ticket types:\n");
       for (int i=0; i<4; i++){
        printf("%s\n", ticket[i]);
        }
    }
   char availableDestinations(){
       printf("The following list is all available destinations:\n");
       char destinations[4][20]= {"1: Maui,Hawaii","2: Dallas,Texas","3: Paris,France","4: Tokyo,Japan"};
       
       for (int i=0; i<4; i++){
        printf("%s\n", destinations[i]);
   }
   }
       
   void arrivalDates(){
       printf("The following list is avalible arrival dates:\n");
       int dates[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
       
       for (int i=0; i<20;i++){
           printf("%d\n", dates[i]);
       }
   }
   
   
   void departureDates(){
   printf("The folliwng is a list of all departure dates:\n");    
   
       int dates[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
       
       for (int i=0; i<20;i++){
           printf("%d\n", dates[i]);
       }

}
int main(){
    int destinationChoice;
    int departChoice;
    int ticketChoice;
    int numTravellers;
    int arrivalChoice;
    
    printf("How many people are you travelling with?\n");
    scanf("%d", &numTravellers);
        
       while(numTravellers>10){
           printf("Error: Group size is too large please try again\n");
       scanf("%d", &numTravellers);
       }
    
    
    //for (int i=0; i<numTravellers; i++){
  ticketTypes();
  printf("What ticket type would you like? (1-4)\n");
      scanf("%d",&ticketChoice);
      while(ticketChoice>4){
          printf("Error: Please pick an option between 1 and 4\n");
          scanf("%d",&ticketChoice);
      }
       
      
  printf("\n");
  availableDestinations();
  printf("where would you like to go?(1-4)\n");
   scanf("%d", &destinationChoice);
   while(destinationChoice>4 || destinationChoice<1){
       printf("Error: Please pick a destination between 1 and 4.\n");
       scanf("%d", &destinationChoice);
   }
   
  printf("\n");
  arrivalDates();
  printf("When would you like to arrive\n");
   scanf("%d", &arrivalChoice);
   while(arrivalChoice>20){
       printf("Error: Please pick a date between 1 and 20.\n");
       scanf("%d", &arrivalChoice);
   }
   
  printf("\n");
  departureDates();
  printf("When would you like to depart\n");
    scanf("%d", &departChoice);
    while(departChoice>20){
        printf("Error: Please pick a date between 1 and 20.\n");
       scanf("%d", &departChoice);
    }
    
return 0;
}
//draft_0.1.c
//3 KB