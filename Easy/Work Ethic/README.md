<h2><a href="https://www.geeksforgeeks.org/batch/competitive-programming/track/cp-math-mathematicalPrinciples/problem/work-ethic">Work Ethic</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek wants to organise a competition in which <strong>N</strong> students participated. The work ethic of <strong>i<sup>th</sup></strong>&nbsp;student is given by <strong>a[i]</strong>, where <strong>a[i] = i</strong>. Geeks wants to make teams of two students. Work ethic of each team is sum of work ethics of students in the team.&nbsp;Geek wants to know how many minimum&nbsp;number of students he can randomly select from these&nbsp;<strong>N</strong> students such that he can make atleast one team with work ethic exactly <strong>N + 1</strong>.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Input:</strong><br>
1.&nbsp;The first line of the input contains a single integer<em> </em> <strong>T</strong> denoting the number of test cases. The description of&nbsp;<strong>T</strong> test cases follows.<br>
2.&nbsp;The first line of each test case contains one&nbsp;integer&nbsp;<strong>N</strong>.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Output:</strong> For each test case, print the answer.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1. 1 ≤ T ≤ 10<sup>5</sup><br>
2. 2&nbsp;≤ N&nbsp;≤ 10<sup>5</sup></span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
2
2
4
<strong>Output:</strong>
2
3
<strong>Explanation:</strong>
<strong>Test Case 1 :</strong> a[] = {1, 2}, we have to 
choose both the students such that we can 
make atleast one team with work ethic = 3.
<strong>Test Case 2 :</strong> a[] = {1, 2, 3, 4}, we 
can randomly choose 3 students with work ethics
either {1, 2, 3} or {1, 2, 4} or {1, 3, 4} or 
{2, 3, 4} such that we can make atleast one team 
with work ethic = 5.
Here, 2 cannot be the answer because if we 
randomly select two students with work ethics 
= {3, 4}, we cannot make atleast one team
with work ethic = 5.</span>
</pre>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>number-theory</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Algorithms</code>&nbsp;