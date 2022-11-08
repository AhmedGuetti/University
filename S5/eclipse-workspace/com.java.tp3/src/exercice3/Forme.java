package exercice3;

public class Forme {

	public static void main(String[] args) {
		FormeFigure[] fm = new FormeFigure[2];
		//fm[0] = new FormeFigure(12,13);
		fm[0] = new Rectangle(0,0,12,13);
		fm[1] = new Cercle(-1,12,"Cercle",40);
		for(int i=0;i < fm.length;++i) {
			fm[i].afficher();
		}
	}
}
