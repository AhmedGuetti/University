package exercice4;

public class Plombier extends Personne{
	Plombier(String name){
		super(name);
	}
	
	public void afficher () {	
		System.out.print("[Plombier] : ");
		super.afficher();
	}
}
