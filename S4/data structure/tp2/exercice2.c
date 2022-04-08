#include <stdio.h>
#include <stdlib.h>


struct Monome {
	float coeff;
	unsigned int exp;
	struct Monome* suivant;
};
typedef struct Monome Monome;


struct Polynome {
	Monome* debut;
	Monome* fin;

};
typedef struct Polynome Polynome;


void ajouterMonome(Polynome *p, float coeff, unsigned int exp) {
	Monome* m = (Monome*)malloc(sizeof(Monome));
	m->coeff = coeff;
	m->exp = exp;
	m->suivant = NULL;
	
	if (p->debut == NULL) {
		p->debut = m;
		p->fin = m;
		return;
	}

	if (p->debut->exp < exp) {
		m->suivant = p->debut;
		p->debut = m;
		return;
	}


	Monome* cour = p->debut;
	Monome* temp = cour;
	while (cour->exp > exp && cour != NULL) {
		if (cour->suivant == NULL) {
			p->fin->suivant = m;
			p->fin = m;
			return;
		}
		else if (cour->exp == exp) {
			cour->suivant->coeff += coeff;
			return;
		}
		temp = cour;
		cour = cour->suivant;
	}
	m->suivant = temp->suivant;
	temp->suivant = m;
}

void affiche(Polynome* p) {
	Monome* cour = p->debut;
	while (cour != NULL) {
		printf("%f \t", cour->coeff);
		cour = cour->suivant;
	}
	printf("\n");
}


int main() {
	Polynome *p = (Polynome*)malloc(sizeof(Polynome));
	p->debut = NULL;
	p->fin = NULL;
	ajouterMonome(p, 1.5f, 3);
	ajouterMonome(p, 23, 23);
	ajouterMonome(p, 24, 70);
	ajouterMonome(p, 132, 2);
	ajouterMonome(p, 100, 2);
	ajouterMonome(p, 4, 34);
	ajouterMonome(p, 54, 1);

	affiche(p);



	return 0;
}