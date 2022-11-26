package java;

import java.util.Stack;
import java.util.Vector;

public class vector {
    /*
     * java中的stack本质上是vector
     */
    public static void stack_demo() {
        Stack<Integer> stack = new Stack<Integer>();
        stack.push(1);
        int temp = stack.peek();
        stack.pop();
        System.out.println(temp);
    }

    public static void vector_demo() {
        Vector<Integer> vector = new Vector<Integer>();
        vector.size();
        vector.add(1);
        vector.add(2);
        vector.get(1);
        vector.elementAt(0);
        vector.capacity();

    }

    public static void main(String args[]) {
        stack_demo();
        vector_demo();
    }
}
