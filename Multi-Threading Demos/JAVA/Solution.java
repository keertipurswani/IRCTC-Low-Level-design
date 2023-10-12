import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.locks.ReentrantLock;

public class Solution {
    private static final int numSeats = 10;
    private static List<Integer> seats = new ArrayList<>(numSeats);
    private static ReentrantLock lock = new ReentrantLock();

    public static void bookSeat(int seatNum, String username) {
        System.out.println(username + " trying to book seat " + seatNum);

        lock.lock();
        try {
            if (seats.get(seatNum) == 0) {
                // Simulate some work
                try {
                    Thread.sleep(1);
                } catch (InterruptedException e) {
                    Thread.currentThread().interrupt();
                }
                seats.set(seatNum, seats.get(seatNum) + 1);
                System.out.println("Seat booked by " + username);
            } else {
                System.out.println("Seat " + seatNum + " is already booked by " + username);
            }
        } finally {
            lock.unlock();
        }
    }

    public static void main(String[] args) {
        for (int i = 0; i < numSeats; i++) {
            seats.add(0); // 0 represents not booked yet
        }

        Thread t1 = new Thread(() -> bookSeat(2, "keerti"));
        Thread t2 = new Thread(() -> bookSeat(2, "amit"));
        Thread t3 = new Thread(() -> bookSeat(2, "rohit"));

        t1.start();
        t2.start();
        t3.start();

        try {
            t1.join();
            t2.join();
            t3.join();
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }

        System.out.println("-----------------------------------------------------------------");
        System.out.println("Value of seat 2 is " + seats.get(2));
    }
}
