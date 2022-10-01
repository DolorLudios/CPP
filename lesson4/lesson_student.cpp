#include <iostream>
#include <string>

using namespace std;

const int numberOfSeats = 15;

struct Student {
	string Name;
	int Age;
	struct Lesson** Schedule;

};
struct Lesson {
	string subject_Name;
	int starting_hours;
	struct Student* participants[numberOfSeats];
	int numberOfParticipants;

};
int main() {
	Lesson Programming = { "Programming",18,{0},0 };
	Lesson Physics = { "Physics",16,{0},0 };
	Lesson English = { "English",14,{0},0 };
	Lesson subject_List[] = {Programming,Physics,English};
	int studentsNum;

	cout << "Enter the number of students" << endl;
	cin >> studentsNum;

	Student* student_list = new Student[studentsNum];

    cout << "Enter data about students" << endl;
    for (int i = 0; i < studentsNum; i++) {
        int lessonsNum;

        cout << "Student #" << i + 1 << endl;

        cout << "Name: ";
        cin >> student_list[i].Name;

        cout << "Age: ";
        cin >> student_list[i].Age;

        cout << "Number of lessons: ";

        cin >> lessonsNum;
        student_list[i].Schedule = new Lesson* [lessonsNum];
        for (int j = 0; j < lessonsNum; j++) {
            int subject;

            cout << "Enter '0' to add programming, '1' to add physics, '2' to add English: ";
            cin >> subject;

            student_list[i].Schedule[j] = subject_List + subject;
            subject_List[subject].participants[subject_List[subject].numberOfParticipants++] = &student_list[i];
        }

        cout << endl;
    }
    cout << "Here is an information about lessons: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << subject_List[i].subject_Name << ", ";
        cout << subject_List[i].starting_hours << ":00" << endl;
        cout << "Participants: " << endl;
        for (int j = 0; j < subject_List[i].numberOfParticipants; j++) {
            cout << "  " << j + 1 << ") " << subject_List[i].participants[j]->Name << ", ";
            cout << subject_List[i].participants[j]->Age << " years old" << endl;
        }
        cout << endl;
    }
    return 0;
}

