#include <iostream>

#include <fstream>

#include <string>

using namespace std;

int main()

{
    string filePath;

    cout << "Enter the path to the file: ";  // Type old_faithful.csv

    cin >> filePath;

    ifstream file(filePath);

    if (!file)

        {
        cout << "Error opening file" << endl;

        return 1;
    }

    string header;

    getline(file, header);

    double eruption;

    double waiting;

    char comma;

    double totalEruption = 0;

    double totalWaiting = 0;

    int count = 0;

    while (file >> eruption >> comma >> waiting)

        {
        totalEruption = totalEruption + eruption;

        totalWaiting = totalWaiting + waiting;

        count = count + 1;
    }

    double avgEruption = totalEruption / count;

    double avgWaiting = totalWaiting / count;

    cout << "The average eruption length is " << avgEruption << " minutes." << endl;

    cout << "The average eruption wait time is " << avgWaiting << " minutes." << endl;

    file.close();

    return 0;
}
