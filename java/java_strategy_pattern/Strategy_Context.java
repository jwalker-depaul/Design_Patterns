package Extras.java_strategy_pattern;

/**
 * Created by cad6025 on 6/9/2017.
 */
public class Strategy_Context {

    /**
     * This is the context class
     *
     * During runtime, this context will determine
     * which strategy will be used an implemented.
     */

    private Strategy_Interface strategy;

    /**
     * This method is used to set the strategy
     * during runtime
     * @param strategy
     */
    public Strategy_Context( Strategy_Interface strategy)
    {
        this.strategy = strategy;
    }

    /**
     * This method is used to implement a
     * function of the desired strategy
     * @param num1
     * @param num2
     * @return
     */
    public int executeStrategy(int num1, int num2)
    {
        return strategy.compute(num1, num2);
    }
}
