# PR-CPP-2
# Railway Reservation System

## Overview
The Railway Reservation System is a C++ application that allows users to manage train records. Users can add new train details, display all train records, and search for a specific train by its number. This project demonstrates object-oriented programming concepts, including classes, encapsulation, and static members.

## Features
- **Add New Train Record**: Users can input details for multiple trains, including train number, name, source, destination, and time.
- **Display All Train Records**: Users can view the details of all trains stored in the system.
- **Search Train By Number**: Users can search for a specific train using its train number.
- **Dynamic Train Count**: The system keeps track of the total number of trains added using a static member variable.

## Class Structure
### Train Class
- **Attributes**:
  - `trainNumber`: An integer representing the train's unique number.
  - `trainName`: A character array storing the name of the train.
  - `source`: A character array storing the source station.
  - `destination`: A character array storing the destination station.
  - `trainTime`: A character array storing the train's departure time.
  - `trainCount`: A static integer that keeps track of the total number of trains.

- **Methods**:
  - Constructors and Destructor: Initializes train details and decrements the train count when a train object is destroyed.
  - Setters and Getters: Methods to set and retrieve train details.
  - `inputTrainDetails()`: Prompts the user to enter train details.
  - `displayTrainDetails(int index)`: Displays the details of the train.

### RailwaySystem Class
- **Attributes**:
  - `trains`: An array of `Train` objects to store multiple train records.
  - `totalTrains`: An integer to keep track of the number of trains added.

- **Methods**:
  - `addTrain()`: Calls the `inputTrainDetails()` method of the `Train` class to add a new train.
  - `displayAllTrains()`: Iterates through the `trains` array and displays details of all trains.
  - `searchTrainByNumber(int number)`: Searches for a train by its number and displays its details if found.

## Usage
1. Compile the program using a C++ compiler.
2. Run the executable.
3. Follow the on-screen menu to add train records, display all records, or search for a specific train.

## Screenshots
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/9c41104a-5398-4b32-8894-e08385180af1" />
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/a1db6ba2-1856-4628-9fd8-2cccbbeb6137" />
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/064667dc-f9b9-48d1-819e-d839f88340b5" />

## Conclusion
The Railway Reservation System is a simple yet effective application for managing train records. It showcases fundamental programming concepts and provides a user-friendly interface for train management. 

Feel free to enhance the system by adding more features, such as editing train details or deleting records.
