package Extras.java_strategy_pattern;

import Extras.java_strategy_pattern.Operations.*;

/**
 * Created by cad6025 on 6/9/2017.
 */
public class StrategyPatternMain {

    /**
     * This class is used to test our
     * strategy pattern.
     */

    public static void main(String[] args)
    {
        // Set the desired strategy to be used
        Strategy_Context context = new Strategy_Context(new Operation_Add());
        // Print it out
        System.out.println("10 + 5 = " + context.executeStrategy(10, 5));

        // Set next strategy and print it out
        context = new Strategy_Context(new Operation_Subtract());
        System.out.println("10 - 5 = " + context.executeStrategy(10, 5));

        // Set next strategy and print it out
        context = new Strategy_Context(new Operation_Multiply());
        System.out.println("10 * 5 = " + context.executeStrategy(10, 5));

        // Set next strategy and print it out
        context = new Strategy_Context(new Operation_Divide());
        System.out.println("10 / 5 = " + context.executeStrategy(10, 5));
    }
}
