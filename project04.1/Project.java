import java.math.BigDecimal;
import java.math.RoundingMode;

public class Project {

    /**
     * Mając wartości funkcji 𝑓(𝑥) = 𝑙𝑔2(𝑥 + 2) w postaci tabeli:
     * 
     * @param x
     * @return
     */
    static public BigDecimal f(double x) {
        double resultAsDouble = (Math.log(x + 2) / Math.log(2));
        BigDecimal result = new BigDecimal(resultAsDouble).setScale(2, RoundingMode.HALF_UP);
        return result;
    }

    // function to interpolate the given
    // data points using Lagrange's formula
    // xi corresponds to the new data point
    // whose value is to be obtained n
    // represents the number of known data points
    static BigDecimal interpolate(Data f[], double xi) {
        int n = f.length;
        double result = 0; // Initialize result

        for (int i = 0; i < n; i++) {
            // Compute individual terms of above formula
            double term = f[i].y;
            for (int j = 0; j < n; j++) {
                if (j != i)
                    term = term * (xi - f[j].x) / (f[i].x - f[j].x);
            }

            // Add current term to result
            result += term;
        }
        BigDecimal resultAsBigDecimal = new BigDecimal(result).setScale(2, RoundingMode.HALF_UP);
        return resultAsBigDecimal;
    }

}

// 1losowe i sortowanie
// 2 losowanie i sortowanie(zapisac do pliku)
// 3 dzialania + albo mnozenie i zapiasc do 3 pliku
