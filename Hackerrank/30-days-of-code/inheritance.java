

class Student extends Person{
	private int[] testScores;

    /*	
    *   Class Constructor
    *   
    *   @param firstName - A string denoting the Person's first name.
    *   @param lastName - A string denoting the Person's last name.
    *   @param id - An integer denoting the Person's ID number.
    *   @param scores - An array of integers denoting the Person's test scores.
    */
    // Write your constructor here
    Student(String firstName, String lastName, int idNumber, int testScores[]){
        super(firstName,lastName,idNumber);
        this.testScores = testScores;
    }
    /*	
    *   Method Name: calculate
    *   @return A character denoting the grade.
    */
    // Write your method here
    String calculate(){
        int sum = 0;
        for(int i=0;i<testScores.length;i++) sum += testScores[i];
        int ans = sum/testScores.length;
        
        if(90<=ans && ans<=100) return "O";
        else if(80<=ans && ans<90) return "E";
        else if(70<=ans && ans<80) return "A";
        else if(55<=ans && ans<70) return "P";
        else if(40<=ans && ans<55) return "D";
        else return "T";
    }
}

