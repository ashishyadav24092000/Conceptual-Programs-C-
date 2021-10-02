#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	system("cls");
	int month_no;
	cout<<"\nEnter the month number whose number of days is required: \n";
	cin>>month_no;
	cout<<"\n<--------------------------------------------------------------------------------->\n";
	cout<<"\n             Congrats!! you are entering into the specified month                  \n";	
	cout<<"\n<--------------------------------------------------------------------------------->\n";
	switch(month_no)
	{
		case 1:
			cout<<"\nHey!! amigo it's the Month of January...............\n";
			cout<<"\nThis month has 31 days in it........................\n";
			break;
		case 2:
			cout<<"\nHey!! amigo it's the Month of February...............\n";
			cout<<"\nThis month has 28/29 days in it........................\n";
			break;
		case 3:
			cout<<"\nHey!! amigo it's the Month of March...............\n";
			cout<<"\nThis month has 31 days in it........................\n";
			break;
		case 4:
			cout<<"\nHey!! amigo it's the Month of April...............\n";
			cout<<"\nThis month has 30 days in it........................\n";
			break;
		case 5:
			cout<<"\nHey!! amigo it's the Month of May...............\n";
			cout<<"\nThis month has 31 days in it........................\n";
			break;
		case 6:
			cout<<"\nHey!! amigo it's the Month of June...............\n";
			cout<<"\nThis month has 30 days in it........................\n";
			break;
		case 7:
			cout<<"\nHey!! amigo it's the Month of July...............\n";
			cout<<"\nThis month has 31 days in it........................\n";
			break;
		case 8:
			cout<<"\nHey!! amigo it's the Month of August...............\n";
			cout<<"\nThis month has 31 days in it........................\n";
			break;
		case 9:
			cout<<"\nHey!! amigo it's the Month of September...............\n";
			cout<<"\nThis month has 30 days in it........................\n";
			break;
		case 10:
			cout<<"\nHey!! amigo it's the Month of October...............\n";
			cout<<"\nThis month has 31 days in it........................\n";
			break;
		case 11:
			cout<<"\nHey!! amigo it's the Month of November...............\n";
			cout<<"\nThis month has 30 days in it........................\n";
			break;
		case 12:
			cout<<"\nHey!! amigo it's the Month of December...............\n";
			cout<<"\nThis month has 31 days in it........................\n";
			break;
		default:
			cout<<"\nHey!! amigo sorry But unfortunately you have entered a month's number from 4th dimension.............. \n";
		}
		//system("cls");
}
