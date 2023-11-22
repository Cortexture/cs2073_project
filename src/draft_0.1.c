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
        char ticket[4][20]= {"Economy","Business","(Premium)Economy","First class"};
       
       printf("The following list is of all ticket types:\n");
       for (int i=0; i<4; i++){
        printf("%s\n", ticket[i]);
        }
   }
   char availableDestinations(){
       printf("The following list is all available destinations:\n");
       char destinations[4][20]= {"Maui,Hawaii","Dallas,Texas","Paris,France","Tokyo,Japan"};
       
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
    int dateChoice;
    int ticketChoice;
    int numTravellers;
    
    printf("How many people are you travelling with?\n");
    scanf("%d", &numTravellers);
        
       while(numTravellers>10){
           printf("Error: Group size is too large please try again\n");
       scanf("%d", &numTravellers);
       }
    
    
    //for (int i=0; i<numTravellers; i++){
  ticketTypes();
  printf("What ticket type would you like?\n");
      //scanf("for what element they want")
      
  printf("\n");
  availableDestinations();
  printf("where would you like to go?\n");
   //scanf("for what element they want")
   
  printf("\n");
  arrivalDates();
  printf("When would you like to arrive\n");
   //scanf("for what element they want")
   
  printf("\n");
  departureDates();
  printf("When would you like to depart\n");
    //}
    
return 0;
}