#include <stdbool.h>

typedef struct {
  int month;
  int day;
  int year;
} Date;

typedef struct {
  Date date;
  int hour;
  int minute;
} DateTime;

typedef struct {
  char first_name[15];
  char last_name[30];
  char middle_inital[1];
} Name;

typedef struct {
  bool first_class;
  bool regular_class;
  bool economy_class;
} SeatType;

typedef struct {
  char identifier[7]; // ICAO 3 letters for company name, 4 numbers for ID
  char type[4]; // ICAO Type Code
  float range;
  int max_seats;
} Plane;

typedef struct {
  char identifier[3]; // 3 letter codeword
  char destinations[10][3];
} Airport;

typedef struct {
  Plane plane;
  bool filled;
} SeatMap;

typedef struct {
  Airport route_start;
  Airport route_end;
} FlightPath;

typedef struct {
  Name name;
  char title[15];
} Employee;

typedef struct {
  Employee identity;
  DateTime schedule_start;
  DateTime schedule_end;
} FlightCrew;

typedef struct {
  Plane plane;
  DateTime depart_time;
  FlightPath flight_path;
  FlightCrew flight_crew;
} FlightRoute;

typedef struct {
  FlightPath flight_path;
  FlightRoute flight;
  SeatType seat_type;
} Ticket;

typedef struct {
  Name name;
  Date birth_date;
  char gender[2]; // M, F, NB, et cetera
  Ticket ticket;
} Passenger;


