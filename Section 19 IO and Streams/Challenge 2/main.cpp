// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{

    ifstream in_file;
    string answer_key;
    string student_name;
    string student_answer;
    double average_score;
    int number_of_students{0};

    in_file.open("responses.txt");
    if (!in_file)
    {
        cerr << "Problem opening file" << endl;
        return 1;
    }

    cout << setw(20) << left << "\nStudent"
         << " Score" << endl;

    cout << setfill('-') << setw(25) << "" << endl;
    cout << setfill(' ');

    in_file >> answer_key;

    while (in_file >> student_name >> student_answer)
    {
        int student_score{0};

        for (size_t i = 0; i < student_answer.size(); ++i)
        {
            if (answer_key.at(i) == student_answer.at(i))
            {
                student_score++;
            }
        }

        average_score += student_score;
        number_of_students++;

        cout << setw(20) << left << student_name << setw(5) << right << student_score << endl;
    }

    cout << setfill('-') << setw(25) << "" << endl;
    cout << setfill(' ');

    average_score = average_score / number_of_students;

    cout << setw(20) << left << "Average Score" << setw(5) << right << average_score << endl;

    in_file.close();
    return 0;
}
