package exercice2;

public class Client extends Personne{
	public Compte compte;
	
	Client(String nom, String prenom, int age, Compte comp) {
		super(nom, prenom, age);
		this.compte = comp;
	}
	
	public void afficher () {
		super.afficher();
		compte.info();
	}
}
