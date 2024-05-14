class Circulo {
    float radio;

    Circulo(float r) {
        radio = r;
    }

    float getRadio() {
        return radio;
    }
}

class Main {
    // Método estático para calcular el área del círculo
    static float calcularArea(Circulo circulo) {
        return (float) (Math.PI * circulo.radio * circulo.radio);
    }

    public static void main(String[] args) {
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        char opc = 'S';

        while (opc == 'S' || opc == 's') {
            System.out.print("INGRESE EL RADIO DEL CÍRCULO: ");
            float radio = scanner.nextFloat();

            Circulo circulo = new Circulo(radio);
            System.out.println("El área del círculo es: " + calcularArea(circulo));

            System.out.print("¿Desea continuar? S/N: ");
            opc = scanner.next().charAt(0);
        }
        scanner.close();
    }
}

