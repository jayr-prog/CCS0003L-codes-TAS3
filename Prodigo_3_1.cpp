#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
    // Column widths for aligned output
    const int dayW  = 12;
    const int timeW = 20;
    const int codeW = 40;
    const int secW  = 10;
    const int roomW = 8;

    // Header
    cout << left
         << setw(dayW)  << "Day"
         << setw(timeW) << "Time"
         << setw(codeW) << "Course Code"
         << setw(secW)  << "Section"
         << setw(roomW) << "Room" << endl;

    cout << string(dayW + timeW + codeW + secW + roomW, '-') << endl;

    // Tuesday
    cout << left << setw(dayW) << "Tuesday"   << setw(timeW) << "7:00-9:40 AM"
         << setw(codeW) << "Introduction to Computing (LEC)"
         << setw(secW) << "TN02" << setw(roomW) << "TBA" << endl;
    cout << left << setw(dayW) << "Tuesday"   << setw(timeW) << "11:00-12:50 PM"
         << setw(codeW) << "Science, Technology and Society"
         << setw(secW) << "TN02" << setw(roomW) << "TBA" << endl;
    cout << left << setw(dayW) << "Tuesday"   << setw(timeW) << "1:00-2:20 PM"
         << setw(codeW) << "Personal and Professional Effectiveness"
         << setw(secW) << "TN02" << setw(roomW) << "TBA" << endl;

    // Wednesday
    cout << left << setw(dayW) << "Wednesday" << setw(timeW) << "7:00-9:50 AM"
         << setw(codeW) << "Introduction to Computing (LAB)"
         << setw(secW) << "TN02" << setw(roomW) << "702" << endl;
    cout << left << setw(dayW) << "Wednesday" << setw(timeW) << "11:00-12:50 PM"
         << setw(codeW) << "Physical Education 1"
         << setw(secW) << "TN02" << setw(roomW) << "TBA" << endl;
    cout << left << setw(dayW) << "Wednesday" << setw(timeW) << "1:00-2:50 PM"
         << setw(codeW) << "Readings in Philippine History"
         << setw(secW) << "TN02" << setw(roomW) << "505" << endl;

    // Thursday
    cout << left << setw(dayW) << "Thursday"  << setw(timeW) << "7:00-9:50 AM"
         << setw(codeW) << "Computer Programming 1 (LAB)"
         << setw(secW) << "TN02" << setw(roomW) << "702" << endl;

    // Friday
    cout << left << setw(dayW) << "Friday"    << setw(timeW) << "7:00-9:40 AM"
         << setw(codeW) << "Computer Programming 1 (LEC)"
         << setw(secW) << "TN02" << setw(roomW) << "TBA" << endl;
    cout << left << setw(dayW) << "Friday"    << setw(timeW) << "11:00-12:50 PM"
         << setw(codeW) << "Science, Technology and Society"
         << setw(secW) << "TN02" << setw(roomW) << "TBA" << endl;
    cout << left << setw(dayW) << "Friday"    << setw(timeW) << "1:00-2:20 PM"
         << setw(codeW) << "Personal and Professional Effectiveness"
         << setw(secW) << "TN02" << setw(roomW) << "TBA" << endl;

    // Saturday
    cout << left << setw(dayW) << "Saturday"  << setw(timeW) << "11:00-12:50 PM"
         << setw(codeW) << "Physical Education 1"
         << setw(secW) << "TN02" << setw(roomW) << "TBA" << endl;
    cout << left << setw(dayW) << "Saturday"  << setw(timeW) << "1:00-2:50 PM"
         << setw(codeW) << "Readings in Philippine History"
         << setw(secW) << "TN02" << setw(roomW) << "505" << endl;

    return 0;
}
