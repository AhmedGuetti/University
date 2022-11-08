package exercice1;

public class e1 {

	public static void main(String[] args) {
		int[][] s = new int [4][4];
		for(int i=0;i<4;++i) {
			for(int j=0;j<4;++j) {
				if(i == j)
					s[i][j] = 1;
				else 
					s[i][j] = 0;
			}
		}
		for(int i=0;i<4;++i) {
			for(int j=0;j<4;++j) {
				System.out.print(+s[i][j]);
			}
			System.out.println(" ");
		}
	}
}
