package java_state_machine;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * This is the main program
 * It will continuously ask the user to
 * decide whether or not to change directions
 *
 * Each time, it will cycle through the directions
 * defined in the enums, based on the current state
 */
public class state_machine_demo {
    public static void main(String[] args)
    {
        Java_State_Machine state_machine = new Java_State_Machine();

        while (getLine() == true)
        {
            state_machine.changeDirection();
        }
    }

    /**
     * This is what grabs the input from the user
     */
    static boolean getLine() {

        System.out.println("Move again? y / n");

        // Grab input from user
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

        // Handle reading the input
        try {
            String line = in.readLine();

            // Handle valid answer
            if (line.toLowerCase().equals("y")) {
                return true;
            }
            if (line.toLowerCase().equals("n")) {
                return false;
            }
        } catch (IOException ex) {
            ex.printStackTrace();
            System.out.println("Invalid answer given, ending program");
        }
        return false;
    }


}
