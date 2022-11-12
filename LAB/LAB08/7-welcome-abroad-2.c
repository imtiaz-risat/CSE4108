#include <stdio.h>

int main()
{
    int h, m, time;
    char f;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &h, &m, &f);

    if (f == 'A' || f == 'a')
        time = h * 60 + m;
    else if (f == 'P' || f == 'p')
        time = (h + 12) * 60 + m;

    if (time >= 241 && time <= 531)
    {
        printf("Closest departure time is 08:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if (time >= 532 && time <= 631)
    {
        printf("Closest departure time is 09:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (time >= 632 && time <= 723)
    {
        printf("Closest departure time is 11:19 a.m., arriving at 01:31 a.m.\n");
    }
    else if (time >= 724 && time <= 803)
    {
        printf("Closest departure time is 12:47 p.m., arriving at 03:00 p.m.\n");
    }
    else if (time >= 804 && time <= 892)
    {
        printf("Closest departure time is 02:00 p.m., arriving at 04:08 p.m.\n");
    }
    else if (time >= 893 && time <= 1042)
    {
        printf("Closest departure time is 03:45 p.m., arriving at 05:55 p.m.\n");
    }
    else if (time >= 1043 && time <= 1222)
    {
        printf("Closest departure time is 07:00 p.m., arriving at 09:20 p.m.\n");
    }
    else if (time >= 1223 || time <= 240)
    {
        printf("Closest departure time is 09:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}
