#include <stdio.h>
#include <stdbool.h>

struct Plane {
  char identifier[7]; // ICAO 3 letters for company name, 4 numbers for ID
  char type[4]; // ICAO Type Code
  float range;
  int max_seats;
};

struct SeatMap {
  struct Plane plane;
  bool filled;
};

struct Airport {
  char identifier[3]; // 3 letter codeword
  char destinations[10][3];
};

struct FlightPath {
  struct Airport route_start;
  struct Airport route_end;
};

struct Name {
  char first_name[15];
  char last_name[30];
  char middle_inital[1];
};

struct Employee {
  struct Name name;
  char title[15];
};

struct Date {
  int month;
  int day;
  int year;
};

struct Passenger {
  struct Name name;
  struct Date birth_date;
  char gender[2]; // M, F, NB, et cetera
};

struct DateTime {
  struct Date date;
  int hour;
  int minute;
};

struct FlightCrew {
  struct Employee identity;
  struct DateTime schedule_start;
  struct DateTime schedule_end;
};






