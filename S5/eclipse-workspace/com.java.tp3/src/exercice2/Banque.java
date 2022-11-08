package exercice2;

public class Banque {

	public static void main(String[] args) {
		Compte compte = new Compte(12345,10000);
		Client cl = new Client("Ahmed","Guetti",20,compte);
		cl.afficher();
		compte.deposer(1000);
		cl.afficher();
		compte.retirer(1500);
		cl.afficher();
	}

}
