// Railways Ticket Booking System.
#include <conio.h>
#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining Structure
typedef struct mynode {
	char name[20];
	char gen[6];
	int age;
	struct mynode* link;
} Node;

Node* start = NULL;
char source[20], des[20], train[40];
char station[40], cla[40];
int time1, time2, a[55];

class Railways
{
public:
	void details(int);
	int seat(int);
	int cal(int, int, int);
	void bill(int, int);
};

int Railways::cal(int y1, int y2, int h)
{
	int b, c, i, t, r, n;
	cout << "\t\tEnter Your Choice......\n" << endl;;
	cout << "\t\t1. Slepper Class....\n" << endl;;
	cout << "\t\t2. A.C Class.......\n" << endl;;
	scanf("%d", &i);
	switch (i) {
	case 1: {
		strcpy(cla, "Slepper Class");
		b = y2 * h;
		c = b + (b * 0.18);
	} break;
	case 2: {
		cout << "\t\tEnter Your Choice....\n" << endl;;
		cout << "\t\t1. 3A Class....\n" << endl;;
		cout << "\t\t2. 2A Class....\n" << endl;;
		cout << "\t\t3. 1st Class A.C.....\n" << endl;;
		scanf("%d", &n);
		switch (n) {
		case 1: {
			strcpy(cla, "3A Class");
			b = y1 * h;
			c = b + (b * 0.18);
		} break;
		case 2: {
			strcpy(cla, "2A Class");
			b = (y1 + 1000) * h;
			c = b + (b * 0.18);
		} break;
		case 3: {
			strcpy(cla, "1st Class A.C.");
			b = (y1 + 5000) * h;
			c = b + (b * 0.18);
		} break;
		default: {
			cout << "\t\tEnter Right Choice......\n" << endl;;
		}
		}
	} break;
	default: {
		cout << "\t\tEnter Right Choice......\n" << endl;;
	}
	}
	return c;
}


// Function to add details in node
// for each passengers
void add_node(char lol[20], char der[6], int b)
{
	Node *newptr = NULL, *ptr;
	newptr = (Node*)malloc(sizeof(Node));
	strcpy(newptr->name, lol);
	strcpy(newptr->gen, der);
	newptr->age = b;
	newptr->link = NULL;
	if (start == NULL)
		start = newptr;
	else {
		ptr = start;
		while (ptr->link != NULL)
			ptr = ptr->link;
		ptr->link = newptr;
	}
}

// Function for taking details
// of passengers
void Railways::details(int k)
{
	int i, a;
	char val[20], gen[6];
	for (i = 1; i <= k; i++) {
		cout << "Enter The %dth Passenger Name: ", i;
		fflush(stdin);
		gets(val);
		cout << "Enter The %dth Passenger Gender: ", i;
		fflush(stdin);
		gets(gen);
		cout << "Enter The %dth Passenger Age: ", i;
		fflush(stdin);
		scanf("%d", &a);

		// Calling add_node() function
		add_node(val, gen, a);
	}
}


// Function for choosing seats
int Railways::seat(int p)
{
	int i;
	cout << "\t		 -:SEAT MATRIX:-	 \n";
	cout << "\t(U) (M)	 (L) (L) "
		" (U)\n\n";
	cout << "\t01 02	 03\t04	 "
		"05\n\n";
	cout << "\t06 07	 08\t09	 "
		"10\n";
	cout << "\t11 12	 13\t14	 "
		"15\n\n";
	cout << "\t16 17	 18\t19	 "
		"20\n";
	cout << "\t21 22	 23\t24	 "
		"25\n\n";
	cout << "\t26 27	 28\t29	 "
		"30\n";
	cout << "\t31 32	 33\t34	 "
		"35\n\n";
	cout << "\t36 37	 38\t39	 "
		"40\n";
	cout << "\t41 42	 43\t44	 "
		"45\n\n";
	cout << "\t46 47	 48\t49	 "
		"50\n";
	cout << "\t51 52	 53\t54	 "
		"55\n\n";
	cout << "\t56 57	 58\t59	 "
		"60\n";
	cout << "\tEnter Seat Numbers: \n";
	for (i = 0; i < p; i++)
		scanf("%d", &a[i]);
}

// Function for printing receipt
void Railways::bill(int y, int j)
{
	int i;
	Node* ptr = start;
	for (i = 1; i <= j; i++) {
		cout << "\t\t %d st Passenger Name: ", i;
		puts(ptr->name);
		cout << "\t\t%dst Passenger Gender: ", i;
		puts(ptr->gen);
		cout << "\t\t%dst Passenger Age: %d\n\n", i,
			ptr->age;
		ptr = ptr->link;
	}
	cout << "\t\tSource Place: ";
	puts(source);
	cout << "\t\tDestination Place: ";
	puts(des);
	cout << "\t\tThe Boarding Station: ";
	puts(station);
	cout << "\t\tTrain Is: ";
	puts(train);
	cout << "\t\tAllocated Class: ";
	puts(cla);
	cout << "\t\tBoarding Time: %d:%d\n", time1, time2;
	cout << "\t\tTotal Bill Amount: %d\n", y;
	cout << "\t\tAllocated Seats Are: \n";
	for (i = 0; i < j; i++) {
		cout << "\t\t%d ", a[i];
	}
	cout << "\n";
	cout << "\t\t\t\tThank You......\n";
}




// Driver Code
int main()
{
	class Railways railways;
	int i, j, a1, a2, b, c, x = 0, d, e, r;
	char o;
	cout << "Enter Number Of Passengers: " << endl;
	fflush(stdin);
	scanf("%d", &j);

	// Calling details() function with
	// argument number of passenger
	railways.details(j);
	cout << "Enter The Source Place: ";
	fflush(stdin);
	gets(source);
	cout << "Enter The Destination Place: ";
	gets(des);
	cout << "\t\tThe Following Trains "
		"Are Available.....\n";
	cout << "\t\t1. Rajdhani Express.."
		".......10:00 "
		"a.m........Sealdah Station\n";
	cout << "\t\t2. Satabdi Express..."
		".......05:00 "
		"p.m........Howrah Station\n";
	cout << "\t\t3. Humsafar Express..."
		".......11:00 "
		"p.m........Kolkata Chitpur"
		" Station\n";
	cout << "\t\t4. Garib-Rath Express"
		".........05:00 "
		"p.m........Sealdah Station\n";
	cout << "\t\t5. Duronto Express..."
		".........07:00 "
		"a.m.........Santraganchi"
		"Station\n";
	scanf("%d", &i);
	do {
		switch (i) {
		case 1: {
			strcpy(train,
				"Rajdhani Express");
			strcpy(station,
				"Sealdah Station");
			time1 = 10;
			time2 = 00;
			a1 = 2099;
			a2 = 1560;

			// Calling cal() function
			// with the three argument
			// and return value
			d = railways.cal(a1, a2, j);
			cout << "Total Bill Amount:"
				" %d\n",
				d;
		}; break;
		case 2: {
			strcpy(train,
				"Satabdi Express");
			strcpy(station,
				"Howrah Station");
			time1 = 05;
			time2 = 00;
			a1 = 1801;
			a2 = 981;

			// Calling cal() function with
			// three argument & return value
			d = railways.cal(a1, a2, j);
			cout << "Total Bill Amount:"
				"%d\n",
				d;
		}; break;
		case 3: {
			strcpy(train,
				"Humsafar Express");
			strcpy(station,
				"Kolkata Chitpur Express");
			time1 = 11;
			time2 = 00;
			a1 = 2199;
			a2 = 1780;

			// Calling cal() function with
			// three argument & return value
			d = railways.cal(a1, a2, j);
			cout << "Total Bill Amount: %d\n", d;
		}; break;
		case 4: {
			strcpy(train, "Garib-Rath Express");
			strcpy(station, "Sealdah Station");
			time1 = 05;
			time2 = 00;
			a1 = 1759;
			a2 = 1200;

			// Calling cal() function with
			// three argument & return value
			d = railways.cal(a1, a2, j);
			cout << "Total Bill Amount: %d\n", d;
		}; break;
		case 5: {
			strcpy(train, "Duronto Express");
			strcpy(station, "Santraganchi Station");
			time1 = 07;
			time2 = 00;
			a1 = 2205;
			a2 = 1905;

			// Calling cal() function with
			// three argument & return value
			d = railways.cal(a1, a2, j);
			cout << "Total Bill Amount: %d\n", d;
		}; break;
		default:
			cout << "Enter Correct choice.....\n";
			x = 1;
			break;
		}
	} while (x);
	cout << "Now Book Your Seats......\n";

	// Calling seat() function with number
	// of passenger
	railways.seat(j);

	// Calling bill() function with
	// the number of passenger
	// and amount argument
	railways.bill(d, j);
}

// Function for calculation of amount
