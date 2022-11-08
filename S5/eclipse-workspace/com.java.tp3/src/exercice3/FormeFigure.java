package exercice3;

public class FormeFigure {
	private int x,y;
	private String a;
	FormeFigure(int x, int y, String a){
		this.x = x;
		this.y = y;
		this.a = a;
	}
	public void afficher() {
		System.out.println("Je suis "+this.a+" de centre "+x+" et "+y);
	}
}
