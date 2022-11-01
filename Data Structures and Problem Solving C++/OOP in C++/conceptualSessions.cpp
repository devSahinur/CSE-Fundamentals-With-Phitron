#include <bits/stdc++.h>
using namespace std;
// GPA Calculation
class Student
{
public:
    float gpa;
    int marks[5];
    bool pass_status = true;

    Student(int arr[])
    {
        float sum = 0;
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] < 100 || arr[i] < 0)
            {
                cout << "Invalid Number .Enter a valid number";
                int num;
                cin >> num;
                arr[i] = num;
            }
            marks[i] = arr[i];
            if (arr[i] >= 80)
            {
                sum += 5;
            }
            else if (arr[i] >= 70)
            {
                sum += 4;
            }
            else if (arr[i] >= 60)
            {
                sum += 3.5;
            }
            else if (arr[i] >= 50)
            {
                sum += 3.0;
            }

            else
            {
                sum += 2.0;
            }
        }
        gpa = sum / 5;
        if (gpa < 3.0)
        {
            pass_status = false;
        }
        // cout << gpa << endl;
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
        cout << "GPA for student " << i + 1 << endl;
        cout << student[i]->gpa << endl;
        cout << "Status" << endl;
        if (student[i]->pass_status)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
        cout << "Marks for student " << i + 1 << endl;
        for (int k = 0; k < 5; k++)
        {
            cout << student[i]->marks[k] << " ";
        }
        cout << endl;
    }

    return 0;
}