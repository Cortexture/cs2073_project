# cs2073_project
## Final Group Project for CS 2073 with Dr. Richards
### Anelise Candia, Mario De La Cabada, Spencer Simpson, Camille Sweeney



# TO DO

## Customers
- [ ] Online Portal
    - [ ] Generate Flight Information by Destination
        - [ ] Flight Data
            - [x] Destination
            - [x] Departure Dates
            - [x] Departure Time
            - [ ] Arrival Dates
            - [ ] Arrival Time
            - [ ] Number of Guests
            - [x] Type of Ticket (Roundtrip, One Way, Multi-city)
            - [ ] Flight Insurance (price drop protection)
            - [ ] Seat Number
            - [ ] Seat Types
            - [ ] Check Avaiability
    - [ ] Send a confimation code for the Flight ticket purchased

## Employees
- [ ] Employee Verification
- [ ] Have a way to keep track of filled seats in a Flight
- [ ] Operations Manager
- [ ] Safety Manager
- [ ] Environmental Manager
- [ ] General Manager
- [ ] TSA Officers
- [ ] Aircraft Customer Service
- [ ] Processing of Payments
- [ ] Online Ticket Sale Confirmation

## Management
- [x] Structs for Management
    - [x] Planes
        - [x] Identifier
        - [x] Type
        - [x] Max Seats
        - [x] Range
    - [x] Airport
        - [x] Identifier
        - [x] Array of Departures 
        - [ ] Array of Destinations
    - [ ] Terminal
        - [ ] Array for Flights Scheduled
    - [x] Passenger 
        - [x] First Name
        - [x] Last Name 
        - [x] Middle Inital
        - [x] Birthdate 
        - [x] Gender
    - [x] Flight Path
        - [x] Route Start Location
        - [x] Route End Location
    - [x] Employee
        - [x] First Name
        - [x] Last Name
        - [x] Middle Inital
        - [x] Title
    - [ ] Flight Crew
        - [ ] Captain
        - [ ] 1st Officer
        - [ ] Flight Crew
    - [x] Seat Map
        - [ ] Fill Status
        - [ ] 1st Class
        - [ ] Regular Class
        - [ ] Economy Class
    - [ ] Flight Route
        - [ ] Plane
        - [ ] Depart Time
        - [ ] Depart Date
        - [ ] Flight Crew (Relating to the Flight Crew struct)
        - [ ] Seat Map (Relating to the Seat Map struct)
    - [ ] Ticket
        - [ ] Passenger (Relating to the Passenger Struct)
        - [ ] Flight
        - [ ] Purchase Amount
        - [ ] Seat
- [ ] Dashboards to monitor Details
    - [ ] Management Specific
    - [ ] Airline Specific
    - [ ] Information regarding Customers
- [ ] Updating Flight Information 
    - [ ] Times for Arrival
    - [ ] Times for Departure
- [ ] Air Traffic Management
    - [ ] Aircraft Queues
    - [ ] Parking of Aircraft
- [ ] Scheduling Management
    - [ ] Pilots
    - [ ] Flight Attendants
    - [ ] Ground Crew 
    - [ ] Airport Commerial Facilities
    - [ ] General Employees
- [ ] Security Layer
    - [ ] VLAND Segmentation
        - [ ] Customer no access to Management
        - [ ] Emplyee only access to relevant roles, whether work specific or customer specific
        - [ ] Management should have access to their own information
        - [ ] Management should have access to employee information
- [ ] Forgery Protection 
    - [ ] Authenticity of ticket verification
- [ ] Routing Software
    - [ ] Handle Cancellations
    - [ ] Inclement Weather
    - [ ] Crew Schedules
    - [ ] Domestic Travel only (Reduce Complexity)
- [ ] Battery of Unit Testing
