#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

using namespace std;

const int num_seats = 10;
vector<int> seats(num_seats, 0); // 0 represents not booked yet
mutex mtx;

void bookSeat(int seat_num, string username) {
    cout <<username<< " trying to book seat " << seat_num << endl;
    mtx.lock();
    if (seats[seat_num] == 0) {
        this_thread::sleep_for(chrono::milliseconds(1)); // Simulate some work
        seats[seat_num]++ ;
        cout << "Seat  booked by "<<username<< endl;
    }
    else {
        cout << "Seat " << seat_num << " is already booked by "<<username<<" on Thread " << this_thread::get_id() << endl;
    }
    mtx.unlock();
}

int main() {
    vector<thread> threads;

    thread t1(bookSeat, 2, "keerti");
    thread t2(bookSeat, 2, "amit");
    thread  t3(bookSeat, 2, "rohit");

    t1.join();
    t2.join();
    t3.join();
    cout << "-----------------------------------------------------------------" << endl;

    cout << "value of seat 2 is " << seats[2] << endl;

    return 0;
}
