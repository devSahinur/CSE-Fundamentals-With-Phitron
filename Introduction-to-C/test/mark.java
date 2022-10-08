import java.util.*;
public class mark {
    public static void main(String args[]) {
        int score = 88;
        String grade = null;
        switch (score) {
            case score<=80 || score=<100:
                grade = "A+";
                break;
            case 70:
                grade = "A";
                break;
            case 60:
                grade = "B";
                break;
            case 50:
                grade = "C";
                break;
            case 40:
                grade = "D";
                break;
        
            default:
                grade = "F";
                break;
        }
        System.out.println("grade = "+grade);
    }
}
