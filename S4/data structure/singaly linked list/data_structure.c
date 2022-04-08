#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"



struct date {
	unsigned short day;
	unsigned short month;
	unsigned short year;
};
typedef struct date date;

short isDate(const char* date) {
	int size = strlen(date);
	int c = 1;
	for (int i = 0; i <= size; i++)
		if (date[i] == '/') c++;
	return (c == 3) ? 1 : 0;
}


date parseDate(const char* date_string) {

	if (isDate(date_string) == 0) {
		fprintf(stderr, "ERROR : date is not correct");
		return;
	}

	date date_parsed;
	int size = strlen(date_string);
	int counter = 0;
	char temp[5];
	int start = 0;
	for (int i = 0; i <= size; i++){
		if (date_string[i] == '/' || date_string[i] == '\0') {
			if (i - start > 4) fprintf(stderr, "ERROR : date is not correct");
			strncpy(temp,date_string+start,i-start);
			counter++;
			start = i + 1;
		}
		switch (counter){
		case 1:
			date_parsed.day = (unsigned short) atoi(temp);
			break;
		case 2:
			date_parsed.month = (unsigned short) atoi(temp);
			break;
		case 3:
			date_parsed.year = (unsigned short) atoi(temp);
			break;
		default:
			break;
		}
	}

	return date_parsed;
}


/*
a*5* ==== aaaaa
a. ==== ab ac aa ad ag ...
a.* ==== strat with an a
*/






void Dateis(date d) {
	printf("day : %d\n",d.day);
	printf("month : %d\n", d.month);
	printf("year : %d\n", d.year);

}

int main() {

	//printf("Hello world\n");
	date today = parseDate("3/24/2022");
	Dateis(today);


	List ls1 = initList();

	ls1.shift(&ls1, 10);
	ls1.shift(&ls1, 20);
	ls1.shift(&ls1, 30);
	ls1.shift(&ls1, 40);
	ls1.push(&ls1, 122);
	ls1.push(&ls1, 500);
	ls1.printL(&ls1);

	ls1._inverse(&ls1);
	ls1.printL(&ls1);


	int index = ls1._find(&ls1, 5060);
	if (!index) {
		printf("element not found in the List\n");
	}
	else {
		printf("element found at position %d\n",index);
	}


	ls1._add(&ls1, 5000, 3);
	ls1.printL(&ls1);

	printf("the 5th element is : %d\n", ls1._at(&ls1, 5));

	ls1._remove(&ls1, 4);
	ls1.printL(&ls1);


	ls1.unshift(&ls1);
	ls1.printL(&ls1);

	ls1.unshift(&ls1);
	ls1.printL(&ls1);

	ls1.pop(&ls1);
	ls1.printL(&ls1);
	
	ls1.pop(&ls1);
	ls1.printL(&ls1);




	



	return 0;
}