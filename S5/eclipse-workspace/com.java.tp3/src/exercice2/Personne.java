package exercice2;

public class Personne {
	private String nom, prenom;
	private int age;
	
	Personne(String nom, String prenom, int age) {
		this.nom = nom;
		this.prenom = prenom;
		this.age = age;
	}
	
	public void afficher() {
		System.out.println("nom :"+nom+
				" prenom: "+prenom+" age :"+age);
	}
}
