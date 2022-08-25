#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef unsigned short u_short;


void clear() {
#ifdef __unix__                    /* __unix__ is usually defined by compilers targeting Unix systems */
	system("clear");

#elif defined(_WIN32) || defined(WIN32)     /* _Win32 is usually defined by compilers targeting 32 or   64 bit Windows systems */
	system("cls");
#endif
}

enum pritoraty {
	ADMIN,
	USER
};
typedef enum pritoraty pritoraty;

struct User {
	unsigned int id;
	char* name;
	char* email;
	u_short age;
	char* password;
	pritoraty type;
	struct User* next;
};

typedef struct User User;


struct UserList {
	User* head;
	User* tail;
	unsigned int size;

};

typedef struct UserList UserList;



char* type_char(pritoraty type) {
	char str[10];
	if (type == ADMIN) {
		strcpy(str, "Admin");
	}
	else if (type == USER) {
		strcpy(str, "User");
	}
	return str;
}

User* makeUser(char* name, char* email, u_short age, char* password, pritoraty type) {
	// sizeof(u) = 4byte
	User* u = (User*)malloc(sizeof(User));
	if (!u) {
		fprintf(stderr, "ERROR: USER NOT INITIALIZED");
		return NULL;
	}
	u->id = 0;
	u->name = (char*)malloc(100 * sizeof(char));
	u->name = name;
	u->email = (char*)malloc(100 * sizeof(char));
	u->email = email;
	u->age = age;

	u->password = (char*)malloc(100 * sizeof(char));
	u->password = password;
	u->type = type;
	/*
		User u; sizeof(u) = 18 bytres
		u.name = name;

	*/
	u->next = NULL;
	return u;
}




void deleteLastUser(UserList* uls) {
	User* temp = uls->head;
	uls->head = uls->head->next;
	free(temp);
}


void open_account_menu(UserList* uls) {
	printf("=================== open account  =========================\n");
	printf("1) name : %s                                               \n", uls->head->name);
	printf("2) email : %s                                              \n", uls->head->email);
	printf("3) age : %d                                                \n", uls->head->age);
	printf("4) password : %s                                           \n", uls->head->password);
	printf("5) type :                                                  \n");
	printf("===========================================================\n");
	printf("are you sure you want to open acount with this proprties[Y/n]\n");
	scanf("%c");
	char ap;
	scanf("%c", &ap);
	if (ap == 'Y' || ap == 'y') {

	}
	else if (ap == 'N' || ap == 'n') {
		deleteLastUser(uls);
	}

}



UserList* initList(char* name, char* pass) {
	UserList* uls = (UserList*)malloc(sizeof(UserList));
	if (!uls) {
		fprintf(stderr, "ERROR: USER_LIST NOT INITIALIZED");
		return NULL;
	}
	uls->head = NULL;
	uls->tail = NULL;
	uls->size = 0;
	User* admin_default = makeUser(name, "email@example.com", 100, pass, ADMIN);
	admin_default->next = uls->head;
	uls->head = admin_default;
	uls->size++;
}

User* open_account(UserList* uls) {
	User* u = (User*)malloc(sizeof(User));
	if (!u) {
		fprintf(stderr, "ERROR: USER NOT INITIALIZED");
		return NULL;
	}
	u->id = uls->size + 1;
	u->name = (char*)malloc(100 * sizeof(char));
	u->email = (char*)malloc(100 * sizeof(char));
	u->password = (char*)malloc(100 * sizeof(char));
	printf("Name : "); scanf("%s", u->name);
	printf("email : "); scanf("%s", u->email);
	printf("age : "); scanf("%hd", &u->age);
	printf("password : "); scanf("%s", u->password);
	int r;
	printf("(0)ADMIN \t(1)USER"); scanf("%d", &r);
	if (r = 0) { u->type = ADMIN; }
	else u->type = USER;


	u->next = uls->head;
	uls->head = u;
	uls->size++;


	return u;
}

User* authon(UserList* uls, char* name, char* password) {
	User* temp = uls->head;
	while (temp) {
		if (strcmp(temp->name, name) == 0 && strcmp(temp->password, password) == 0) {
			return temp;
		}
		temp = temp->next;
	}
	return NULL;
}



void show_users_menu(UserList* uls) {
	User* temp = uls->head;
	while (temp != NULL) {
		printf("%s \n", temp->name);
		temp = temp->next;
	}
	system("pause");
}


void account_info(User* u) {
	printf("=================== open account  =========================\n");
	printf("name : %s                                              =\n", u->name);
	printf("email : %s                                             =\n", u->email);
	printf("age : %d                                               =\n", u->age);
	printf("password : %s                                          =\n", u->password);
	printf("type : %s                                              =\n", type_char(u->type));
	printf("===========================================================\n");
	system("pause");

}


void adim_dashboard(UserList* uls, User* u) {
	int e = 0;
	while (!e) {
		printf("=================== Dashboard  ============================\n");
		printf("(1) open acount                                            =\n");
		printf("(2) loggout                                                 =\n");
		printf("(3) change password                                        =\n");
		printf("(4) show accounts                                          =\n");
		printf("(5) account info                                          =\n");
		printf("(6) go back							  =\n");
		printf("===========================================================\n");
		int ch; scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			clear();
			open_account(uls);
			break;
		case 2:
			return;
			break;
		case 3:
			printf("new password : "); scanf("%s", u->password);
			break;
		case 4:
			clear();
			show_users_menu(uls);
			break;
		case 5:
			clear();
			account_info(u);
			break;
		case 6:
			e = 1;
			break;
		default:
			printf("enter a valid number");
			break;
		}
	}
}


void user_dashboard(UserList* uls, User* u) {
	int e = 0;
	while (!e) {
		printf("=================== Dashboard  ============================\n");
		printf("(1) loggout                                                \n");
		printf("(2) change password                                        \n");
		printf("(3) account info                                           \n");
		printf("(4) go back							                       \n");
		printf("===========================================================\n");
		int ch; scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			return;
			break;
		case 2:
			printf("new password : "); scanf("%s", u->password);
			break;
		case 3:
			clear();
			account_info(u);
			break;
		case 4:
			e = 1;
			break;
		default:
			e = 1;
			break;
		}
	}
}

void show_loggin_menu(UserList* uls) {
	char* name = (char*)malloc(100 * sizeof(char));
	char* password = (char*)malloc(100 * sizeof(char));
	int exits = 0;
	while (!exits)
	{
		clear();
		printf("===================  LOGGIN  ==============================\n");
		printf("(1) loggin                                                  \n");
		printf("(2) forget password                                         \n");
		printf("(3) forget email                                            \n");
		printf("(4) get back							                    \n");
		printf("============================================================\n");
		int choice;
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			clear();
			printf("Name : "); scanf("%s", name);
			printf("password : "); scanf("%s", password);
			User* l = authon(uls, name, password);
			if (l == NULL) {
				clear();
				printf("account doesn't existe\n");
				printf("===================  LOGGIN  ==============================\n");
				printf("(1) reloggin                                               \n");
				printf("(2) exit                                                   \n");
				printf("============================================================\n");
				int choice2;
				scanf("%d", &choice2);
				if (choice == 1) {
					exits = 0;
				}
				else if (choice2 == 2) {
					return NULL;
				}
				else {
					fprintf(stderr, "ERROR : NOT A VALID INPUT ");
					exit(0);
				}

			}
			else {
				if (l->type == ADMIN) {
					adim_dashboard(uls, l);
				}
				else if (l->type == USER) {
					user_dashboard(uls, l);
				}
				else {
					printf("ERROR: DONE RIGHT HERE\n");
				}

			}
			break;
		case 2:
			clear();
			printf("Not now please let me thing how to solve your problem");

			break;
		case 3:
			clear();
			printf("Not now please let me thing how to solve your problem");

			break;
		case 4:
			exits = 1;
			break;

		default:
			exits = 1;
			break;
		}
	}
}

int main() {
	UserList* list1 = initList("root", "123");
	while (1) {
		int status;
		clear();
		printf("=================== Dashboard  ============================\n");
		printf("1) open acount                                             \n");
		printf("2) loggin                                                  \n");
		printf("3) exit													   \n");
		printf("===========================================================\n");
		scanf("%i", &status);
		switch (status)
		{
		case 1:
			clear();
			open_account(list1);
			clear();
			open_account_menu(list1);
			break;
		case 2:
			show_loggin_menu(list1);
			break;
		case 3:
			goto end;
			break;

		default:
			goto end;
			break;
		}
	}


end:;
	return 0;
}
