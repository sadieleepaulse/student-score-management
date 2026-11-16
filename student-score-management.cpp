#include <iostream>
#include <iomanip>

using namespace std;
int main() {
const int NUM_STUDENTS = 5;
double scores[NUM_STUDENTS];
double sum = 0, highest, lowest;
cout << "Enter the scores for 5 students:" << endl;
for (int i = 0; i < NUM_STUDENTS; i++) {
cout << "Enter score for student " << i + 1 << ":";
cin >> scores[i];

if (i == 0) {
highest = scores[0];
lowest = scores[0];
}

if (scores[i] > highest) highest = scores[i];
if (scores[i] < lowest) lowest = scores[i];
sum += scores[i];
}

double average = sum / NUM_STUDENTS;

cout << "\
Scores entered:" << endl;
for (int i = 0; i < NUM_STUDENTS; i++) {
cout << "Student " << i + 1 << ": " << scores[i] << endl;
}

cout << fixed << setprecision(2);
cout << "\
Average score: " << average << endl;
cout << "Highest score: " << highest << endl;
cout << "Lowest score: " << lowest << endl;
return 0;
}