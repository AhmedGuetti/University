package exercice2;

public class Population {
	Chromosome[] ch = new Chromosome[100];
	int max_ch;
	public Population (int nbrchromo, int nbrgene) {
		for(int i=0;i<nbrchromo;++i)
			ch[i] = new Chromosome(nbrgene);
		max_ch = nbrchromo;
	}
	
	public void afficher() {
		for(int i=0;i<max_ch;++i) {
			ch[i].afficher();
			System.out.println(" ");
		}
	}
	
	public void mutation (Chromosome v, int a) {
		if(v.max < a) 
			System.out.println("The value a is outof range");
		else if(v.gen[a].value == 1)v.gen[a].value = 0;
		else if(v.gen[a].value == 0)v.gen[a].value = 1;
	}
	
	public void croisement (Chromosome u, Chromosome v, int a) {
			int cru = u.max - a;
			int crv = v.max - a;
			if(cru <= 0 || crv <=0) System.out.println("a is bigger than the size of the Chromosome");
			else {
				int[] tmp = new int[a];
				int tt = 0;
				for(int i=cru,j=crv;i<u.max&&j<v.max;++i,++j) {
					tmp[tt++] = u.gen[i].value;
					u.gen[i].value = v.gen[j].value;
				}
				tt = 0;
				
				for(int j=crv;j<v.max;++j)
					v.gen[j].value = tmp[tt++];
			}
	}
	
	
}
