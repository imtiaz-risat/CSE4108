#include <stdio.h>

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

int main()
{
    int h, m;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &h, &m);

    int val = 60 * h + m;

    int depart[8];
    depart[0] = 8 * 60;
    depart[1] = 9 * 60 + 43;
    depart[2] = 11 * 60 + 19;
    depart[3] = 12 * 60 + 47;
    depart[4] = 14 * 60;
    depart[5] = 15 * 60 + 45;
    depart[6] = 21 * 60;
    depart[7] = 21 * 60 + 45;

    int arive[8];
    arive[0] = 10 * 60 + 16;
    arive[1] = 11 * 60 + 52;
    arive[2] = 13 * 60 + 31;
    arive[3] = 15 * 60;
    arive[4] = 16 * 60 + 8;
    arive[5] = 17 * 60 + 55;
    arive[6] = 21 * 60 + 20;
    arive[7] = 23 * 60 + 58;

    if (val <= depart[0])
    {
        int difprev = 24 * 60 - (21 * 60 + 45) + val;

        if (depart[0] - val < difprev)
            printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
        else
            printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
    }
    else
    {
        for (int i = 0; i < 7; i++)
        {

            if (val > depart[i] && val <= depart[i + 1])
            {
                if (val - depart[i] < depart[i + 1] - val)
                {
                    int hh = time12(depart[i]), mm = depart[i] % 60;
                    int indx = ispm(depart[i]);
                    printf("Closest departure time is %d:%.2d %c.m., ", hh, mm, ampm[indx]);
                    hh = time12(arive[i]), mm = arive[i] % 60;
                    indx = ispm(arive[i]);
                    printf("arriving at %d:%.2d %c.m.", hh, mm, ampm[indx]);
                }
                else
                {
                    int hh = time12(depart[i + 1]), mm = depart[i + 1] % 60;
                    int indx = ispm(depart[i + 1]);
                    printf("Closest departure time is %d:%.2d %c.m., ", hh, mm, ampm[indx]);
                    hh = time12(arive[i + 1]), mm = arive[i + 1] % 60;
                    indx = ispm(arive[i + 1]);
                    printf("arriving at  %d:%.2d %c.m.", hh, mm, ampm[indx]);
                }
            }
        }
    }

    return 0;
}
