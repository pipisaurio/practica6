import java.text.DecimalFormat;

class Banco {
    // Atributo estático para almacenar la tasa de interés
    static double tasaInteres;

    static void establecerTasaInteres(double tasa) {
        // Método estático para cambiar la tasa de interés
        tasaInteres = tasa;
    }
}

class CuentaBancaria {
    private double saldo;

    public CuentaBancaria(double saldoInicial) {
        saldo = saldoInicial;
    }

    double obtenerSaldo() {
        return saldo;
    }

    double depositar(double monto) {
        saldo += monto;
        return saldo;
    }

    boolean retirar(double monto) {
        if (monto > saldo) {
            System.out.println("Fondos insuficientes");
            return false;
        }
        saldo -= monto;
        return true;
    }

    double calcularInteres() {
        // Usa la tasa de interés estática del Banco
        return saldo * Banco.tasaInteres;
    }
}

public class Main {
    public static void main(String[] args) {
        // Crea una cuenta bancaria con un saldo inicial de S./1000
        CuentaBancaria cuenta = new CuentaBancaria(1000);

        // Deposita S./500 en la cuenta
        cuenta.depositar(500);
        System.out.println("Nuevo saldo: S./" + cuenta.obtenerSaldo());

        // Retira S./200 de la cuenta
        if (cuenta.retirar(200)) {
            System.out.println("Nuevo saldo: S./" + cuenta.obtenerSaldo());
        }

        // Calcula el interés ganado por la cuenta
        double interes = cuenta.calcularInteres();
        DecimalFormat df = new DecimalFormat("#.##");
        System.out.println("Interés ganado: S./" + df.format(interes));

        // Cambia la tasa de interés para todas las cuentas bancarias
        Banco.establecerTasaInteres(0.07);

        // Calcula el nuevo interés ganado por la cuenta
        double nuevoInteres = cuenta.calcularInteres();
        System.out.println("Nuevo interés ganado: S./" + df.format(nuevoInteres));
    }
}
