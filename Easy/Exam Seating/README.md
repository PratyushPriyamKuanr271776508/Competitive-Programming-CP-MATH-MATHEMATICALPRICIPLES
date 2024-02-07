<h2><a href="https://www.geeksforgeeks.org/batch/competitive-programming/track/cp-math-mathematicalPrinciples/problem/exam-seating">Exam Seating</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek teaches a class of <strong>N</strong> students having roll numbers from <strong>1</strong> to <strong>N</strong>. Each student has a group number <strong>a[i]</strong>, if two students having roll number <strong>i</strong> and <strong>j</strong> have same group number <em>i.e. </em>if&nbsp;<strong>a[i] = a[j]</strong>&nbsp;then they are friends. Geek wants that no two friends must be seated in same room for giving exam.<br>
As Geek is very busy in setting the question paper he gave you <strong>Q</strong> queries, each query consist of two integers <strong>left</strong> and <strong>right</strong>. He wants to know that if students having roll numbers from <strong>left</strong> to <strong>right</strong> can be seated in same room or not. You have to output "<strong>YES</strong>" (witjout quotes) if they can be seated in same room, otherwise output "<strong>NO</strong>" (without qoutes).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Input:</strong><br>
1.&nbsp;The first line of the input contains a single integer<em> </em> <strong>T</strong> denoting the number of test cases. The description of&nbsp;<strong>T</strong> test cases follows.<br>
2.&nbsp;The first line of each test case contains two-space separated&nbsp;integers <strong>N </strong>and <strong>Q</strong>.<br>
3.&nbsp;The second line of each test case&nbsp;contains <strong>N</strong> space-separated integers which represents <strong>a[]</strong>.<br>
4. Next <strong>Q</strong> lines contains two space-separated integers <strong>left</strong> and <strong>right</strong> denoting a query.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Output:</strong> For each test case, print the answer.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1. 1 ≤&nbsp;T ≤ 1000<br>
2. 1&nbsp;≤&nbsp;N, Q ≤&nbsp;10<sup>3</sup><br>
3. 1&nbsp;≤&nbsp;a[i]&nbsp;≤&nbsp;100<br>
4. 1&nbsp;≤ left&nbsp;≤ right&nbsp;≤&nbsp;10<sup>3</sup><br>
4. It is guaranteed that sum of Q&nbsp;over all test cases does not exceed 10<sup>5</sup>.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
2
5 2
1 2 1 2 1
1 2
2 4
3 1
1 2 100
1 3
</span><span style="font-size:18px"><strong>Output:</strong>
YES
NO
YES
<strong>Explanation:</strong>
<strong>Test Case 1 :</strong> Student with roll number 1 
and 2 can be seated in same room but student 
with roll number 2 and 4 cannot be seated 
in same room as they are friends.
<strong>Test Case 2 :</strong> All students can be seated 
in same room as none of them are friends.</span></pre>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>number-theory</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Algorithms</code>&nbsp;