package Extras.java_singleton;

public class java_singleton {

    /**
     * This is a singleton class
     * We use this to limit the number of
     * objects to 1
     *
     * Other classes can only access it
     * through its' instance
     *
     * This class essentially creates itself
     */


    /**
     * This creates the private instance
     */
    private static java_singleton instance = null;

    /**
     * This is a private constructor
     * which prevents the class from
     * being instantiated
     */
    private java_singleton(){
    }

    /**
     * This method will either create
     * and return or simply return
     * the instance of the class
     */
    public static java_singleton getInstance(){
        if(instance == null) {
            instance = new java_singleton();
        }
        return instance;
    }

    /**
     * An example of a method that
     * only the instance can call
     */
    protected static void someMethod()
    {
        System.out.println("This is a test of the singleton method");
    }
}
