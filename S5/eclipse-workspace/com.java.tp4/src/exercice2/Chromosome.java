package exercice2;
// import java.util.*;

public class Chromosome {
	Gene[] gen = new Gene[100];
	int max;
	public Chromosome (int nbr) {
		for(int i=0;i<nbr;++i) {
			gen[i] = new Gene();
		}
		max = nbr;
	}
	
	public void afficher () {
		for(int i=0;i<max;++i) {
			System.out.print(gen[i].value);
		}
	}
	
	
	
}
