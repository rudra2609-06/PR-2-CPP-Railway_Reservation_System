#include <iostream>
#include <cstring>
using namespace std;

class Train
{
private:
    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];
    static int trainCount;

public:
    Train()
    {
        trainNumber = 0;
        strcpy(trainName, "");
        strcpy(source, "");
        strcpy(destination, "");
        strcpy(trainTime, "");
    }
    Train(int train_number, char *train_name, char *train_source, char *train_destination, char *train_time)
    {
        trainNumber = train_number;
        strcpy(trainName, train_name);
        strcpy(source, train_source);
        strcpy(destination, train_destination);
        strcpy(trainTime, train_time);
    }

    ~Train()
    {
        trainCount--;
    }

    void setTrainNumber(int train_number) { trainNumber = train_number; }
    int getTrainNumber(void) { return trainNumber; }

    void inputTrainDetails()
    {
        cout << endl
             << "-------Input Train " << trainCount + 1 << " details-------" << endl;
        cout << "Enter Train Number: ";
        cin >> trainNumber;
        cin.ignore();
        cout << "Enter Train Name: ";
        cin.getline(trainName, 50);
        cout << "Enter Train Source: ";
        cin.getline(source, 50);
        cout << "Enter Train Destination: ";
        cin.getline(destination, 50);
        cout << "Enter Train Time: ";
        cin.getline(trainTime, 10);
        trainCount++;
    }

    void displayTrainDetails(int index)
    {
        cout << "----------Train " << (index + 1) << " details---------- " << endl;
        cout << "Train Number:" << trainNumber << endl;
        cout << "Train Name:" << trainName << endl;
        cout << "Source:" << source << endl;
        cout << "Destination:" << destination << endl;
        cout << "Train Time:" << trainTime << endl;
    }

    static int getTrainCount()
    {
        return trainCount;
    }
};

int Train::trainCount = 0;

class RailwaySystem
{
private:
    Train trains[100];
    int totalTrains = 0;

public:
    void addTrain()
    {
        trains[totalTrains].inputTrainDetails();
        totalTrains++;
    }
    void displayAllTrains()
    {
        for (int i = 0; i < totalTrains; i++)
        {
            trains[i].displayTrainDetails(i);
        }
    }
    void searchTrainByNumber(int number)
    {
        bool found = false;
        for (int i = 0; i < totalTrains; i++)
        {
            if (trains[i].getTrainNumber() == number)
            {
                cout << endl
                     << "Train Found!!" << endl;
                trains[i].displayTrainDetails(i);
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Train Not found" << endl;
        }
    }
};

int main()
{
    RailwaySystem r;
    int train_number;
    int input_size;
    int choice;
    do
    {
        cout << endl;
        cout << "-----------Railway Reservation System Menu-----------" << endl;
        cout << "1.Add New Train Record." << endl;
        cout << "2.Display All Train Records." << endl;
        cout << "3.Search Train By Number." << endl;
        cout << "4.Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "How many trian details do you want to store (Minimum 3)?" << endl;
            cin >> input_size;
            if (input_size < 3)
            {
                input_size = 3;
            }

            for (int i = 0; i < input_size; i++)
            {
                r.addTrain();
            }

            break;

        case 2:
            r.displayAllTrains();
            break;

        case 3:
            cout << "Enter Train Number:";
            cin >> train_number;
            r.searchTrainByNumber(train_number);
            break;

        case 4:
            cout << "Exiting" << endl;
            break;

        default:
            cout << endl
                 << "Enter Valid Input" << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}