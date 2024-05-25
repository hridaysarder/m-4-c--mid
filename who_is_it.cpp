#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int totalMarks;
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student students[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }
        Student highest = students[0];
        for (int i = 0; i < 3; i++)
        {
            if (students[i].totalMarks > highest.totalMarks)
            {
                highest = students[i];
            }
            else if (students[i].totalMarks == highest.totalMarks)
            {
                if (students[i].id < highest.id)
                {
                    highest = students[i];
                }
            }
        }
        cout << highest.id << " " << highest.name << " " << highest.section << " " << highest.totalMarks << endl;
    }
    return 0;
}