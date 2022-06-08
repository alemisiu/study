public class Game {
    CellValue a1, a2, a3, b1, b2, b3, c1, c2, c3;

    void printStatus() {
        String ca1 = " ";
        if (a1 == CellValue.X)
            ca1 = "x";
        if (a1 == CellValue.O)
            ca1 = "o";
        String ca2 = " ";
        if (a2 == CellValue.X)
            ca2 = "x";
        if (a2 == CellValue.O)
            ca2 = "o";
        System.out.println(ca1 + "," + ca2 + ",0");
        System.out.println("0,0,0");
        System.out.println("x,x,x");
    }

}

enum CellValue {
    X,
    O
    
}
