#include <stdio.h>

int depart[8];
int arive[8];

char ampm[] = "ap";
int ispm(int timeval)
{
    return timeval / 60 >= 12;
}
int time12(int timeval)
{
    if (timeval / 60 == 0)
        return 12;
    else if (timeval / 60 > 12)
        return timeval / 60 - 12;
    return timeval / 60;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{

    depart[0] = 8 * 60;
    depart[1] = 9 * 60 + 43;
    depart[2] = 11 * 60 + 19;
    depart[3] = 12 * 60 + 47;
    depart[4] = 14 * 60;
    depart[5] = 15 * 60 + 45;
    depart[6] = 21 * 60;
    depart[7] = 21 * 60 + 45;

    arive[0] = 10 * 60 + 16;
    arive[1] = 11 * 60 + 52;
    arive[2] = 13 * 60 + 31;
    arive[3] = 15 * 60;
    arive[4] = 16 * 60 + 8;
    arive[5] = 17 * 60 + 55;
    arive[6] = 21 * 60 + 20;
    arive[7] = 23 * 60 + 58;

    if (desired_time <= depart[0])
    {
        int difprev = 24 * 60 - depart[7] + desired_time;

        if (depart[0] - desired_time < difprev)
        {
            *departure_time = depart[0], *arrival_time = arive[0];
        }
        else
            *departure_time = depart[7], *arrival_time = arive[7];
    }
    else
    {
        for (int i = 0; i < 7; i++)
        {

            if (desired_time > depart[i] && desired_time <= depart[i + 1])
            {
                if (desired_time - depart[i] < depart[i + 1] - desired_time)
                {
                    *departure_time = depart[i], *arrival_time = arive[i];
                }
                else
                    *departure_time = depart[i + 1], *arrival_time = arive[i + 1];
            }
        }
    }
}

int main()
{
    int h, m;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &h, &m);

    int val = 60 * h + m;
    int depval, arrval;
    find_closest_flight(val, &depval, &arrval);

    int hh = time12(depval), mm = (depval) % 60;
    int indx = ispm(depval);
    printf("Closest departure time is %d:%.2d %c.m., ", hh, mm, ampm[indx]);

    hh = time12(arrval), mm = (arrval) % 60;
    indx = ispm(arrval);
    printf("arriving at %d:%.2d %c.m.", hh, mm, ampm[indx]);

    return 0;
}
