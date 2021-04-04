package testcircle;
public class TestCircle {
    public static void main(String[] args) {
        Circle mycircle = new Circle(5.0);
        System.out.println("The area of the circle of radius "+mycircle.radius+" is "+mycircle.getArea());
        Circle yourcircle = new Circle();
        System.out.println("The area of circle of radius "+yourcircle.radius+" is "+yourcircle.getArea());
        yourcircle.radius = 100;
        System.out.println("The area of the circle of radius "+yourcircle.radius+" is "+yourcircle.getArea());
    }
}
class Circle {
        double radius;
        Circle() {
            radius = 1.0;
        }
        Circle(double r) {
            radius = r;
        }
        double getArea() {
            return radius*radius*Math.PI;
        }
    }
