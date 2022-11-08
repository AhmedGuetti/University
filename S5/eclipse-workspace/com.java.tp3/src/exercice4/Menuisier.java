package exercice4;

public class Menuisier extends Personne{
	Menuisier(String name){
		super(name);
	}
	
	public void afficher () {
		System.out.print("[Menuisier] : ");
		super.afficher();
	}
}
