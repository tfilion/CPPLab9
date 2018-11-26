#include <iostream>

using namespace std;

int main()

{
int totalNumGrades = 10; //looking at 10 students' grades
int passed[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int failed[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int grade;
int totalPassed=0; //this variable will keep track of passing grades

for (int count = 0; count < totalNumGrades; ++count)
    {
    cout << "Please enter student grade: \n";
    cin >> grade;

       if (grade <= 100 && grade >= 0) //any number entered that is greater than 100 or less than 0 will not be saved in array
        {
            //PASS
            if (grade >= 50)
            {
                passed[count] = grade; //adds grade to passed array
            }
            //FAIL
            else
            {
                failed[count] = grade; //adds grade to failed array
            }
        }
    }

cout << "These are the passing grades:\n";

for (int pass : passed)
    {
        if (pass >= 50)
        {
            cout << pass << "\n";
            ++totalPassed; //keeps count of passing grades
        }
    }

cout << "These are the failed grades:\n";

for (int fail : failed)
    {
        if (fail >= 0)
        {
            cout << fail << "\n";
        }
    }

if (totalPassed >= 8) // will print message below if total of passing grades is greater than or equal to 8
    {
        cout << totalPassed << " out of 10 students have a passing grade. Raise tuition!\n";
    }
return 0;
}

