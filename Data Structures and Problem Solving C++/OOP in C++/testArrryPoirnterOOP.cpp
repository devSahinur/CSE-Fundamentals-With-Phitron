#include <bits/stdc++.h>
using namespace std;
// GPA Calculation
class Student
{
public:
    float gpa;
    int marks[5];

    Student(int arr[])
    {
        for (int i = 0; i < 5; i++)
        {
            marks[i] = arr[i];
        }
    }
};

Student *storeMarks(int num)
{
    cout << "Provide marks for student no " << num << endl;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    Student *student = new Student(arr);
    return student;
}

int main()
{
    int n;
    cout << "Give the number of students" << endl;
    cin >> n;

    Student *student[n];

    for (int i = 0; i < n; i++)
    {
        student[i] = storeMarks(i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Marks for student " << i + 1 << endl;
        for (int k = 0; k < 5; k++)
        {
            cout << student[i]->marks[k] << " ";
        }
        cout << endl;
    }

    return 0;
}