class Vector2D { 
    private double x; 
    private double y; 

    public Vector2D(double x_val, double y_val) { 
        x = x_val; 
        y = y_val; 
    } 
    
    public double getX() { 
        return x; 
    } 

    public double getY() { 
        return y; 
    } 

    public Vector2D add(Vector2D vec) { 
        return new Vector2D(x + vec.getX(), y + vec.getY()); 
    } 

    public Vector2D subtract(Vector2D vec) { 
        return new Vector2D(x - vec.getX(), y - vec.getY()); 
    } 

    public String toString() { 
        return "(" + x + ", " + y + ")"; 
    } 
} 

public class Main { 
    public static void main(String[] args) { 
        Vector2D v1 = new Vector2D(3.0, 4.0); 
        Vector2D v2 = new Vector2D(1.0, 2.0); 

        Vector2D suma = v1.add(v2); 
        Vector2D resta = v1.subtract(v2); 

        System.out.println("Vector1: " + v1); 
        System.out.println("Vector2: " + v2); 
        System.out.println("Suma: " + suma); 
        System.out.println("Resta: " + resta); 
    } 

} 