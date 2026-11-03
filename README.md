# Assignment 1 (Lab 3): Loops

Write 7 short C programs. Use loops (`for`, `while`, `do-while`) and `if-else`.

## Rules

- Write your code in `ex1.c` … `ex7.c`.
- Do not change the file names.
- Commit and push your work before the deadline.

## How to Start

1. Accept the assignment. Open your repository.
2. Click **Code** > **Codespaces** > **Create codespace on main**.
3. Wait until the codespace is ready (1–2 minutes the first time). All tools are installed. You do not need to install anything.

**Use VS Code on your computer (Windows, macOS or Linux):**

- **Easy way:** Create the codespace (step 2). Then click **Code** > **Codespaces** > **...** > **Open in Visual Studio Code**. The code runs in the codespace. You do not need a compiler on your computer.
- **Other way:** Clone the repository and open the folder in VS Code. You must have a C compiler (`gcc`) on your computer. Click **Install** when VS Code recommends extensions.

## How to Run

**Option A:** Open a `.c` file. Click the **▷** button (top right). The program compiles and runs in the terminal. Type the input and press `Enter`.

**Option B:** Use the terminal. This command compiles and runs `ex1.c`:

```bash
make run1
```

Use `make run2` … `make run7` for the other exercises.

**Debug:** Open a `.c` file. Press `F5`.

## How to Submit

Run these commands in the terminal:

```bash
git add .
git commit -m "Submit assignment 1"
git push
```

You can push more than one time. Your last push is your submission.

> **Error: "Make sure you configure your user.name and user.email in git"?**
> Run these commands one time. Use your name and your GitHub email. Then commit again.
>
> ```bash
> git config --global user.name "Your Name"
> git config --global user.email "you@example.com"
> ```
>
> **Error: "git is not recognized"?** Install Git from <https://git-scm.com>. Then close and open VS Code again.

---

## Exercise 1: Average (`ex1.c`)

1. Read a positive integer `n`.
2. Read `n` integers.
3. Print the average of the `n` integers.

**Example:** `n = 5`, numbers `2 4 6 8 10`. Output: `6.4` (= (2+4+6+8+10) / 5).

## Exercise 2: Harmonic Series (`ex2.c`)

1. Read a positive integer `n`.
2. Calculate and print H(n) = 1 + 1/2 + 1/3 + … + 1/n.

**Example:** `n = 3`. Output: `1.83` (= 1 + 1/2 + 1/3).

## Exercise 3: Sum of Positives and Negatives (`ex3.c`)

1. Read integers until the user enters `0`.
2. Calculate the sum of the positive numbers.
3. Calculate the sum of the negative numbers.
4. Print the two sums.

**Example:** input `-1 2 4 -3 5 6 1 -8 0`. Output: `18` (= 2+4+5+6+1) and `-12` (= -1-3-8).

## Exercise 4: ASCII Table (`ex4.c`)

Print a table with 26 rows and 4 columns. Each row has a small letter, its ASCII code, the capital letter and its ASCII code. Use a loop.

**Output (start and end):**

```
'a' 97   'A' 65
'b' 98   'B' 66
'c' 99   'C' 67
...
'z' 122  'Z' 90
```

## Exercise 5: Greatest Common Divisor (`ex5.c`)

1. Read two positive integers `x` and `y`.
2. Calculate the greatest common divisor (gcd) of `x` and `y`.
3. Print the gcd.

The gcd is the largest integer that divides `x` and `y` with remainder 0.

Use Euclid's method:

1. Let `M` be the larger value and `m` the smaller value.
2. Calculate `r = M % m`.
3. If `r == 0`, then `m` is the gcd.
4. If `r != 0`, set `M = m` and `m = r`. Go back to step 2.

**Example:** `x = 15`, `y = 40`. Steps: `40 % 15 = 10`, `15 % 10 = 5`, `10 % 5 = 0`. Output: `5`.

## Exercise 6: Ascending or Descending (`ex6.c`)

1. Read a positive integer `n`.
2. Read `n` integers.
3. Print one message:
   - `ascending sequence` if each number (after the first) is larger than the previous number.
   - `descending sequence` if each number (after the first) is smaller than the previous number.
   - `neither ascending nor descending sequence` in all other cases.

**Example:** `n = 10`, numbers `-2 5 7 13 18 24 40 56 90 137`. Output: `ascending sequence`.

## Exercise 7: Two Largest Values (`ex7.c`)

1. Read an integer `n` (`n >= 2`).
2. Read `n` real numbers.
3. Find the two largest numbers. Print them (any order).

**Example:** `n = 9`, numbers `1.5 3.8 14.3 0.0 -2.1 78.1 -5.9 4.4 9.2`. Output: `78.1` and `14.3`.
