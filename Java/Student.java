public class Student{

    // property or attribute
    int id; // class scoped variable
    String fname, lname, grade;
    float age;

    // Constructor
    public Student(){
        // Attributes are initialized here
        System.out.println("object of Student is beaing created...");
        fname = "Ram";
        lname = "KC";
        age = 23.5f;
        grade = "BCA 3rd Sem";
    }

    public void displayDetails(){
        System.out.println("Displaying the details of student...");
        System.out.println("First Name: " + fname);
        System.out.println("Last Name: "+ lname);
        System.out.println("Age: " + age);
        System.out.println("Grade: " + grade);
    }
    public static void main(String[] x){
        //System.out.println("Hello world");
        Student studObj; // variable of Type Student is declared
        
        studObj = new Student(); // object is created or instantiated and constructor is called
       
        studObj.displayDetails();
    }
}