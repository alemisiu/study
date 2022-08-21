import java.math.BigDecimal;

class Program {
    public static void main(String[] args) {
        // creating an array of 4 known data points
        Data interpolationPoints[] = {
                new Data(-1.5, -1),
                new Data(-1, 0),
                new Data(0, 1),
                new Data(1, 1.58),
                new Data(3, 2.32),
                new Data(6, 3) };
        // System.out.print("Value of f(3) is : " +
        // Project.interpolate(interpolationPoints, 0));

        for (double x = -1.5; x <= 6; x = x + 0.5) {
            BigDecimal y1 = Project.f(x);
            BigDecimal y2 = Project.interpolate(interpolationPoints, x);
            System.out.print("x: " + x +", ");
            System.out.print("flog="+y1 + ", ");
            System.out.println("finter="+y2);
        }
    }
}
// lagrange code site technique
// https://www.geeksforgeeks.org/lagranges-interpolation/