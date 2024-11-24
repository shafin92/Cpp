#include <iostream>
using namespace std;
int main() {
    int startDay, startHour, startMinute, startSecond;
    int endDay, endHour, endMinute, endSecond;
    cin.ignore(4); // Ignore "Dia "
    cin >> startDay;
    cin >> startHour;
    cin.ignore(3); // Ignore ": "
    cin >> startMinute;
    cin.ignore(3); // Ignore ": "
    cin >> startSecond;
    cin.ignore(4); // Ignore "Dia "
    cin >> endDay;
    cin >> endHour;
    cin.ignore(3); // Ignore ": "
    cin >> endMinute;
    cin.ignore(3); // Ignore ": "
    cin >> endSecond;
    long long startTimeInSeconds = startDay * 86400 + startHour * 3600 + startMinute * 60 + startSecond;
    long long endTimeInSeconds = endDay * 86400 + endHour * 3600 + endMinute * 60 + endSecond;
    long long durationInSeconds = endTimeInSeconds - startTimeInSeconds;
    int days = durationInSeconds / 86400;
    int hours = (durationInSeconds % 86400) / 3600;
    int minutes = ((durationInSeconds % 86400) % 3600) / 60;
    int seconds = ((durationInSeconds % 86400) % 3600) % 60;
    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}
