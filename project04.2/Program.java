import java.math.BigDecimal;
import java.math.RoundingMode;

class Program {

    public static void main(String[] args) {
        double a = Math.PI / 2;
        double b = Math.PI;

        double x0 = a;
        double x1 = b;

        while (true) {

            double y0 = f(x0);
            double y1 = f(x1);

            double x2 = (y1 * x0 - y0 * x1) / (y1 - y0);
            double y2 = f(x2);

            if (Math.abs(y2) <= 0.001) {
                System.out.print("the answer is :");
                System.out.println(x2);
                break;
            }

            if (y2 < 0) {
                if (y0 > 0)
                    x0 = x0;
                if (y1 > 0)
                    x0 = x1;
            }

            if (y2 > 0) {
                if (y0 > 0)
                    x0 = x0;
                if (y1 > 0)
                    x0 = x1;

            }

            x1 = x2;

        }
    }

    static double f(double x) {
        double sinX = Math.sin(x);
        double result = sinX - 0.5 * x;
        return result;
    }
}