<h2><a href="https://www.geeksforgeeks.org/batch/competitive-programming/track/cp-math-mathematicalPrinciples/problem/yet-another-teams-dividing-problem">Yet Another Teams Dividing Problem</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">There are <strong>N</strong> students in a class. Each student is given a&nbsp;work factor which is distinct number in the range <strong>[1, N]</strong>, in other words <strong>a[]</strong> is a permutation of integers from <strong>1</strong> to <strong>N</strong> where <strong>a[i]</strong> is the work factor of <strong>i<sup>th</sup></strong> student. As their project mentor, you want to divide students in <strong>X</strong>&nbsp;teams where each team is a consecutive range of students. For example team formed by students at index {1, 2, 3} forms a valid team whereas team formed by students at index {1, 3, 7} is not a valid team. Team power is defined as maximum work factor of any student who&nbsp;is in that team. You want to maximise total team power i.e. sum of team powers of all teams. You have to find maximum total team power and number of ways in which you can divide teams to achieve that total team power, as this number can be very large find it modulo 10<sup>9</sup>&nbsp;+ 7.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Input:</strong><br>
1.&nbsp;The first line of the input contains a single integer<em> </em> <strong>T</strong> denoting the number of test cases. The description of&nbsp;<strong>T</strong> test cases follows.<br>
2.&nbsp;The first line of each test case contains two space-separated&nbsp;integers&nbsp;<strong>N </strong>and<strong>&nbsp;X</strong>.<br>
3.&nbsp;The second line of each test case&nbsp;contains <strong>N</strong> space-separated integers which represents <strong>a[]</strong>.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Output:</strong> For each test case, print two integers - maximum total team power and number of ways in which you can divide teams to achieve that total team power, as this number can be very large print it modulo 10<sup>9</sup>&nbsp;+ 7.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1. 1 ≤ T ≤ 100<br>
2. 1&nbsp;≤ X&nbsp;≤ N&nbsp;≤ 10<sup>5</sup><br>
3. 1&nbsp;≤ a[i] ≤ N</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
2
4 2
4 1 3 2
2 2
1 2
<strong>Output:</strong>
7 2
3 1
<strong>Explanation:</strong>
In the first test case, there are two 
ways of dividing teams in which maximum 
total team power of 7 can be achieved : 
{4 1 | 3 2} and {4 | 1 3 2}.</span></pre>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>permutation</code>&nbsp;<code>Combinatorial</code>&nbsp;<code>inclusion-exclusion</code>&nbsp;<code>Algorithms</code>&nbsp;