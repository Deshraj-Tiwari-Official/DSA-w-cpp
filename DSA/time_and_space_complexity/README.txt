Basically, the concept is this:


Let's say we have a loop that iterates n times (n can be anything from 1 to a reallly big number like 10^10 or something) and performs an operation each time. For example, a loop to find factorial.
Each time, it would perform an operation that would make the time complexity to be O(k), where k is constant.

To find the time complexity, we ignore the constant part. Thus the time complexity would be O(1).
This loops as we know runs n times, thus the time complexity will be O(n*1) or O(n).


Now assume that some operation is being performed in a nested loop, that is n^2 times, and an operation in that same code is also being performed n times, in that case:
time complexity would be O(n^2+n) but we take the value that has the highest exponential power. Thus, the time complexity is O(n^2).



CONSCLUSION:
To find the time complexity of a loop, we ignore the constant part and take the highest exponential power.

EZPZ
