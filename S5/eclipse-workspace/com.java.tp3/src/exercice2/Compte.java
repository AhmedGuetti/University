package exercice2;

public class Compte {
	private int numero;
	private double solde;
	
	Compte(int numero, double solde) {
		this.numero = numero;
		this.solde = solde;
	}
	
	public void deposer(double s) {
		this.solde += s;
	}
	
	public void retirer(double s) {
		if(solde > s)
			this.solde -= s;	
		else 
			System.out.println("Not enough momney in your account");
		
	}
	/*
	 * We give the same name affiher() insted of info() in 2 case :
	 * 	1- surcharge
	 *  2- redefinition
	 * */
	public void info() {
		System.out.println("compte numero : " + 
	numero + ",Solde :"+solde+"Dhs");
	}
}
