#include <stdio.h>

void whatDay(int Y);

int main()
{
	int Y;

	printf("Enter a Year: ");
	scanf("%d", &Y);

	if (Y >= 1)
	{
		whatDay(Y);
	}
	else
	{
		printf("Invalid input. Please enter a positive year.\n");
	}

	return 0;
}

void whatDay(int Y)
{
	int leapYears = 0;
	int i;

	// Count leap years between 1 and Y
	for (i = 1; i < Y; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		{
			leapYears++;
		}
	}

	int days = (Y + leapYears - 1) % 7;

	days += 2;
	days %= 7;

	switch (days)
	{
	case 0:
		printf("Saturday\n");
		break;
	case 1:
		printf("Sunday\n");
		break;
	case 2:
		printf("Monday\n");
		break;
	case 3:
		printf("Tuesday\n");
		break;
	case 4:
		printf("Wednesday\n");
		break;
	case 5:
		printf("Thursday\n");
		break;
	case 6:
		printf("Friday\n");
		break;
	default:
		printf("Invalid day\n");
	}
}
