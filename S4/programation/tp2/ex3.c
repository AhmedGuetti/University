#include <stdio.h>
#include <stdlib.h>

int iHeures,iMinutes,iSecondes;


void affiche_heure(){
	printf("il est %d heure(s) %d minutes(s) %d seconde(s) \n",iHeures,iMinutes,iSecondes);
}

void saisir_heure(int iH, int iM, int iS){
	iHeures = iH;
	iMinutes = iM;
	iSecondes = iS;
}

void tick(){
	if(iSecondes < 60){
		++iSecondes;
		iSecondes = iSecondes % 60;
		if(iSecondes == 0){
			++iMinutes;
			iMinutes = iMinutes % 60;
			if(iMinutes == 0){
				++iHeures;
				iHeures = iHeures % 60;
			}
		}

	}
}

int main(){
	saisir_heure(0,1,59);
	

	while(1){
		tick();
		affiche_heure();
		sleep(1);
		system("cls");
	}	
	return 0;
}
