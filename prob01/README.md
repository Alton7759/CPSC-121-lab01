# Restaurant bill
Create a program that computes the restaurant bill. The program should ask the user for the meal's cost and the tip percentage.

Assume that the tax is 7.5% of the meal cost. Specifically, please use the value 0.075 to avoid issues with the unit test. This value should be defined as a constant in your program. And the tip is computed by multiplying the tip percentage from the user by the meal cost. Display the meal cost, tax, tip, and total amount.

Follow the sample output below as closely as possible. Note that <b>bold</b> values in the sample represent input by the user. Take note that different user input results in a different output.

<pre>
Please input meal cost: <b>34</b>
Please input tip percentage: <b>15</b>

Restaurant Bill
====================
Subtotal: $34.00
Taxes: $2.55
Tip: $5.10
====================
Total: $41.65
</pre>

# Submission checklist
1. Compiled and ran the driver (main).
1. Manually checked for compilation and logical errors.
1. Ensured no errors on the unit test (make test).

# Code evaluation
Open the terminal and navigate to the folder that contains this exercise. Assuming you have pulled the code inside of `/home/student/lab01-<YOUR_USERNAME>` and you are currently in `/home/student` you can issue the following commands

```
cd lab01-<YOUR_USERNAME>
```

Use the `clang++` command to compile your code and the `./` command to run it. The sample code below shows how you would compile code save in `main.cc` and into the executable file `main`. Make sure you use the correct filenames required in this problem.  Take note that if you make any changes to your code, you will need to compile it first before you see changes when running it.

```
clang++ -std=c++17 main.cc -o main
./main
```

You can run one, two, or all the commands below to `test` your code, `stylecheck` your code's design, or `formatcheck` your work. Kindly make sure that you have compiled and executed your code before issuing any of the commands below to avoid errors.

```
make test
make stylecheck
make formatcheck
```

A faster way of running all these tests uses the `all` parameter.

```
make all
```

# Submission

We recommend pushing to github frequently to back up your work.
