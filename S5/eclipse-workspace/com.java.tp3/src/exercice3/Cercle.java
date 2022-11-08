package exercice3;

public class Cercle extends FormeFigure{
	private int rayon;
	Cercle(int x, int y, String a,int rayon){
		super(x,y,a);
		this.rayon = rayon;
	}
	
	public void afficher () {
		super.afficher();
		//System.out.println("[CERCLE] : centre("+super.x+", "+super.y+ "), rayon = "+rayon);
		System.out.println("rayon : "+rayon);
	}
	
}
