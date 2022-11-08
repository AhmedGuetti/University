package exercice4;

public class Personne {
	protected String name;
	
	Personne(String name) {
		this.name = name;
	}
	
	public void afficher () {
		System.out.println("name : "+name);
	}
}
