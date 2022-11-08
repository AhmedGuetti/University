package exercice1;


class MembreUniversite {
	private String nom;
	private int dateNaissance;
	
	MembreUniversite(String nom, int dateNaissance)
	{
		this.nom = nom;
		this.dateNaissance = dateNaissance;
	}
	public int calculerAge() {
		
		return 2023-dateNaissance;
	}
	
	public void Afficher () {
		System.out.println("nom: "+this.nom+"\ndate de naissance "+this.dateNaissance );
	}
}	


class Fonctionnaire extends MembreUniversite {
	private int dateEntree;
	
	Fonctionnaire (String nom, int dateNaissance, int dateEntree)
	{
		super (nom, dateNaissance);
		this.dateEntree = dateEntree;
		
	}
	public void Afficher () {
		super.Afficher();
		System.out.println("date Entree : " + this.dateEntree);
	}
}


class Etudiant extends MembreUniversite {
	private int anneScolaire;
	
	Etudiant(String nom, int dateNaissance, int anneScolaire){
		super (nom, dateNaissance);
		this.anneScolaire = anneScolaire;
	}
	
	public void Afficher () {
		super.Afficher();
		System.out.println("anne scolaire : " + this.anneScolaire);
	}
}


class Professeur extends Fonctionnaire {
	private String grade;
	
	Professeur(String nom, int dateNaissance, int dateEntree, String grade) {
		super (nom, dateNaissance,dateEntree);
		this.grade = grade;
	}
	
	public void Afficher () {
		super.Afficher();
		System.out.println("grade : " + this.grade);
	}
}


class Secretaire extends Fonctionnaire {
	Secretaire(String nom, int dateNaissance, int dateEntree){
		super (nom, dateNaissance,dateEntree);
	}
}

public class EX1 {

	public static void main(String[] args) {
		Professeur p = new Professeur("Moha", 2002, 2008, "4");
		Secretaire s = new Secretaire("Jone", 1980, 2000);
		Etudiant e = new Etudiant("Kane",2004,2022);
		Fonctionnaire f = new Fonctionnaire("Carl", 1917, 1940);
		MembreUniversite mm = new MembreUniversite("Sarah", 1999);
		
		
		System.out.println(":::: PROFESSEUR :::: ");
		p.Afficher();
		int res = p.calculerAge();
		System.out.println("the age of Professeure P is "+ res);
		
		System.out.println(":::: SECRETAIRE :::: ");
		s.Afficher();
		res = s.calculerAge();
		System.out.println("the age of Secretaire is "+ res);
		
		System.out.println(":::: ETUDIANT :::: ");
		e.Afficher();
		res = s.calculerAge();
		System.out.println("the age of Etudiant is "+ res);
		
		System.out.println(":::: FONCTIONNAIRE :::: ");
		f.Afficher();
		res = f.calculerAge();
		System.out.println("the age of Fonctionnaire is "+ res);
		
		System.out.println(":::: MembreUniversite :::: ");
		mm.Afficher();
		res = mm.calculerAge();
		System.out.println("the age of MembreUniversite is "+ res);
		
	}

}
