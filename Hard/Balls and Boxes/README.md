<h2><a href="https://www.geeksforgeeks.org/batch/competitive-programming/track/cp-math-mathematicalPrinciples/problem/balls-and-boxes">Balls and Boxes</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek has&nbsp;<strong>N</strong>&nbsp;boxes numbered 1 to N. Each box contains a ball having some number written on it. The numbers written on the balls are a permutation of 1 to N. Geek started checking boxes randomly. Till now he has checked&nbsp;<strong>K</strong>&nbsp;boxes and to his surprise, none of the boxes, checked so far, contains the balls having the same number as the number written on their box.<br>
Geek wants you to find the number of ways the balls can be put in the boxes such that none of the&nbsp;<strong>K</strong>&nbsp;boxes checked so far have the same number ball inside them. Print the answer modulo&nbsp;<strong>10<sup>9</sup>+7.</strong></span></p>

<p><span style="font-size:18px"><strong>Input Format:</strong></span></p>

<ul>
	<li><span style="font-size:18px">The first line contains an integer&nbsp;<strong>T</strong>&nbsp;- the number of test cases, then the test cases follow:</span></li>
	<li><span style="font-size:18px">The first&nbsp;line and the only line that contains&nbsp;two&nbsp;integers&nbsp;<strong><em>N,K</em></strong><strong><em>.</em></strong></span></li>
</ul>

<p><br>
<span style="font-size:18px"><strong>Output Format:</strong><br>
Print the&nbsp;answer by a newline character.<br>
<strong>Note:&nbsp;</strong>Generated output is white space sensitive, do not add extra spaces on unnecessary newline characters.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤&nbsp; T&nbsp; ≤&nbsp; 100<br>
1 ≤&nbsp; N&nbsp;&nbsp;≤&nbsp; 10<sup>3</sup><br>
1 ≤&nbsp; S&nbsp; ≤&nbsp; min(10,N)</span></p>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>2<strong>
</strong>3 1
3 3
Output:
4
2
Explanation:
Test Case 1: Regardless of the box chosen,
out of the six possible combinations, there
will be 4 ways in which the chosen box does
not contain the ball having the same number.
Test Case 2: Possible assignments are:
{2, 3, 1}, {3, 1, 2}.</span></pre>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Combinatorial</code>&nbsp;