<h2><a href="https://www.geeksforgeeks.org/batch/competitive-programming/track/cp-math-mathematicalPrinciples/problem/christmas-swapping">Christmas Swapping</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">There are <strong>N</strong> people in a christmas office party. Each person is numbered from <strong>1 </strong>to<strong> N</strong>. Each person brought a gift which he/she will give to another person. Gifts are also&nbsp;numbered from <strong>1 </strong>to<strong> N</strong>.&nbsp;A person only gives gift to another person if that person is his/her friend. You are given <strong>M</strong> pairs<strong> {m<sub>i</sub>, m<sub>j</sub>}</strong> denoting that people numbered <strong>m<sub>i</sub> </strong>and<strong> m<sub>j</sub></strong> are friends.<br>
There are arbitrary number of rounds in which people exchange gifts. Obviously no one wants to end up with a gift which they brought. Find number of different permutaions of gifts ending up with people numbered&nbsp;from <strong>1 </strong>to<strong> N </strong>and since the number can be large, find it<strong> modulo 10<sup>9</sup>&nbsp;+ 7 .</strong></span></p>

<p><span style="font-size:18px"><strong>Input:</strong><br>
1.&nbsp;The first line of the input contains a single integer<em> </em> <strong>T</strong> denoting the number of test cases. The description of&nbsp;<strong>T</strong> test cases follows.<br>
2.&nbsp;The first line of each test case contains two space-separated integers&nbsp;integers&nbsp;<strong>N </strong>and<strong> M</strong>.<br>
3.&nbsp;The next <strong>M</strong>&nbsp;lines contains two space-separated integers&nbsp;integers&nbsp;<strong>m<sub>i </sub></strong>and<strong> m<sub>j</sub></strong>.</span></p>

<p><span style="font-size:18px"><strong>Output:</strong> For each test case, print the answer.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1. 1&nbsp;≤&nbsp;T ≤ 10<br>
2. 1&nbsp;≤ N&nbsp;≤&nbsp;10<sup>3</sup><br>
3. 1&nbsp;≤&nbsp;M ≤&nbsp;10<sup>3</sup><br>
4. 1&nbsp;≤ m<sub>i</sub>, m<sub>j</sub>&nbsp;≤ N</span></p>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
2
2 1
1 2
3 1
2 3
<strong>Output:</strong>
1
0
<strong>Explanation:</strong>
<strong>Test Case 1 :</strong> There is only one way : person 
1 will end up with gift person 2 brought and 
vice-versa.
<strong>Test Case 2 :</strong> There are zero ways as person 1 
has no friend which means he can't have any 
gift.</span></pre>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Combinatorial</code>&nbsp;<code>Algorithms</code>&nbsp;