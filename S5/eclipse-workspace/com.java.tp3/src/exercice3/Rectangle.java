package exercice3;

public class Rectangle extends FormeFigure {
	private int width, height;
	Rectangle(int x, int y,int width, int height) {
		super(x,y,"Recangle");
		this.width = width;
		this.height = height;
	}
	public void afficher () {
		super.afficher();
		//System.out.println("[RECTANGELE] : center("+super.x+", "+super.y+"), width = "+width+", Height = " + height);
		System.out.println("width = "+width+", Height = " + height);
	}
}
