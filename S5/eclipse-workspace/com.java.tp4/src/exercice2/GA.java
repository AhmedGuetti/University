package exercice2;

public class GA {

	public static void main(String[] args) {
		Population pp = new Population(10,20);
		pp.afficher();
		
		System.out.println("Croiser first and last Chromosome");
		pp.croisement(pp.ch[0], pp.ch[pp.max_ch - 1] , 15);
		pp.mutation(pp.ch[2], 6);
		System.out.println("The new population");
		pp.afficher();
		
		

	}

}
