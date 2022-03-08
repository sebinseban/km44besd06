
int topper_index = -1;
int total_marks = 0;
int temp = 0;

#define NAME_LENGTH 25
#define STUDENTS 2

struct Student
{
    int ID;
    char name[NAME_LENGTH];
    int marks[6];
    char father_name[NAME_LENGTH];

    //struct Date dob;
    //struct Date doj;
    int dob_d, dob_m, dob_y;
    int doj_d, doj_m, doj_y;
};

int findTopper (struct Student a)
{
    int j;
    for (j = 0; j < 6; j++)
    { 
        temp += a.marks[j];
    }

}
int dateComparison(int d,int m, int y, struct Student b)
{
    if (d== b.dob_y)
    {
        if (m == b.dob_m)
        {
            if (d == b.dob_d)
            {
                return 2;
            }
            else if (d < b.dob_d)
            {
                return 0;
            }
            else if (d >b.dob_d)
            {
                return 1;
            }
        }
        else if (m < b.dob_m)
        {
            return 0;
        }
        else if (m > b.dob_m)
        {
            return 1;
        }
    }
    else if (y < b.dob_y)
    {
        return 0;
    }
    else if (y > b.dob_y)
    {
        return 1;
    }
}

int structureInitialisation