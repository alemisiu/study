class Program {
    public static void main(String[] args) {
        double xp = 0;
        double xk = 1;
        double Fp = integralFunction(xp);
        double Fk = integralFunction(xk);
        double S = Fk - Fp;

        int n = 10;
        while (true) {
            double calka = 0;
            double s = 0;
            double deltax = (xk - xp) / (double) n;
            for (int i = 1; i <= n; i++) {
                double xi = xp + deltax * i;
                s += func(xi - deltax / 20);
                calka += func(xi);
            }
            s += func(xk - deltax / 2);
            calka = (deltax / 6) * (func(xp) + func(xk) + 2 * calka + 4 * s);

            double diff = Math.abs(S - calka);

            if (diff < 0.00001 || n % 100 == 0) {
                System.out.println("wartosc matematyczna calki " + S);
                System.out.println("wartosc przyblizona  calki " + calka);
                System.out.println("Roznica wynosi" + diff + " dla n=" + n);
                System.out.println("");
            }

            if (diff < 0.00001) {
                break;
            }

            n = n + 10;
        }
    }

    static double integralFunction(double x) {
        double result = Math.tan(x);
        return result;
    }

    static double func(double x) {
        return 1 / (Math.cos(x) * Math.cos(x));

    }

}