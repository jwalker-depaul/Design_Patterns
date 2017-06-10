package Extras.java_strategy_pattern;

/**
 * Created by cad6025 on 6/9/2017.
 */
public interface Strategy_Interface {

    /**
     * This is the interface
     *
     * It is basically a contract that states
     * that all who implement it must have
     * the same methods
     *
     * The methods in an interface are only declared
     * Define the methods in classes that implement
     * the interface
     *
     * @param num1
     * @param num2
     * @return
     */

    public int compute(int num1, int num2);
}
