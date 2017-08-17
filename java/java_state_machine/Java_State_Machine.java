package java_state_machine;

import static java_state_machine.direction_enums.*;

public class Java_State_Machine {

    /**
     * This is a state machine class
     * We use this to control different paths that the program may take
     *
     * This is usually done by using if else statements
     * or switch case blocks
     */

    /**
     * Define the current direction at the start
     */
    private direction_enums currentDirection = North;

    /**
     * This is the bulk of the state machine
     * This allows us to change paths based on
     * what the current setting / direction is
     */
    public void changeDirection(){

        if (currentDirection == North)
        {
            currentDirection = South;
            System.out.println("Moving South");
        }

        else if (currentDirection == South)
        {
            currentDirection = East;
            System.out.println("Moving East");
        }

        else if (currentDirection == East)
        {
            currentDirection = West;
            System.out.println("Moving West");
        }

        else
        {
            currentDirection = North;
            System.out.println("Moving North");
        }

    }

}
