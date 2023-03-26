import java.util.Scanner;

class Employee{
    String name = new String();
    int age;
    int salary;
    Scanner sc = new Scanner(System.in);

    void enter_details(){
        System.out.println("Enter name:");
        name = sc.nextLine();
        System.out.println("Enter age:");
        age = sc.nextInt();
        System.out.println("Enter salary:");
        salary = sc.nextInt();
    }

    void print_details(){
        System.out.println("Name:"+name);
        System.out.println("Age:"+age);
        System.out.println("Salary:"+salary);
    }
}

class Manager extends Employee{
    int bonus;

    void enter_details(){
        System.out.println("Enter age:");
        age = sc.nextInt();
        System.out.println("Enter name:");
        name = sc.nextLine();
        
        System.out.println("Enter salary:");
        salary = sc.nextInt();
        System.out.println("Enter bonus:");
        bonus = sc.nextInt();
    }
    void print_details(){
        System.out.println("Name:"+name);
        System.out.println("Age:"+age);
        System.out.println("Salary:"+salary);
        System.out.println("Bonus:"+bonus);
    }
}

public class _5_Inheritance {
    public static void main(String[] args) {

        Employee emp1 = new Employee();
        Employee emp2 = new Manager();


        emp1.enter_details();
        emp1.enter_details();
        
        emp2.print_details();
        emp2.print_details();

    }
}
