package Extras.java_singleton;

public class singleton_main {

    public static void main(String[] args)
    {
        /**
         * Grab the instance of the singleton
         */
        java_singleton singleton = java_singleton.getInstance();

        /**
         * Use a method from the singleton class
         */
        singleton.someMethod();
    }
}
