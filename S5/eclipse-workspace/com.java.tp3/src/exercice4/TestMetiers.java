package exercice4;

import exercice4.Personne;

public class TestMetiers {

	public static void main(String[] args) {
		Personne[] personnes = new Personne[3];
		personnes[0] = new Menuisier("Ahmed");
		personnes[1] = new Plombier("Sami");
		personnes[2] = new Menuisier("Idriss");
		for(int i=0;i < personnes.length;++i) {
			personnes[i].afficher();
		}
	}

}
