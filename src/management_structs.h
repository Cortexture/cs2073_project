#include <stdbool.h>

struct Date {
  int month;
  int day;
  int year;
};

struct DateTime {
  struct Date date;
  int hour;
  int minute;
};

struct Name {
  char first_name[15];
  char last_name[30];
  char middle_inital[1];
};

struct SeatType {
  bool first_class;
  bool regular_class;
  bool economy_class;
};

struct Plane {
  char identifier[7]; // ICAO 3 letters for company name, 4 numbers for ID
  char type[4]; // ICAO Type Code
  float range;
  int max_seats;
};

struct Airport {
  char identifier[3]; // 3 letter codeword
  char destinations[10][3];
};

struct SeatMap {
  struct Plane plane;
  bool filled;
};

struct FlightPath {
  struct Airport route_start;
  struct Airport route_end;
};

struct Employee {
  struct Name name;
  char title[15];
};

struct FlightCrew {
  struct Employee identity;
  struct DateTime schedule_start;
  struct DateTime schedule_end;
};

struct FlightRoute {
  struct Plane plane;
  struct DateTime depart_time;
  struct FlightPath flight_path;
  struct FlightCrew flight_crew;
};

struct Ticket {
  struct FlightPath flight_path;
  struct FlightRoute flight;
  struct SeatType seat_type;
};

struct Passenger {
  struct Name name;
  struct Date birth_date;
  char gender[2]; // M, F, NB, et cetera
  struct Ticket ticket;
};



