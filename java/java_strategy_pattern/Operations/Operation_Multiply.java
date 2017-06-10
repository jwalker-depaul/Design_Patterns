package Extras.java_strategy_pattern.Operations;

import Extras.java_strategy_pattern.Strategy_Interface;

/**
 * Created by cad6025 on 6/9/2017.
 */
public class Operation_Multiply implements Strategy_Interface {

    /**
     * This class implements the interface
     *
     * This class is required to define all of
     * the declared methods from the interface
     *
     * @param num1
     * @param num2
     * @return
     */

    @Override
    public int compute(int num1, int num2)
    {
        return num1 + num2;
    }
}
