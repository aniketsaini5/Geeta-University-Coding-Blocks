// It's winter season. There is a long queue of students from the four prime courses at Coding Blocks and everyone is here to grab his hoodie. Each student of a course has a different roll number. Whenever a new student will come, he will search for his friend from the end of the queue. Note that a student can only has friend from his course and not from any other course. As soon as he will find any of the friend in the queue, he will stand behind him, otherwise he will stand at the end of the queue. At any moment Kartik Bhaiya will ask the student, who is standing in front of the queue, to come and put his name and grab his hoodie and then remove that student from the queue. There are Q operations of one of the following types:

// E x y : A new student of course x whose roll number is y will stand in queue according to the method mentioned above.
// D : Kartik Bhaiya will ask the student, who is standing in front of the queue, to come and put his name for the hoodie and remove him from the queue.
// Find out the order in which student put their name.

// Note: Number of dequeue operations will never be greater than enqueue operations at any point of time.

// Input Format
// First line contains an integer Q, denoting the number of operations. Next Q lines will contains one of the 2 types of operations.

// Constraints
// 1 ≤ x ≤ 4 1 ≤ y ≤ 50000 1 ≤ Q ≤ 100000

// Output Format
// For each 2nd type of operation, print two space separated integers, the front student's course and roll number.

// Sample Input
// 5
// E 1 1
// E 2 1
// E 1 2
// D
// D
// Sample Output
// 1 1
// 1 2

#include<bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    queue<int> courseQueue; // To keep track of course order
    unordered_map<int, queue<int>> studentQueues; // To keep track of students in each course

    while (Q--) {
        char op;
        cin >> op;

        if (op == 'E') {
            int course, roll;
            cin >> course >> roll;

            if (studentQueues[course].empty()) {
                // First student of this course, add course to courseQueue
                courseQueue.push(course);
            }
            studentQueues[course].push(roll);
        } else if (op == 'D') {
            int frontCourse = courseQueue.front();
            int frontStudent = studentQueues[frontCourse].front();
            studentQueues[frontCourse].pop();

            // Print the front student's course and roll number
            cout << frontCourse << " " << frontStudent << endl;

            if (studentQueues[frontCourse].empty()) {
                // No more students in this course, remove course from courseQueue
                courseQueue.pop();
            }
        }
    }

    return 0;
}