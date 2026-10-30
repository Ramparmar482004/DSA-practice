#include <iostream>
#include <string>
using namespace std;

const int TOTAL_SEATS = 30;

// Passenger details
struct Passenger {
    int seatNumber;
    string name;
    int age;
    char gender;
    Passenger* next;
};

// Function declarations
void bookTicket(int* seats, Passenger*& head);
void cancelTicket(int* seats, Passenger*& head);
void viewTrainStatus(int* seats);
void viewPassengerList(Passenger* head);
void freeMemory(int* seats, Passenger*& head);

// Book Ticket
void bookTicket(int* seats, Passenger*& head) {
    int seat = -1;

    for (int i = 0; i < TOTAL_SEATS; i++) {
        if (seats[i] == 0) {
            seat = i;
            break;
        }
    }

    if (seat == -1) {
        cout << "\nSorry! No seats available.\n";
        return;
    }

    string name;
    int age;
    char gender;

    cout << "\nEnter Passenger Name: ";
    getline(cin >> ws, name);

    cout << "Enter Age: ";
    cin >> age;

    if (age <= 0) {
        cout << "Invalid age!\n";
        return;
    }

    cout << "Enter Gender (M/F/O): ";
    cin >> gender;

    if (gender != 'M' && gender != 'm' &&
        gender != 'F' && gender != 'f' &&
        gender != 'O' && gender != 'o') {
        cout << "Invalid gender!\n";
        return;
    }

    // Dynamically allocate a new passenger node
    Passenger* newPassenger = new Passenger;

    newPassenger->seatNumber = seat + 1;
    newPassenger->name = name;
    newPassenger->age = age;
    newPassenger->gender = gender;
    newPassenger->next = nullptr;

    // Insert at the end of the linked list
    if (head == nullptr) {
        head = newPassenger;
    } else {
        Passenger* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newPassenger;
    }

    // Mark seat as booked
    seats[seat] = 1;

    cout << "\nTicket booked successfully!\n";
    cout << "Seat Number: " << seat + 1 << "\n";
}

// Cancel Ticket
void cancelTicket(int* seats, Passenger*& head) {
    int seat;

    cout << "\nEnter Seat Number to Cancel: ";
    cin >> seat;

    if (seat < 1 || seat > TOTAL_SEATS) {
        cout << "Invalid seat number!\n";
        return;
    }

    if (seats[seat - 1] == 0) {
        cout << "This seat is already available.\n";
        return;
    }

    Passenger* temp = head;
    Passenger* previous = nullptr;

    while (temp != nullptr && temp->seatNumber != seat) {
        previous = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Passenger record not found.\n";
        return;
    }

    // Remove node from linked list
    if (previous == nullptr) {
        head = temp->next;
    } else {
        previous->next = temp->next;
    }

    // Free the node's memory
    delete temp;

    // Mark seat as available
    seats[seat - 1] = 0;

    cout << "Ticket cancelled successfully!\n";
}

// View Train Status
void viewTrainStatus(int* seats) {
    cout << "\n========== TRAIN STATUS ==========\n";

    for (int i = 0; i < TOTAL_SEATS; i++) {
        cout << "Seat " << i + 1 << ": ";

        if (seats[i] == 1) {
            cout << "Booked";
        } else {
            cout << "Available";
        }

        cout << '\n';
    }
}

// View Passenger List
void viewPassengerList(Passenger* head) {
    cout << "\n========== PASSENGER LIST ==========\n";

    if (head == nullptr) {
        cout << "No passengers booked yet.\n";
        return;
    }

    Passenger* temp = head;

    while (temp != nullptr) {
        cout << "\nSeat No: " << temp->seatNumber
             << " | Name: " << temp->name
             << " | Age: " << temp->age
             << " | Gender: " << temp->gender << '\n';

        temp = temp->next;
    }
}

// Free all allocated memory
void freeMemory(int* seats, Passenger*& head) {
    while (head != nullptr) {
        Passenger* temp = head;
        head = head->next;
        delete temp;
    }

    delete[] seats;
    cout << "All allocated memory freed successfully.\n";
}

// Main Function
int main() {
    // Dynamically allocate the seat array
    int* seats = new int[TOTAL_SEATS]();

    Passenger* head = nullptr;

    int choice;

    do {
        cout << "\n====== RAILWAY RESERVATION SYSTEM ======\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. View Train Status\n";
        cout << "4. View Passenger List\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Please enter a valid number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                bookTicket(seats, head);
                break;

            case 2:
                cancelTicket(seats, head);
                break;

            case 3:
                viewTrainStatus(seats);
                break;

            case 4:
                viewPassengerList(head);
                break;

            case 5:
                freeMemory(seats, head);
                seats = nullptr;
                cout << "Thank you for using Railway Reservation System!\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}